#include "UI.h"

int UI::getCommand() {
    int command;
    std::cout << "����:1, ����:2, ��κ���:3, ����:4 >> ";
    std::cin >> command;
    return command;
}

int UI::getShapeType() {
    int type;
    std::cout << "��:1, ��:2, �簢��:3 >> ";
    std::cin >> type;
    return type;
}

int UI::getIndex() {
    int index;
    std::cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
    std::cin >> index;
    return index;
}
