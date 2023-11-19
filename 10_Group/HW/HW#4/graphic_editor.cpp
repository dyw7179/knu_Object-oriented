#include "graphic_editor.h"
#include "ui.h"
#include <iostream>
#include "circle.h"
#include "line.h"
#include "rect.h"

GraphicEditor::GraphicEditor() {
    pStart = nullptr;
    count = 0;
}

void GraphicEditor::create(int num) {
    switch (num) {
    case 1:
        if (count == 0) {
            pStart = new Line();
            pLast = pStart;
        }
        else
            pLast = pLast->add(new Line());
        count++;
        break;

    case 2:
        if (count == 0) {
            pStart = new Circle();
            pLast = pStart;
        }
        else
            pLast = pLast->add(new Circle());
        count++;
        break;

    case 3:
        if (count == 0) {
            pStart = new Rect();
            pLast = pStart;
        }
        else
            pLast = pLast->add(new Rect());
        count++;
        break;
    }
}

void GraphicEditor::indelete(int num) {
    Shape* p = pStart;
    Shape* del = pStart;

    if (num < count) {
        for (int i = 0; i < num; i++) {
            p = del;
            del = del->getNext();
        }
        if (num == 0)
            pStart = p->getNext();
        else
            p->setNext(del);
        count--;
        if (count == 1)
            pLast = pStart;
        delete del;

    }
    else
        std::cout << "인덱스를 잘못 입력하셨습니다." << std::endl;
}

void GraphicEditor::call() {
    bool exit = true;
    std::cout << "그래픽 에디터입니다." << std::endl;
    while (exit) {
        switch (UI::main_menu()) {
        case 1:
            create(UI::one_menu());
            break;
        case 2:
            indelete(UI::two_menu());
            break;
        case 3: {
            Shape* p = pStart;
            for (int i = 0; i < count; i++) {
                std::cout << i << ": ";
                p->paint();
                p = p->getNext();
            }
            break;
        }
        case 4:
            exit = false;
            break;
        }
    }
}
