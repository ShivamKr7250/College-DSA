#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cout<<"Enter the year \n";
    cin>>year;

    if(year % 400 == 0 || (year % 4 == 0  && year % 100 != 0))
        cout << year << " is a Leap Year";

    //not leap year
    else
        cout << year << " is not a Leap Year";
    
    return 0;
}