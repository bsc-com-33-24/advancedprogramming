#include <iostream>
using namespace std;
namespace shapes{
class square{
    private:
    float sidelength;
    public:
    square(){
        sidelength=0;
    }
    square(float n){
        sidelength = n;

    }
    
    float turn(){
        return sidelength;
    }
    ~square(){}
};
class triangle{
    private:
    float base;
    float height;
    public:
    triangle(){
        base = 0;
        height = 0;
    }
    triangle(float b,float h){
        base= b;
        height = h;
        return;
    }
    float turn(){
        return base;
    }
    float again(){
        return height;
    }
    ~triangle(){}
};
class circle{
    private:
    float radius;
    public:
    circle(){
      radius =0;
    }
    circle(int r){
         radius= r;
        return;
    }

    float wali(){
        return radius;
    }
    ~circle(){}
};
class area{
    public:
    static float stat(square objectname){
        return objectname.turn()*objectname.turn();
    }
    static float statictriangle(triangle ret){
        return ret.turn()*ret.again()*0.5;
    }
    static float staticcircle(circle retrive){
        const double pi = 3.14159;
        return retrive.wali()*pi*retrive.wali();
    }
};}
int main(){
    int choice;
     float length;
float base;
float height;
float radius;
while(true){
    cout<<"======CALCULATING AREAS HERE======"<<endl;
    cout<<"1.calcualte the arae of a square"<<endl;
    cout<<"2.calculatethe area of a triangle"<<endl;
    cout<<"3.calculate the area  of a circle "<<endl;
    cout<<"please enter your choice"<<endl;
    cin>>choice;

switch(choice){
    case 1:
cout<<"please input the length of the suquare"<<endl;
cin>>length;
shapes::square objectname(length);
cout<<"the area of the square is:"<<shapes::area::stat(objectname)<<endl;
break;
case 2:
cout<<"please input the base of the triangle"<<endl;
cin>>base;
cout<<"please input the height of the trianglr"<<endl;
cin>>height;
shapes::triangle ret(base,height);
cout<<shapes::area::statictriangle(ret);
break;
case 3:
cout<<"please input the radius of the circle"<<endl;
cin>>radius;
shapes::circle retrive(radius);
cout<<shapes::area::staticcircle(retrive);
break;
default:
cout<<"invalid choice please pick within the given options"<<endl;
break;
}
}
}
