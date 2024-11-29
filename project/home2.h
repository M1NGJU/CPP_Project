#ifndef HOME2_H
#define HOME2_H

#include <SFML/Graphics.hpp>

class Home2 {
public:
    // home2 화면을 표시하는 함수
    static int show(sf::RenderWindow& window) {
        sf::Texture backgroundTexture;
        if (!backgroundTexture.loadFromFile("imgs/home1/home.png")) {
            return -1; // 이미지 로드 실패 시 종료
        }

        sf::Texture RectangleTexture;
        if (!RectangleTexture.loadFromFile("imgs/start-page1/Rectangle.png")) {
            return -1; // 이미지 로드 실패 시 종료
        }

        sf::Texture PolygonTexture;
        if (!PolygonTexture.loadFromFile("imgs/start-page1/Polygon.png")) {
            return -1; // 이미지 로드 실패 시 종료
        }

        // 글꼴 로드
        sf::Font font;
        if (!font.loadFromFile("font/Jua-Regular.ttf")) { // 글꼴 경로 확인
            return -1; // 글꼴 로드 실패 시 종료
        }

        // 텍스트 생성
        sf::Text text1;
        text1.setFont(font);
        text1.setString(L"엄마");
        text1.setCharacterSize(33); // 글자 크기
        text1.setFillColor(sf::Color::Black); // 글자 색상
        text1.setPosition(330.f, 860.f); // 텍스트 위치

        sf::Text text2;
        text2.setFont(font);
        text2.setString(L"니 안 일어나냐???? 지각이야 이놈아!!!!!!!!! 정신차려!!!!!!!!!!!");
        text2.setCharacterSize(40);
        text2.setFillColor(sf::Color::Black);
        text2.setPosition(390.f, 900.f);

        sf::Sprite backgroundSprite(backgroundTexture);
        sf::Sprite RectangleSprite(RectangleTexture);
        sf::Sprite PolygonSprite(PolygonTexture);

        RectangleSprite.setScale(0.9f, 0.7f); // 90% 가로, 70% 세로로 축소
        RectangleSprite.setPosition(310.f, 850.f);

        PolygonSprite.setPosition(1530.f, 927.f);

        // 메인 루프
        while (window.isOpen()) {
            sf::Event event;
            while (window.pollEvent(event)) {
                // 닫기 버튼 처리
                if (event.type == sf::Event::Closed) {
                    window.close();
                    return -1;
                }

                // 마우스 클릭 처리
                if (event.type == sf::Event::MouseButtonPressed) {
                    if (event.mouseButton.button == sf::Mouse::Left) {
                        // 클릭 시 home3 화면으로 이동
                        return 7; // home3 화면으로 이동
                    }
                }
            }

            // 화면 초기화
            window.clear(sf::Color::White); // 화면을 흰색으로 지우기

            // 배경 그리기
            window.draw(backgroundSprite);
            window.draw(RectangleSprite);
            window.draw(PolygonSprite);

            // 텍스트 그리기
            window.draw(text1);
            window.draw(text2);

            // 화면 출력
            window.display();
        }

        return 0; // 종료 시 기본값 반환
    }
};

#endif // HOME2_H
