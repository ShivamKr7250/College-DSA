#include <iostream>
#include<vector>
using namespace std;

int main(){
    int asteroids[] = {-2,2,-1,-2};
    int n = sizeof(asteroids)/sizeof(int);
    //int n = asteroids.size();
     for (int i = 1; i < n; i++) {
            for (int j = i; j > 0; j--) {
                if (asteroids[j - 1] > -1 && asteroids[i] < 0) {
                    if (abs(asteroids[j - 1]) < abs(asteroids[i])) {
                        asteroids[j - 1] = 0;
                    } else if (abs(asteroids[j - 1] == abs(asteroids[i]))) {
                        asteroids[j - 1] = 0;
                        asteroids[i] = 0;
                        break;
                    } else {
                        asteroids[i] = 0;
                        break;
                    }
                } else {
                    break;
                }
            }
        }

    

    vector<int> ans;

    for(int i =0; i<n; i++){
        if(asteroids[i] !=0){ans.push_back(asteroids[i]);
        cout<<asteroids[i]<<" ";
        } 
    }


}