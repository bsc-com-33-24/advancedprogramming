#include <iostream>
using namespace std;
class dummy{
    double i,j;
};
class addition{
    int x,y;
    public:
    addition(int a,int b){
        x =a;
        y = b;
    }
    int result(){
        return x + y;
    }
};
int main(){
    dummy d;
    addition *padd;
    padd =(addition*)&d;
    cout<<padd->result();
    return 0;
}
