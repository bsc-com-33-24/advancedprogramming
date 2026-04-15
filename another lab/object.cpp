#include <iostream>
using namespace std;
class Rectangle{
    private:
    float length;
    float width;
    //~Rectangle(){}
    public:
    Rectangle(){
        length = 0;
        width = 0;
    }
    float retrive(){
        return length;
    }
    float agin(){
        return width;
    }
    void setwid(float w){
        width = w;
    }
    void setlen(float l){
        length = l;
    }
    float area(){
         return length*width;
    }
};
int main(){
    Rectangle s;
    float ulength;
    float uwidth;
    cout<<"input length and with please"<<endl;
    cin>> ulength;
    cin>>uwidth;
    s.setlen(ulength);
    s.setwid(uwidth);
    cout<<s.area()<<endl;
    return 0;

}