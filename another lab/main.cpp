#include <iostream>
#include "Box.h"
int main(){
Box box1;
Box box2;
Box box3;
box1.setLength(6.0);
box1.SetBreadth(7.0);
box1.SetHeight(5.0);
box2.setLength(12.0);
box2.SetBreadth(13.0);  
box2.SetHeight(10.0);
double volume = box1.Getvolume();
cout<<"Volume of Box1:"<<volume<<endl;
volume = box2.Getvolume();
cout<<"Volume of Box2:"<<volume<<endl;  
box3 = box1 + box2;
volume = box3.Getvolume();
cout<<"Volume of Box3:"<<volume<<endl;
return 0;
}