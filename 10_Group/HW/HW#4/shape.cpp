#include "shape.h"

Shape::Shape() {
    next = nullptr;
}

Shape::~Shape() {
}

void Shape::paint() const {
    draw();
}

Shape* Shape::add(Shape* p) {
    this->next = p;
    return p;
}

Shape* Shape::getNext() const {
    return next;
}

void Shape::setNext(Shape* p) {
    this->next = p->next;
}
