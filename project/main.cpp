#include <SFML/Graphics.hpp>
#include <iostream> // 디버그 메시지를 위한 추가
#include "start.h"
#include "startPage1.h"
#include "startPage2.h"
#include "startPage3.h"
#include "startPage4.h"
#include "home1.h"
#include "home2.h"
#include "home3.h"
#include "home4.h"
#include "home5.h"
#include "home6.h"
#include "home7.h" // 추가
#include "stage1.h"
#include "stage1-1.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Start");

    int pageState = 0;

    while (window.isOpen()) {
        std::cout << "Current pageState: " << pageState << std::endl; // 디버그 메시지

        switch (pageState) {
        case 0:
            pageState = StartPage::run(window);
            break;
        case 1:
            pageState = StartPage1::run(window);
            break;
        case 2:
            pageState = StartPage2::run(window);
            break;
        case 3:
            pageState = StartPage3::run(window);
            break;
        case 4:
            pageState = StartPage4::run(window);
            break;
        case 5:
            pageState = Home1::run(window);
            break;
        case 6:
            pageState = Home2::run(window);
            break;
        case 7:
            pageState = Home3::run(window);
            break;
        case 8:
            pageState = Home4::run(window);
            break;
        case 9:
            pageState = Home5::run(window);
            break;
        case 10:
            pageState = Home6::run(window);
            break;
        case 11: // pageState가 11인 경우 Home7 실행
            pageState = Home7::run(window);
            break;
        case 12:    // stage1
            pageState = stage1::run(window);
            break;
        case 13:
            pageState = stage1_1::run(window);
            break;
        default:
            window.close();
            break;
        }
    }

    return 0;
}
