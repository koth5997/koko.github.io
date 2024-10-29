#include "braille.h"

int dataPin = 2; // DATA 핀번호
int latchPin = 3; // LATCH 핀번호
int clockPin = 4; // CLOCK 핀번호
int no_module = 13; // 점자 출력기 연결 개수
braille bra(dataPin, latchPin, clockPin, no_module);

char string_buffer[100]; // 수신 받은 문자열
int str_char_count = 0; // 전체 문자개수

void setup() {
  Serial.begin(9600);
  bra.begin();
}

void loop() {
  if (Serial.available() > 0) {
    // 문자열 입력 받기
    str_char_count = Serial.readBytesUntil('\n', string_buffer, sizeof(string_buffer));
    string_buffer[str_char_count] = '\0';

    // 문자열을 숫자로 변환
    int received_num = atoi(string_buffer);
    handleCharacter(received_num);
  }
}

void handleCharacter(int num) {
  switch (num) {
    case 1: // 'ㄱ' 대신 숫자 '1' 사용
      bra.on(0, 0);    
     // ㄱ 글자 표시
      bra.on(2, 2);
      bra.on(3, 3);
      bra.on(3, 2);
      bra.on(4, 3);
      bra.on(4, 2);
      bra.on(5, 3);
      bra.on(5, 5);
      bra.on(9, 1);
      bra.on(9, 3);
      bra.on(9, 5);
      bra.on(12, 1);
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 2: // 'ㄴ' 대신 숫자 '2' 사용
      bra.on(0, 0);
      bra.on(0, 1);
      // ㄴ 글자표시
      bra.on(2, 2);
      bra.on(2, 4);
      bra.on(6, 0);
      bra.on(6, 2);
      bra.on(6, 4);
      bra.on(10, 1);
      bra.on(10, 2);
      bra.on(11, 0);
      bra.on(11, 1);
      bra.on(11, 2);
      bra.on(12, 1);
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 3: // 'ㄷ' 대신 숫자 '3' 사용
      bra.on(0, 0);
      bra.on(0, 3);
      // ㄷ 글자 표시
      bra.on(2, 2);
      bra.on(3, 3);
      bra.on(3, 2);
      bra.on(4, 3);
      bra.on(4, 2);
      bra.on(5, 3);
      bra.on(2, 4);
      bra.on(6, 0);
      bra.on(6, 2);
      bra.on(6, 4);
      bra.on(10, 1);
      bra.on(10, 2);
      bra.on(11, 0);
      bra.on(11, 1);
      bra.on(11, 2);
      bra.on(12, 0);
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 4: // 'ㄹ' 대신 숫자 '4' 사용
      bra.on(0, 2);
      //ㄹ 글자 
      bra.on(2, 0);
      bra.on(3, 1);
      bra.on(3, 0);
      bra.on(4, 1);
      bra.on(4, 0);
      bra.on(5, 1);
      bra.on(5, 3);
      bra.on(5, 5);
      bra.on(9, 1);
      bra.on(8, 0);
      bra.on(8, 1);
      bra.on(7, 0);
      bra.on(7, 1);
      bra.on(6, 0);
      bra.on(6, 2);
      bra.on(6, 4);
      bra.on(10, 1);
      bra.on(10, 2);
      bra.on(11, 0);
      bra.on(11, 1);
      bra.on(11, 2);
      bra.on(12, 1);
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 5: // 'ㅁ' 대신 숫자 '5' 사용
      bra.on(0, 1);
      bra.on(0, 2);
      //ㅁ 글자 표시
      bra.on(2, 2);
      bra.on(3, 3);
      bra.on(3, 2);
      bra.on(4, 3);
      bra.on(4, 2);
      bra.on(5, 3);
      bra.on(2, 4);
      bra.on(5, 5);
      bra.on(6, 0);
      bra.on(9, 1);
      bra.on(6, 2);
      bra.on(9, 3);
      bra.on(6, 4);
      bra.on(9, 5);
      bra.on(10, 1);
      bra.on(10, 2);
      bra.on(11, 0);
      bra.on(11, 1);
      bra.on(11, 2);
      bra.on(12, 1);
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 6: // 'ㅂ' 대신 숫자 '6' 사용
      bra.on(0, 0);
      bra.on(0, 2);
      //ㅂ 글자 표시
      bra.on(2, 2);
      bra.on(5, 3);
      bra.on(2, 4);
      bra.on(5, 5);
      bra.on(6, 0);
      bra.on(7, 1);
      bra.on(7, 0);
      bra.on(8, 1);
      bra.on(8, 0);
      bra.on(9, 1);
      bra.on(6, 2);
      bra.on(9, 3);
      bra.on(6, 4);
      bra.on(9, 5);
      bra.on(10, 1);
      bra.on(10, 2);
      bra.on(11, 0);
      bra.on(11, 1);
      bra.on(11, 2);
      bra.on(12, 1);
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 7: // 'ㅅ' 대신 숫자 '7' 사용
      bra.on(0, 4);
      //ㅅ 글자표시
      bra.on(4, 3);
      bra.on(4, 5);
      bra.on(7, 0);
      bra.on(8, 0);
      bra.on(7, 2);
      bra.on(8, 2);
      bra.on(7, 5);
      bra.on(9, 5);
      bra.on(10, 1);
      bra.on(12, 0);

      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 8: // 'ㅇ' 대신 숫자 '8' 사용 종성으로사용
      bra.on(0, 2);
      bra.on(0, 3);
      bra.on(0, 4);
      bra.on(0, 5);
      //ㅈ 글자표시
      bra.on(3, 3);
      bra.on(3, 2);
      bra.on(4, 3);
      bra.on(2, 4);
      bra.on(6, 0);
      bra.on(6, 2);
      bra.on(4, 4);
      bra.on(8, 0);
      bra.on(8, 2);
      bra.on(7, 5);
      bra.on(7, 4);
      bra.on(8, 5);
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 9: // 'ㅈ' 대신 숫자 '8' 사용
      bra.on(0, 0);
      bra.on(0, 4);
      //ㅈ 글자표시
      bra.on(2, 2);
      bra.on(3, 3);
      bra.on(3, 2);
      bra.on(4, 3);
      bra.on(4, 2);
      bra.on(5, 3);
      bra.on(4, 4);
      bra.on(8, 1);
      bra.on(7, 2);
      bra.on(8, 2);
      bra.on(7, 5);
      bra.on(9, 5);
      bra.on(10, 1);
      bra.on(12, 0);

      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 10: // 'ㅊ' 대신 숫자 '9' 사용
      bra.on(0, 2);
      bra.on(0, 4);
      // ㅊ 글자 표시
      bra.on(3, 1);
      bra.on(3, 0);
      bra.on(4, 1);
      bra.on(4, 0);
      bra.on(2, 4);
      bra.on(3, 5);
      bra.on(3, 4);
      bra.on(4, 5);
      bra.on(4, 4);
      bra.on(5, 5);
      bra.on(8, 0);
      bra.on(8, 3);
      bra.on(7, 4);
      bra.on(8, 4);
      bra.on(10, 2);
      bra.on(12, 1);
      bra.on(10, 4);
      bra.on(12, 4);

      bra.refresh();
      delay(500);
      bra.all_off();

      bra.refresh();
      break;
    case 11: // 'ㅋ' 대신 숫자 '10' 사용
      bra.on(0, 0);
      bra.on(0, 1);
      bra.on(0, 3);
      // ㅋ 글자표시
      bra.on(2, 2);
      bra.on(3, 3);
      bra.on(3, 2);
      bra.on(4, 3);
      bra.on(4, 2);
      bra.on(5, 3);
      bra.on(5, 5);
      bra.on(9, 1);
      bra.on(9, 3);
      bra.on(8, 2);
      bra.on(8, 3);
      bra.on(7, 2);
      bra.on(7, 3);
      bra.on(6, 2);
      bra.on(9, 5);
      bra.on(12, 1);
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 12: // 'ㅌ' 대신 숫자 '11' 사용
      bra.on(0, 1);
      bra.on(0, 2);
      bra.on(0, 3);
      //ㅌ 글자 표시
      bra.on(2, 2);
      bra.on(3, 3);
      bra.on(3, 2);
      bra.on(4, 3);
      bra.on(4, 2);
      bra.on(5, 3);
      bra.on(2, 4);
      bra.on(6, 0);
      bra.on(6, 2);
      bra.on(7, 3);
      bra.on(7, 2);
      bra.on(8, 3);
      bra.on(8, 2);
      bra.on(9, 3);
      bra.on(6, 4);
      bra.on(10, 1);
      bra.on(10, 4);
      bra.on(10, 5);
      bra.on(11, 3);
      bra.on(11, 4);
      bra.on(11, 5);
      bra.on(12, 3);

      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 13: // 'ㅍ' 대신 숫자 '12' 사용
      bra.on(0, 0);
      bra.on(0, 1);
      bra.on(0, 2);
      // ㅍ 글자 표시 
      bra.on(2, 2);
      bra.on(3, 3);
      bra.on(3, 2);
      bra.on(4, 3);
      bra.on(4, 2);
      bra.on(5, 3);
      bra.on(3, 5);
      bra.on(4, 4);
      bra.on(7, 1);
      bra.on(8, 0);
      bra.on(7, 3);
      bra.on(8, 2);
      bra.on(7, 5);
      bra.on(8, 4);
      bra.on(10, 1);
      bra.on(10, 2);
      bra.on(11, 0);
      bra.on(11, 1);
      bra.on(11, 2);
      bra.on(12, 1);

      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 14: // 'ㅎ' 대신 숫자 '13' 사용
      bra.on(0, 0);
      bra.on(0, 2);
      bra.on(0, 3);
      bra.refresh();
      // ㅎ 글자 표시
      bra.on(3, 0);
      bra.on(4, 1);
      bra.on(2, 4);
      bra.on(3, 5);
      bra.on(3, 4);
      bra.on(4, 5);
      bra.on(4, 4);
      bra.on(5, 5);
      bra.on(7, 2);
      bra.on(8, 3);
      bra.on(7, 5);
      bra.on(8, 4);
      bra.on(10, 2);
      bra.on(11, 2);
      bra.on(11, 3);
      bra.on(11, 4);
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 15: // 'ㅏ' 대신 숫자 '14' 사용
      bra.on(0, 1);
      bra.on(0, 3);
      bra.on(0, 4);
      // ㅏ 글자 표시
      bra.on(3, 3);
      bra.on(3, 5);
      bra.on(7, 1);
      bra.on(7, 3);
      bra.on(7, 2);
      bra.on(8, 3);
      bra.on(8, 2);
      bra.on(7, 5);
      bra.on(10, 2);
      bra.on(10, 5);
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 16: // 'ㅑ' 대신 숫자 '15' 사용
      bra.on(0, 0);
      bra.on(0, 2);
      bra.on(0, 5);
      // ㅑ 글자표시
      bra.on(3, 1);
      bra.on(3, 3);
      bra.on(3, 5);
      bra.on(3, 4);
      bra.on(4, 5);
      bra.on(4, 4);
      bra.on(7, 1);
      bra.on(7, 3);
      bra.on(7, 5);
      bra.on(7, 4);
      bra.on(8, 5);
      bra.on(8, 4);
      bra.on(10, 2);
      bra.on(10, 5);
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 17: // 'ㅓ' 대신 숫자 '15' 사용
      bra.on(0, 0);
      bra.on(0, 3);
      bra.on(0, 5);
      // ㅓ 글자표시
      bra.on(4, 2);
      bra.on(4, 4);
      bra.on(8, 0);
      bra.on(8, 2);
      bra.on(8, 3);
      bra.on(7, 2);
      bra.on(7, 3);
      bra.on(8, 4);
      bra.on(11, 2);
      bra.on(11, 5);
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 18: // 'ㅕ' 대신 숫자 '17' 사용
      bra.on(0, 1);
      bra.on(0, 2);
      bra.on(0, 4);
      // ㅕ글자표시
      bra.on(4, 0);
      bra.on(4, 2);
      bra.on(4, 4);
      bra.on(4, 5);
      bra.on(3, 4);
      bra.on(3, 5);
      bra.on(8, 0);
      bra.on(8, 2);
      bra.on(8, 4);
      bra.on(8, 5);
      bra.on(7, 4);
      bra.on(7, 5);
      bra.on(11, 2);
      bra.on(11, 5); 
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 19: // 'ㅗ' 대신 숫자 '18' 사용
      bra.on(0, 1);
      bra.on(0, 4);
      bra.on(0, 5);
      //ㅗ 글자 표시
      bra.on(7, 0);
      bra.on(7, 2);
      bra.on(7, 4);
      bra.on(10, 1);
      bra.on(10, 2);
      bra.on(11, 0);
      bra.on(11, 1);
      bra.on(11, 2);
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 20: // 'ㅛ' 대신 숫자 '19' 사용
      bra.on(0, 0);
      bra.on(0, 4);
      bra.on(0, 5);
      //ㅛ 글자 표시
      bra.on(10, 0);
      bra.on(10, 1);
      bra.on(10, 2);
      bra.on(3, 3);
      bra.on(3, 5);
      bra.on(7, 1);
      bra.on(7, 3);
      bra.on(7, 5);
      bra.on(4, 2);
      bra.on(4, 4);
      bra.on(8, 0);
      bra.on(8, 2);
      bra.on(8, 4);
      bra.on(11, 2);
      bra.on(12, 1);
      bra.on(12, 0);
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 21: // 'ㅜ' 대신 숫자 '20' 사용
      bra.on(0, 0);
      bra.on(0, 1);
      bra.on(0, 5);
      // ㅜ 글자표시
      bra.on(2, 3);
      bra.on(2, 2);
      bra.on(3, 3);
      bra.on(3, 2);
      bra.on(4, 3);
      bra.on(4, 2);
      bra.on(5, 3);
      bra.on(3, 4);
      bra.on(7, 0);
      bra.on(7, 2);
      bra.on(7, 4);
      bra.on(11, 0);
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 22: // 'ㅠ' 대신 숫자 '21' 사용
      bra.on(0, 0);
      bra.on(0, 1);
      bra.on(0, 4);
      // ㅠ 글자 표시
      bra.on(2, 3);
      bra.on(2, 2);
      bra.on(3, 3);
      bra.on(3, 2);
      bra.on(4, 3);
      bra.on(4, 2);
      bra.on(5, 3);
      bra.on(5, 2);
      bra.on(3, 5);
      bra.on(7, 1);
      bra.on(7, 3);
      bra.on(7, 5);
      bra.on(10, 2);
      bra.on(4, 4);
      bra.on(8, 0);
      bra.on(8, 2);
      bra.on(8, 4);
      bra.on(11, 2);
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 23: // 'ㅡ' 대신 숫자 '22' 사용
      bra.on(0, 0);
      bra.on(0, 3);
      bra.on(0, 4);
      // ㅡ 글자 표시
      bra.on(6, 2);
      bra.on(7, 2);
      bra.on(7, 2);
      bra.on(8, 3);
      bra.on(8, 2);
      bra.on(9, 3);

      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 24: // 'ㅣ' 대신 숫자 '23' 사용
      bra.on(0, 1);
      bra.on(0, 2);
      bra.on(0, 5);
      // ㅣ 글자표시
      bra.on(3, 2);
      bra.on(3, 4);
      bra.on(7, 0);
      bra.on(7, 2);
      bra.on(7, 4);
      bra.on(11, 0);
      bra.on(11, 3);

      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 25: // 'ㅐ' 대신 숫자 '24' 사용
      bra.on(0, 1);
      bra.on(0, 2);
      bra.on(0, 3);
      bra.on(0, 5);
      // ㅐ 글자 표시
      bra.on(3, 3);
      bra.on(3, 5);
      bra.on(7, 1);
      bra.on(7, 3);
      bra.on(7, 5);
      bra.on(10, 2);
      bra.on(10, 5);
      bra.on(7, 2);
      bra.on(8, 3);
      bra.on(4, 2);
      bra.on(4, 4);
      bra.on(8, 0);
      bra.on(8, 2);
      bra.on(8, 4);
      bra.on(11, 2);
      bra.on(11, 5);
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 26: // 'ㅔ' 대신 숫자 '25' 사용
      bra.on(0, 0);
      bra.on(0, 1);
      bra.on(0, 2);
      bra.on(0, 5);
      // ㅔ 글자 표시
      bra.on(5, 3);
      bra.on(5, 5);
      bra.on(9, 1);
      bra.on(9, 3);
      bra.on(9, 5);
      bra.on(12, 1);
      bra.on(12, 3);
      bra.on(4, 5);
      bra.on(8, 1);
      bra.on(8, 3);
      bra.on(7, 2);
      bra.on(7, 3);
      bra.on(8, 5);
      bra.on(11, 1);
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 27: // 'ㅚ' 대신 숫자 '26' 사용
      bra.on(0, 0);
      bra.on(0, 1);
      bra.on(0, 2);
      bra.on(0, 4);
      bra.on(0, 5);
      // ㅚ 글자 표기
      bra.on(10, 0);
      bra.on(10, 1);
      bra.on(3, 5);
      bra.on(7, 1);
      bra.on(7, 3);
      bra.on(7, 5);
      bra.on(10, 2);
      bra.on(11, 0);
      bra.on(11, 1);
      bra.on(4, 2);
      bra.on(4, 4);
      bra.on(8, 0);
      bra.on(8, 2);
      bra.on(8, 4);
      bra.on(11, 2);
      bra.on(11, 5);
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 28: // 'ㅘ' 대신 숫자 '27' 사용
      bra.on(0, 1);
      bra.on(0, 3);
      bra.on(0, 4);
      bra.on(0, 5);
      // ㅘ 글자표시
      bra.on(10, 0);
      bra.on(10, 1);
      bra.on(10, 2);
      bra.on(3, 5);
      bra.on(7, 1);
      bra.on(7, 3);
      bra.on(7, 5);
      bra.on(11, 0);
      bra.on(11, 1);
      bra.on(4, 2);
      bra.on(4, 4);
      bra.on(8, 0);
      bra.on(8, 2);
      bra.on(9, 3);
      bra.on(9, 2);
      bra.on(8, 4);
      bra.on(11, 2);
      bra.on(11, 5);
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 29: // 'ㅝ' 대신 숫자 '28' 사용
      bra.on(0, 0);
      bra.on(0, 1);
      bra.on(0, 3);
      bra.on(0, 5);
      // ㅝ 글자 표시
      bra.on(2, 5);
      bra.on(2, 4);
      bra.on(3, 5);
      bra.on(3, 4);
      bra.on(4, 5);
      bra.on(7, 1);
      bra.on(7, 3);
      bra.on(7, 5);
      bra.on(10, 2);
      bra.on(8, 3);
      bra.on(8, 2);
      bra.on(5, 1);
      bra.on(5, 3);
      bra.on(5, 5);
      bra.on(9, 1);
      bra.on(9, 3);
      bra.on(9, 5);
      bra.on(12, 1);
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 30: // 'ㅢ' 대신 숫자 '29' 사용
      bra.on(0, 0);
      bra.on(0, 2);
      bra.on(0, 3);
      bra.on(0, 4);
      // ㅢ 글자 표시
      bra.on(10, 1);
      bra.on(10, 2);
      bra.on(11, 0);
      bra.on(11, 1);
      bra.on(11, 2);
      bra.on(5, 3);
      bra.on(5, 5);
      bra.on(9, 1);
      bra.on(9, 3);
      bra.on(9, 5);
      bra.on(12, 1);
      bra.on(12, 3);
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;

    case 31: // 'ㅖ' 대신 숫자 '30' 사용
      bra.on(0, 0);
      bra.on(0, 5);
      //ㅖ 글자표시
      bra.on(5, 3);
      bra.on(5, 5);
      bra.on(9, 1);
      bra.on(9, 3);
      bra.on(9, 5);
      bra.on(12, 1);
      bra.on(12, 3);
      bra.on(4, 5);
      bra.on(8, 1);
      bra.on(7, 1);
      bra.on(7, 0);
      bra.on(8, 3);
      bra.on(7, 5);
      bra.on(7, 4);
      bra.on(8, 5);
      bra.on(11, 1);
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 32: // 'ㅟ' 대신 숫자 '31' 사용
      bra.on(0, 0);
      bra.on(0, 1);
      bra.on(0, 5);
      bra.on(1, 1);
      bra.on(1, 2);
      bra.on(1, 3);
      bra.on(1, 5);
      // ㅟ 글자 표시
      bra.on(6, 2);
      bra.on(7, 3);
      bra.on(7, 2);
      bra.on(7, 4);
      bra.on(11, 0);
      bra.on(11, 3);
      bra.on(8, 3);
      bra.on(8, 2);
      bra.on(5, 3);
      bra.on(5, 5);
      bra.on(9, 1);
      bra.on(9, 3);
      bra.on(9, 5);
      bra.on(12, 1);
      bra.on(12, 3);
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 33: // 'ㅒ' 대신 숫자 '32' 사용
      bra.on(0, 0);
      bra.on(0, 2);
      bra.on(0, 5);
      bra.on(1, 1);
      bra.on(1, 2);
      bra.on(1, 3);
      bra.on(1, 5);
      // ㅒ 글자 표시
      bra.on(3, 3);
      bra.on(3, 5);
      bra.on(7, 1);
      bra.on(7, 3);
      bra.on(7, 5);
      bra.on(10, 2);
      bra.on(10, 5);
      bra.on(7, 0);
      bra.on(8, 1);
      bra.on(7, 4);
      bra.on(8, 5);
      bra.on(4, 2);
      bra.on(4, 4);
      bra.on(8, 0);
      bra.on(8, 2);
      bra.on(8, 4);
      bra.on(11, 2);
      bra.on(11, 5);
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 34: // 'ㅙ' 대신 숫자 '33' 사용
      bra.on(0, 1);
      bra.on(0, 3);
      bra.on(0, 4);
      bra.on(0, 5);
      bra.on(1, 1);
      bra.on(1, 2);
      bra.on(1, 3);
      bra.on(1, 5);
      // ㅙ 글자 표시
      bra.on(10, 0);
      bra.on(10, 1);
      bra.on(10, 2);
      bra.on(7, 1);
      bra.on(7, 3);
      bra.on(7, 5);
      bra.on(11, 0);
      bra.on(11, 1);
      bra.on(4, 2);
      bra.on(4, 4);
      bra.on(8, 0);
      bra.on(8, 2);
      bra.on(8, 4);
      bra.on(11, 2);
      bra.on(11, 5);
      bra.on(9, 3);
      bra.on(5, 2);
      bra.on(5, 4);
      bra.on(9, 0);
      bra.on(9, 2);
      bra.on(9, 4);
      bra.on(12, 0);
      bra.on(12, 2);
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 35: // 'ㅞ' 대신 숫자 '34' 사용
      bra.on(0, 0);
      bra.on(0, 1);
      bra.on(0, 2);
      bra.on(0, 3);
      bra.on(1, 0);
      bra.on(1, 1);
      bra.on(1, 3);
      bra.on(1, 5);
      // ㅞ 글자 표시
      bra.on(6, 1);
      bra.on(6, 0);
      bra.on(7, 1);
      bra.on(7, 3);
      bra.on(7, 5);
      bra.on(10, 2);
      bra.on(7, 0);
      bra.on(8, 1);
      bra.on(4, 2);
      bra.on(4, 4);
      bra.on(8, 0);
      bra.on(8, 4);
      bra.on(8, 5);
      bra.on(11, 2);
      bra.on(5, 2);
      bra.on(5, 2);
      bra.on(9, 0);
      bra.on(9, 2);
      bra.on(9, 4);
      bra.on(12, 0);

      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 36: // 'ㄲ' 대신 숫자 '35' 사용
      bra.on(0, 4);
      bra.on(1, 0);
      //ㄲ 글자표시
      bra.on(2, 5);
      bra.on(2, 4);
      bra.on(3, 5);
      bra.on(7, 1);
      bra.on(7, 3);
      bra.on(7, 5);
      bra.on(10, 2);
      bra.on(4, 5);
      bra.on(4, 4);
      bra.on(5, 5);
      bra.on(9, 1);
      bra.on(9, 3);
      bra.on(9, 5);
      bra.on(12, 1);

      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 37: // 'ㄸ' 대신 숫자 '36' 사용
      bra.on(0, 4);
      bra.on(1, 0);
      bra.on(1, 3);
    //ㄸ 글자표시
      bra.on(2, 5);
      bra.on(2, 4);
      bra.on(3, 5);
      bra.on(6, 1);
      bra.on(6, 3);
      bra.on(6, 5);
      bra.on(10, 0);
      bra.on(10, 1);
      bra.on(10, 2);
      bra.on(4, 5);
      bra.on(4, 4);
      bra.on(5, 5);
      bra.on(8, 1);
      bra.on(8, 3);
      bra.on(8, 5);
      bra.on(11, 1);
      bra.on(11, 2);
      bra.on(12, 1);

      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 38: // 'ㅃ' 대신 숫자 '37' 사용
      bra.on(0, 4);
      bra.on(1, 0);
      bra.on(1, 2);
      //ㅃ 글자 표시
      bra.on(2, 5);
      bra.on(3, 5);
      bra.on(6, 1);
      bra.on(7, 1);
      bra.on(6, 3);
      bra.on(6, 2);
      bra.on(7, 3);
      bra.on(6, 5);
      bra.on(7, 5);
      bra.on(10, 0);
      bra.on(10, 1);
      bra.on(10, 2);
      bra.on(4, 5);
      bra.on(5, 5);
      bra.on(8, 1);
      bra.on(9, 1);
      bra.on(8, 3);
      bra.on(8, 2);
      bra.on(9, 3);
      bra.on(8, 5);
      bra.on(9, 5);
      bra.on(11, 1);
      bra.on(11, 2);
      bra.on(12, 1);
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 39: // 'ㅆ' 대신 숫자 '37' 사용
      bra.on(0, 4);
      bra.on(1, 4);
      // ㅆ 글자표시
      bra.on(3, 5);
      bra.on(7, 1);
      bra.on(6, 2);
      bra.on(6, 5);
      bra.on(7, 2);
      bra.on(7, 4);
      bra.on(4, 5);
      bra.on(8, 1);
      bra.on(8, 2);
      bra.on(9, 5);
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 40: // 'ㅉ' 대신 숫자 '38' 사용
      bra.on(0, 4);
      bra.on(1, 0);
      bra.on(1, 4);
     // ㅉ 글자표기
      bra.on(2, 3);
      bra.on(2, 2);
      bra.on(3, 3);
      bra.on(3, 2);
      bra.on(4, 3);
      bra.on(4, 2);
      bra.on(5, 3);
      bra.on(3, 5);
      bra.on(4, 5);
      bra.on(7, 1);
      bra.on(8, 1);
      bra.on(6, 2);
      bra.on(7, 2);
      bra.on(8, 2);
      bra.on(6, 5);
      bra.on(7, 4);
      bra.on(9, 5);
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;

    case 41: // 종성 'ㄱ' 대신 숫자 '41' 사용
      bra.on(0, 1);    
     // ㄱ 글자 표시
      bra.on(2, 2);
      bra.on(3, 3);
      bra.on(3, 2);
      bra.on(4, 3);
      bra.on(4, 2);
      bra.on(5, 3);
      bra.on(5, 5);
      bra.on(9, 1);
      bra.on(9, 3);
      bra.on(9, 5);
      bra.on(12, 1);
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 42: // 'ㄴ' 대신 숫자 '42' 사용
      bra.on(0, 2);
      bra.on(0, 3);
      // ㄴ 글자표시
      bra.on(2, 2);
      bra.on(2, 4);
      bra.on(6, 0);
      bra.on(6, 2);
      bra.on(6, 4);
      bra.on(10, 1);
      bra.on(10, 2);
      bra.on(11, 0);
      bra.on(11, 1);
      bra.on(11, 2);
      bra.on(12, 1);
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 43: // 'ㄷ' 대신 숫자 '43' 사용
      bra.on(0, 3);
      bra.on(0, 5);
      // ㄷ 글자 표시
      bra.on(2, 2);
      bra.on(3, 3);
      bra.on(3, 2);
      bra.on(4, 3);
      bra.on(4, 2);
      bra.on(5, 3);
      bra.on(2, 4);
      bra.on(6, 0);
      bra.on(6, 2);
      bra.on(6, 4);
      bra.on(10, 1);
      bra.on(10, 2);
      bra.on(11, 0);
      bra.on(11, 1);
      bra.on(11, 2);
      bra.on(12, 0);
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 44: // 'ㄹ' 대신 숫자 '44' 사용
      bra.on(0, 3);
      //ㄹ 글자 
      bra.on(2, 0);
      bra.on(3, 1);
      bra.on(3, 0);
      bra.on(4, 1);
      bra.on(4, 0);
      bra.on(5, 1);
      bra.on(5, 3);
      bra.on(5, 5);
      bra.on(9, 1);
      bra.on(8, 0);
      bra.on(8, 1);
      bra.on(7, 0);
      bra.on(7, 1);
      bra.on(6, 0);
      bra.on(6, 2);
      bra.on(6, 4);
      bra.on(10, 1);
      bra.on(10, 2);
      bra.on(11, 0);
      bra.on(11, 1);
      bra.on(11, 2);
      bra.on(12, 1);
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 45: // 중성'ㅁ' 대신 숫자 '45' 사용
      bra.on(0, 3);
      bra.on(0, 4);
      //ㅁ 글자 표시
      bra.on(2, 2);
      bra.on(3, 3);
      bra.on(3, 2);
      bra.on(4, 3);
      bra.on(4, 2);
      bra.on(5, 3);
      bra.on(2, 4);
      bra.on(5, 5);
      bra.on(6, 0);
      bra.on(9, 1);
      bra.on(6, 2);
      bra.on(9, 3);
      bra.on(6, 4);
      bra.on(9, 5);
      bra.on(10, 1);
      bra.on(10, 2);
      bra.on(11, 0);
      bra.on(11, 1);
      bra.on(11, 2);
      bra.on(12, 1);
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 46: // 종성'ㅂ' 대신 숫자 '6' 사용
      bra.on(0, 1);
      bra.on(0, 3);
      //ㅂ 글자 표시
      bra.on(2, 2);
      bra.on(5, 3);
      bra.on(2, 4);
      bra.on(5, 5);
      bra.on(6, 0);
      bra.on(7, 1);
      bra.on(7, 0);
      bra.on(8, 1);
      bra.on(8, 0);
      bra.on(9, 1);
      bra.on(6, 2);
      bra.on(9, 3);
      bra.on(6, 4);
      bra.on(9, 5);
      bra.on(10, 1);
      bra.on(10, 2);
      bra.on(11, 0);
      bra.on(11, 1);
      bra.on(11, 2);
      bra.on(12, 1);
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 47: // 종성'ㅅ' 대신 숫자 '7' 사용
      bra.on(0, 5);
      //ㅅ 글자표시
      bra.on(4, 3);
      bra.on(4, 5);
      bra.on(7, 0);
      bra.on(8, 0);
      bra.on(7, 2);
      bra.on(8, 2);
      bra.on(7, 5);
      bra.on(9, 5);
      bra.on(10, 1);
      bra.on(12, 0);

      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;

     case 48: //종성 'ㅈ' 대신 숫자 '8' 사용
      bra.on(0, 1);
      bra.on(0, 5);
      //ㅈ 글자표시
      bra.on(2, 2);
      bra.on(3, 3);
      bra.on(3, 2);
      bra.on(4, 3);
      bra.on(4, 2);
      bra.on(5, 3);
      bra.on(4, 4);
      bra.on(8, 1);
      bra.on(7, 2);
      bra.on(8, 2);
      bra.on(7, 5);
      bra.on(9, 5);
      bra.on(10, 1);
      bra.on(12, 0);

      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;

    case 49: // 'ㅊ' 대신 숫자 '9' 사용
      bra.on(0, 3);
      bra.on(0, 5);
      // ㅊ 글자 표시
      bra.on(3, 1);
      bra.on(3, 0);
      bra.on(4, 1);
      bra.on(4, 0);
      bra.on(2, 4);
      bra.on(3, 5);
      bra.on(3, 4);
      bra.on(4, 5);
      bra.on(4, 4);
      bra.on(5, 5);
      bra.on(8, 0);
      bra.on(8, 3);
      bra.on(7, 4);
      bra.on(8, 4);
      bra.on(10, 2);
      bra.on(12, 1);
      bra.on(10, 4);
      bra.on(12, 4);

      bra.refresh();
      delay(500);
      bra.all_off();

      bra.refresh();
      break;

    case 50: // 'ㅋ' 대신 숫자 '10' 사용
      bra.on(0, 2);
      bra.on(0, 3);
      bra.on(0, 5);
      // ㅋ 글자표시
      bra.on(2, 2);
      bra.on(3, 3);
      bra.on(3, 2);
      bra.on(4, 3);
      bra.on(4, 2);
      bra.on(5, 3);
      bra.on(5, 5);
      bra.on(9, 1);
      bra.on(9, 3);
      bra.on(8, 2);
      bra.on(8, 3);
      bra.on(7, 2);
      bra.on(7, 3);
      bra.on(6, 2);
      bra.on(9, 5);
      bra.on(12, 1);
      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 51: // 'ㅌ' 대신 숫자 '11' 사용
      bra.on(0, 3);
      bra.on(0, 4);
      bra.on(0, 5);
      //ㅌ 글자 표시
      bra.on(2, 2);
      bra.on(3, 3);
      bra.on(3, 2);
      bra.on(4, 3);
      bra.on(4, 2);
      bra.on(5, 3);
      bra.on(2, 4);
      bra.on(6, 0);
      bra.on(6, 2);
      bra.on(7, 3);
      bra.on(7, 2);
      bra.on(8, 3);
      bra.on(8, 2);
      bra.on(9, 3);
      bra.on(6, 4);
      bra.on(10, 1);
      bra.on(10, 4);
      bra.on(10, 5);
      bra.on(11, 3);
      bra.on(11, 4);
      bra.on(11, 5);
      bra.on(12, 3);

      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 52: // 'ㅍ' 대신 숫자 '12' 사용
      bra.on(0, 2);
      bra.on(0, 3);
      bra.on(0, 4);
      // ㅍ 글자 표시 
      bra.on(2, 2);
      bra.on(3, 3);
      bra.on(3, 2);
      bra.on(4, 3);
      bra.on(4, 2);
      bra.on(5, 3);
      bra.on(3, 5);
      bra.on(4, 4);
      bra.on(7, 1);
      bra.on(8, 0);
      bra.on(7, 3);
      bra.on(8, 2);
      bra.on(7, 5);
      bra.on(8, 4);
      bra.on(10, 1);
      bra.on(10, 2);
      bra.on(11, 0);
      bra.on(11, 1);
      bra.on(11, 2);
      bra.on(12, 1);

      bra.refresh();
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    case 53: // 'ㅎ' 대신 숫자 '13' 사용
      bra.on(0, 2);
      bra.on(0, 4);
      bra.on(0, 5);
      bra.refresh();
      // ㅎ 글자 표시
      bra.on(3, 0);
      bra.on(4, 1);
      bra.on(2, 4);
      bra.on(3, 5);
      bra.on(3, 4);
      bra.on(4, 5);
      bra.on(4, 4);
      bra.on(5, 5);
      bra.on(7, 2);
      bra.on(8, 3);
      bra.on(7, 5);
      bra.on(8, 4);
      bra.on(10, 2);
      bra.on(11, 2);
      bra.on(11, 3);
      bra.on(11, 4);
      delay(500);
      bra.all_off();
      bra.refresh();
      break;
    
    }
  }
  
