#include <iostream>
#include "Shape.h"

int main(int argc , char *argv []) {
    Shape **xs = new Shape*[10];
    xs[0] = new Circle(0,0,1);
    xs[1] = new Rectangle(3,0,9,5);
    xs[2] = new Triangle (0,0,1,1,0,1);
    xs[3] = new Rectangle(0,1,1,0);
    xs[4] = new Circle(3,4,5);
    xs[5] = new Triangle(4,1,6,4,8,1);
    xs[6] = new Rectangle(-2, 4, -3, 8);
    xs[7] = new Circle(3,4,3);
    xs[8] = new Rectangle(9,2,12,8);
    xs[9] = new Triangle(3,0,6,4, 9, 0);
    for(int i = 0; i < 10; i++){
        std::cout << xs[i]->to_string () << std::endl;
        xs[i]->centre_at(10,10);
        std::cout << xs[i]->to_string () << std::endl;
    }
    return 0;
}