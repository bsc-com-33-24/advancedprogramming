#include "polygon.h"
#include <iostream>
using namespace std;
void polygon::SetValues(int width,int height){
    mwidth = width;
    mheight = height;
}
void polygon::printarea(){
    cout<<this->area()<<'\n';
}