#include <iostream>
using namespace std;
int main(){
    int *ppointer = nullptr;
    int numberarray[3] ={10,20,30};
    ppointer = numberarray;
    cout<<"address of ppointer"<<ppointer<<endl;
    cout<<"address of numberarray"<<numberarray<<endl;
    cout<<"value of ppointer"<<*ppointer<<endl;
    cout<<"value of ++ppointer:"<<*(++ppointer)<<endl;
    ppointer=numberarray;
    cout<<"value at PPonter++"<<*(ppointer++)<<endl;
    return 0;
    

}