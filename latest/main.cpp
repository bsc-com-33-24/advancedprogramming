#include <iostream>
#include "rectangle.h"
#include "triangle.h"
using namespace std;
int main(){
    polygon * ppoly1 = new rectangle(4,5);
    polygon* ppoly2 = new triangle(4,5);
    ppoly1->printarea();
    ppoly2->printarea();
    delete ppoly1;
    delete ppoly2;
    return 0;
}
