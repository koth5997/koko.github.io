from flask import Flask, request, render_template
import serial
import time

app = Flask(__name__)

# 아두이노와의 시리얼 통신 설정 (예: /dev/ttyUSB0로 설정)
try:
    arduino = serial.Serial('COM3', 9600, timeout=1)
    time.sleep(3)  # 아두이노와의 초기 연결을 위해 잠시 대기
except serial.SerialException as e:
    print(f"Error connecting to Arduino: {e}")
    arduino = None

@app.route('/')
def index():
    return render_template('control.html')  # control.html 파일을 렌더링하도록 변경

@app.route('/send', methods=['GET'])
def send():
    number = request.args.get('num')
    if number and number.isdigit():
        if arduino is not None and arduino.is_open:
            try:
                arduino.write(f"{number}\n".encode())  # 아두이노로 데이터 전송
                print(f"Sent {number} to Arduino")
                return "Success", 200
            except serial.SerialException as e:
                print(f"Error writing to Arduino: {e}")
                return "Failed to send data to Arduino", 500
        else:
            print("Arduino not connected")
            return "Arduino not connected", 500
    else:
        return "Invalid Number", 400

if __name__ == '__main__':
    app.run(host='192.168.1.3', port=5000)
