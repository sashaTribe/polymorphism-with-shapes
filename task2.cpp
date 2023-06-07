#include <iostream>
#include "Shape.h"

int main(int argc , char *argv []) {
    Shape *x = new Circle(0, 0, 1); // x, y, r
    std::cout << x->to_string () << std::endl;
    x->centre_at(2, 3);
    std::cout << x->to_string () << std::endl;
    delete x;
    Shape *y = new Rectangle(0,1,1,0);
    std::cout << y->to_string () << std::endl;
    y->centre_at(-2.5,2.5);
    std::cout << y->to_string () << std::endl;
    delete y;
    return 0;
}