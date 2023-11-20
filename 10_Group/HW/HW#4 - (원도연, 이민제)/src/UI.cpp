#include "UI.h"

int UI::getCommand() {
    int command;
    std::cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
    std::cin >> command;
    return command;
}

int UI::getShapeType() {
    int type;
    std::cout << "선:1, 원:2, 사각형:3 >> ";
    std::cin >> type;
    return type;
}

int UI::getIndex() {
    int index;
    std::cout << "삭제하고자 하는 도형의 인덱스 >> ";
    std::cin >> index;
    return index;
}
