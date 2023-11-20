#include "GraphicEditor.h"
#include "UI.h"
#include "Line.h"
#include "Circle.h"
#include "Rect.h"


GraphicEditor::GraphicEditor() {}

GraphicEditor::~GraphicEditor() {
    for (auto& shape : shapes) {
        delete shape;
    }
}

void GraphicEditor::insertShape() {
    int type = UI::getShapeType();
    Shape* shape = nullptr;
    switch (type) {
    case 1: shape = new Line(); break;
    case 2: shape = new Circle(); break;
    case 3: shape = new Rect(); break;
    default: std::cout << "잘못된 입력입니다.\n"; return;
    }
    shapes.push_back(shape);
}

void GraphicEditor::deleteShape() {
    int index = UI::getIndex();
    if (index < 0 || index >= shapes.size()) {
        std::cout << "잘못된 인덱스입니다.\n";
        return;
    }
    delete shapes[index];
    shapes.erase(shapes.begin() + index);
}

void GraphicEditor::showAll() {
    for (int i = 0; i < shapes.size(); ++i) {
        std::cout << i << ": ";
        shapes[i]->paint();
    }
}
