#pragma once
#ifndef GRAPHIC_EDITOR_H
#define GRAPHIC_EDITOR_H

#include "shape.h"

class GraphicEditor {
    Shape* pStart;
    Shape* pLast;
    int count;

public:
    GraphicEditor();
    void create(int num);
    void indelete(int num);
    void call();
};

#endif // GRAPHIC_EDITOR_H
