
#include "Box.h"
Box::Box(){
    length = 0;
    breadth = 0;
    height = 0;
}
Box::Box(const double newlength,const double newBreadth,const double newHeight){
    length = newlength;
    height =newHeight;
    breadth = newBreadth;

}
Box::~Box(){

}
double Box::Getvolume(){
    return length*breadth*height;
}
void Box::setLength(double len){
    length = len;
}
void Box::SetBreadth(double bre){
    breadth = bre;
}
void Box::SetHeight(double hei){
    height = hei;
}
Box Box::operator+(const Box& b){
    Box box;
    box.length = length + b.length;
    box.breadth = breadth + b.breadth;  
    box.height = height + b.height;
    return box;     
}