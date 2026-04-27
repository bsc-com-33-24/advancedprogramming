#include <iostream>
#include "base.h"
#include "derived.h"
using namespace std;
int main(){
    base* pba = new derived();
    base * pbb = new base();
    derived *pd;
    pd = dyanamic_cast<derived*>(pba);
    id (pd == nullptr){
        cout<<"null pointer on first type_cast.\n";
    }
    delete pba;
    pba = nullptr;
    delete pbb;
    pbb = nullptr;
    return 0;
    
}