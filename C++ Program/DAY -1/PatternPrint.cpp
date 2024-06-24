#include <iostream>
using namespace std;

int main(){
    int row = 1;
    while (row <= 5)
    {
        int col = 1;
        while (col<=row)
        {
            int sum = col+row;
            if(sum%2 == 0){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
            col++;
        }
        cout<<endl;
        row++;
    }
    
}