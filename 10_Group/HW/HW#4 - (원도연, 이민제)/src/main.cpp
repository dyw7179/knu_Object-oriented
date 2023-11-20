#include "GraphicEditor.h"
#include "UI.h"

int main() {
    GraphicEditor editor;
    while (true) {
        int command = UI::getCommand();
        switch (command) {
        case 1:
            editor.insertShape();
            break;
        case 2:
            editor.deleteShape();
            break;
        case 3:
            editor.showAll();
            break;
        case 4:
            return 0;
        default:
            std::cout << "�߸��� �Է��Դϴ�.\n";
        }
    }
    return 0;
}
