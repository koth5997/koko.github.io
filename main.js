document.addEventListener("DOMContentLoaded", function() {
    // Preloader 제거
    const preloader = document.getElementById('preloader');
    if (preloader) {
        preloader.style.display = 'none';
    }

    // Reveal 애니메이션
    const revealElements = document.querySelectorAll('.reveal');

    function reveal() {
        revealElements.forEach(function(element) {
            const windowHeight = window.innerHeight;
            const elementTop = element.getBoundingClientRect().top;
            const elementVisible = 150;

            if (elementTop < windowHeight - elementVisible) {
                element.classList.add('active');
            } else {
                element.classList.remove('active');
            }
        });
    }

    window.addEventListener('scroll', reveal);
    reveal(); // 초기 로드 시 실행

    // 네비게이션 스크롤 애니메이션
    document.querySelectorAll('.s-header__menu-links a').forEach(anchor => {
        anchor.addEventListener('click', function(e) {
            e.preventDefault();

            const targetId = this.getAttribute('href').substring(1);
            const targetElement = document.getElementById(targetId);

            window.scrollTo({
                top: targetElement.offsetTop - 50, // 헤더 높이를 고려해 약간 조정
                behavior: 'smooth'
            });
        });
    });

    // 모바일 메뉴 토글
    document.querySelector('.s-header__menu-toggle').addEventListener('click', function() {
        const nav = document.querySelector('.s-header__nav');
        nav.classList.toggle('open');
    });

    document.querySelectorAll('.s-header__menu-links a').forEach(link => {
        link.addEventListener('click', function() {
            document.querySelector('.s-header__nav').classList.remove('open');
        });
    });

    // 타이핑 애니메이션
    const typingEffect = function(element, words, delay = 2000) {
        let wordIndex = 0;
        let letterIndex = 0;
        const wordElement = document.querySelector(element);

        function type() {
            const currentWord = words[wordIndex];
            const partialWord = currentWord.substring(0, letterIndex + 1);

            wordElement.textContent = partialWord;
            letterIndex++;

            if (letterIndex === currentWord.length) {
                wordIndex++;
                letterIndex = 0;

                if (wordIndex === words.length) {
                    wordIndex = 0;
                }

                setTimeout(() => type(), delay);
            } else {
                setTimeout(() => type(), 100);
            }
        }

        type();
    };

    typingEffect('.hero .title', ['자율운항 선박에 대해 배우는 사람', '미래의 선박 전문가', '안녕하세요.']);

    // 다크 모드 토글
    document.querySelector('.s-header__logo').addEventListener('click', function() {
        document.body.classList.toggle('dark-mode');
    });

    // 헤더 축소 애니메이션
    const header = document.querySelector('.s-header');
    window.addEventListener('scroll', function() {
        if (window.scrollY > 100) {
            header.classList.add('header--small');
        } else {
            header.classList.remove('header--small');
        }
    });

    // 스크롤 시 색상 변화
    const heroSection = document.querySelector('.hero');
    window.addEventListener('scroll', function() {
        const scrollPosition = window.scrollY;
        heroSection.style.backgroundColor = `rgba(0, 0, 0, ${Math.min(scrollPosition / 800, 0.6)})`;
    });

    // 맨 위로 가기 버튼 추가
    const scrollToTopBtn = document.createElement('button');
    scrollToTopBtn.innerText = '▲';
    scrollToTopBtn.classList.add('scroll-to-top');
    document.body.appendChild(scrollToTopBtn);

    scrollToTopBtn.addEventListener('click', function() {
        window.scrollTo({
            top: 0,
            behavior: 'smooth'
        });
    });

    window.addEventListener('scroll', function() {
        if (window.scrollY > 300) {
            scrollToTopBtn.style.display = 'block';
        } else {
            scrollToTopBtn.style.display = 'none';
        }
    });
});
