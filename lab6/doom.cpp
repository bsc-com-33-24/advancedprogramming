#include <iostream>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col;
    int **arr = new int*[row];
    
        for(int i = 0;i<row;i++){
            arr[i] = new int[col];}
         for(int i = 0;i <row;i++){
        for(int j = 0;j <col;j++){

                cin>>arr[i][j];
                if (arr[i][j]<=3){
                cout<<arr[i][j]<<endl;
        }
    
    }
         }
    return 0;
    }