#include <iostream>
using namespace std;

int main(){
    int a =1 , b= -1, c =0 , d =2;

    if(a-- && ++b && c++ && ++d){
        //value of a = 0, b= 0 and c = 0 and d =2
        cout<<"Hello\n";
    }
    else if(a++ || b++ || c++){
        //value of 
        cout<<"Hii\n";
    }
    else if(a-- && --b && c++){
        //value of a =1 , b = 0
        cout<<"Hello World\n";
    }
    else{
       cout<<"Hello World! Shivam\n";  
    }
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" ";
    return 0;
}

//answer would be the else case
// the value of a = 0, b =0, c=1, and d=2
