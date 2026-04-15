#include <iostream>
using namespace std;
int main(){
    double h,s,l,w,b;
    int choice;
    do{
        cout<<"select any of the options to find the area"<<endl;
        cout<<"1.square"<<endl;
        cout<<"2.rectangle"<<endl;
        cout<<"3.triangle"<<endl;
        cout<<"4.quit"<<endl;
        cout<<"enter selection"<<endl;
        cin>>choice;
    switch (choice){
        case 1:
        cout<<"please input the side ";
        cin>>s;
        cout<<"area of the square is"<<s*s<<endl;
        break;
        case 2:
        cout<<"please input the length";
        cin>>l;
        cout<<"please input the width";
        cin>>w;
        cout<<"the area of a reactangle is"<<l*w;
        break;
        case 3:
        cout<<"please input the height of the triangle";
        cin>>h;
        cout<<"please input the base of the tringle";
        cin>>b;
        cout<<"the area of a triangle is:"<<0.5*h*b;
        break;
        case 4:
        cout<<"exiting calculation prompt";
        break;
        default:
        cout<<"invalid selection!";
    }
}while(choice != 4);
    return 0;
    
}