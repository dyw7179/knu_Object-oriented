#ifndef GRAPHIC_EDITOR_H
#define GRAPHIC_EDITOR_H

#include "Shape.h"
#include <vector>

class GraphicEditor {
private:
    std::vector<Shape*> shapes;

public:
    GraphicEditor();
    ~GraphicEditor();
    void insertShape();
    void deleteShape();
    void showAll();
};

#endif
