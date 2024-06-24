#include<iostream>
using namespace std;

int main(){
    int n = 4;
    int toggle = 1;

    for(int i = 1; i <= 2 * n; i++){
        toggle = -toggle;
        int current = toggle;

        for(int j = 1; j <= n; j++){
            if(current == 1) 
                cout << "..";
            else 
                cout << "##";
            
            current = -current;
        }
        cout << "\n";
    }
    return 0;
}
