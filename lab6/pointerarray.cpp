#include <iostream>
using namespace std;
int main(){
    int array[5];
    int *ppointer = nullptr;
    ppointer = array;
    *ppointer =10;
    ppointer++;
    *ppointer = 20;
    ppointer = &array[2];
    *ppointer = 30;
    ppointer = array +3;
    *ppointer = 40;
    ppointer = array;
    *(array + 4)=50;
    for(int n = 0;n<5;n++){
        cout<<array[n]<<" ,";
    }
    return 0;
}