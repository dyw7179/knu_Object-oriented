#pragma once
#include <iostream>
#include <string>

class UI {
public:
    static int main_menu() {
        int n;
        std::cout << L"삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
        std::cin >> n;
        return n;
    }

    static int one_menu() {
        int n;
        std::cout << L"선:1, 원:2, 사각형:3 >> ";  
        std::cin >> n;
        return n;
    }

    static int two_menu() {
        int n;
        std::cout << L"삭제하고자 하는 도형의 인덱스 >> ";  
        std::cin >> n;
        return n;
    }
};
