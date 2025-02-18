#include<iostream>

using namespace std;

int main(){
    int n = 4; 
  
    // first outer loop to iterate through each row 
    for (int i = 0; i < 2 * n - 1; i++) { 
  
        // assigning values to the comparator according to 
        // the row number 
        int comp; 
        if (i < n) { 
            comp = 2 * (n - i) - 1; 
        } 
        else { 
            comp = 2 * (i - n + 1) + 1; 
        } 
  
        // first inner loop to print leading whitespaces 
        for (int j = 0; j < comp; j++) { 
            printf(" "); 
        } 
  
        // second inner loop to print number 
        for (int k = 0; k < 2 * n - comp; k++) { 
            printf("%d ", k + 1); 
        } 
        printf("\n"); 
    } 
    return 0; 
}
