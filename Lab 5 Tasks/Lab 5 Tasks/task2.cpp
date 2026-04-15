#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    int option;
    int daystillexpiration = rand()%12;
    if (daystillexpiration <= 10){
        option = 1;
    }
    else if (daystillexpiration <= 5 && daystillexpiration < 1){
        option = 2;
    }
    else if (daystillexpiration == 1){
        option = 3;
    }
    else {
        option = 4;
    }
    switch ( option)
    {
    case 1:
        cout<<"your subscription will expire soon . please "<<endl;

        break;
    case 2:
        cout<<"your subscription expire in"<<"  "<< daystillexpiration<<endl;
        break;
    case 3:
        cout<<"your subscription expires in a day!!!"<<endl<< " please renew now"<<endl;
        break;
    case 4:
        cout<<"your subscription has expired."<<endl;
        break;
    case 5:
        cout<<"your subscription is still active "<<endl;
    }
    return 0;

}
