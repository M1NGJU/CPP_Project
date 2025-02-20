﻿#include <SFML/Graphics.hpp>
#include <iostream>
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
#include "home7.h"
#include "stage1.h"
#include "stage1-1.h"
#include "stage1-2.h"
#include "stage1-3.h"
#include "stage1-3-1.h"
#include "stage1-3-2.h"
#include "stage1-4-1.h"
#include "stage1-4-2.h"
#include "stage1-5-1.h"
#include "stage1-5-2.h"
#include "stage1-5-3.h"
#include "stage1-5-4.h"
#include "stage1-5-5.h"
#include "stage1-5-6.h"
#include "stage1-5-7.h"
#include "stage1-5-8.h"
#include "stage1-5-9.h"
#include "stage1-6.h"
#include "stage1-6-1.h"
#include "stage1-6-2.h"
#include "stage1-6-3.h"
#include "stage1-6-4.h"
#include "stage1-6-5.h"
#include "stage1-6-6.h"
#include "stage1-6-7.h"
#include "stage1-6-8.h"
#include "stage1-7.h"
#include "stage1-7-1.h"
#include "stage1-7-2.h"
#include "stage1-7-3.h"
#include "stage1-7-4.h"
#include "stage1-7-5.h"
#include "stage1-7-6.h"
#include "stage1-7-7.h"
#include "stage1-7-8.h"
#include "LastPage.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Start");

    int pageState = 0;  // 처음 페이지 상태

    while (window.isOpen()) {
        std::cout << "Current pageState: " << pageState << std::endl;

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
        case 11:
            pageState = Home7::run(window);
            break;
        case 12:
            pageState = stage1::run(window);
            break;
        case 13:
            pageState = stage1_1::run(window);
            break;
        case 14:
            pageState = stage1_2::run(window);
            break;
        case 15:
            pageState = stage1_3::run(window);
            break;
        case 16:
            pageState = stage1_3_1::run(window);
            break;
        case 17:
            pageState = stage1_3_2::run(window);
            break;
        case 18:
            pageState = stage1_4_1::run(window);
            break;
        case 19:
            pageState = stage1_4_2::run(window);
            break;
        case 20:
            pageState = stage1_5_1::run(window);
            break;
        case 21:
            pageState = stage1_5_2::run(window);
            break;
        case 22:
            pageState = stage1_5_3::run(window);
            break;
        case 23:
            pageState = stage1_5_4::run(window);
            break;
        case 24:
            pageState = stage1_5_5::run(window);
            break;
        case 25:
            pageState = stage1_5_6::run(window);
            break;
        case 26:
            pageState = stage1_5_7::run(window);
            break;
        case 27:
            pageState = stage1_5_8::run(window);
            break;
        case 28:
            pageState = stage1_5_9::run(window);
            break;
        case 29:
            pageState = stage1_6::run(window);
            break;
        case 30:
            pageState = stage1_6_1::run(window);
            break;
        case 31:
            pageState = stage1_6_2::run(window);
            break;
        case 32:
            pageState = stage1_6_3::run(window);
            break;
        case 33:
            pageState = stage1_6_4::run(window);
            break;
        case 34:
            pageState = stage1_6_5::run(window);
            break;
        case 35:
            pageState = stage1_6_6::run(window);
            break;
        case 36:
            pageState = stage1_6_7::run(window);
            break;
        case 37:
            pageState = stage1_6_8::run(window);
            break;
        case 38:
            pageState = stage1_7::run(window);
            break;
        case 39:
            pageState = stage1_7_1::run(window);
            break;
        case 40:
            // stage1_7_2
            pageState = stage1_7_2::run(window);
            break;
        case 41:
            pageState = stage1_7_3::run(window);
            break;
        case 42:
            pageState = stage1_7_4::run(window);
            break;
        case 43:
            pageState = stage1_7_5::run(window);
            break;
        case 44:
            pageState = stage1_7_6::run(window);
            break;
        case 45:
            pageState = stage1_7_7::run(window);
            break;
        case 46:
            pageState = stage1_7_8::run(window);
            break;
        case 47:
            pageState = LastPage::run(window);
            break;
        default:
            window.close();
            break;
        }
    }

    return 0;
}