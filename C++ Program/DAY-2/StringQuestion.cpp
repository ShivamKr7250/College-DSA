#include <iostream>
using namespace std;

// Function to reverse a string
void reverseStr(string& str)
{
    int n = str.length();
 
    // Swap character starting from two corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

// Function to check if a string is a palindrome
bool isPalindrome(const string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - i - 1])
            return false;
    }
    return true;
}
 
// Driver program
int main()
{
    string str = "HELLO WORLD";
    reverseStr(str);
    cout << "Reversed String: " << str << endl;
    

    string originalStr = "BABA";
    bool palindrome = isPalindrome(originalStr);
    if (palindrome)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;
    
    return 0;
}
