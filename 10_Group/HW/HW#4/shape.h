#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

class Shape {
    Shape* next;

protected:
    virtual void draw() const = 0;

public:
    Shape();
    virtual ~Shape();
    void paint() const;
    Shape* add(Shape* p);
    Shape* getNext() const;
    void setNext(Shape* p);
};

#endif // SHAPE_H

