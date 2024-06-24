#include <iostream>
using namespace std;

int main(){
    string s = "Race car";

    int n = s.size();

    for(int i = 0; i<n; i++){
        if(s[i] >= 'A' && s[i] <= 'Z' ) s[i] = 'a'
    }
}