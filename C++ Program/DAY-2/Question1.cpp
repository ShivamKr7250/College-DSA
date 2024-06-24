// Find the smallest  no of its index
// Find the largest no of its index
// Total min swap to interchange  the elemensts from the
// for minimum and maximum number interchnage

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num[] = {7, 1, -7, -17, 70, 190, 17, 102, -250, 25};
    int getArrayLength = sizeof(num) / sizeof(int);
    int temp;
    int small = 0;
    int large = 0;

    for (int i = 1; i <= getArrayLength; i++)
    {
        if (small > num[i])
        {
            small = i;
        }
        if (large < num[i])
        {
            large = i;
        }
    }
    // swaping
    // swap(num[0], num[small]);

    // // find the max index
    // for (int i = 0; i < getArrayLength; i++)
    // {
    //     if (num[i] > num[large])
    //         large = i;
    // }

    // swap(num[getArrayLength - 1], num[large]);

    for(int i = small; i>0; i++){
        swap(num[i], num[i-1]);
    }

    if(large < small) large++;
    for(int i  = large; i< getArrayLength-1; i++){
        swap(num[i], num[i+1]);
    }

    for (int i = 0; i < getArrayLength; i++)
    {
        cout << num[i] << " ";
    }

}