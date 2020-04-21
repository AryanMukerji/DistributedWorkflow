#include<iostream>
using namespace std;
int int main(int argc, char const *argv[]) {
    int n,rem,rev = 0;
    cout << "Enter a number: ";
    cin >> n;
    int temp = n;
    while(temp != 0)
    {
        rem = temp % 10;
        temp = temp / 10;
        rev = (rev * 10) + rem;
    }
    if(rev != n)
    {
        cout << "Entered number is not palindrome." << endl;
    }
    else
    {
        cout << "Entered number is palindrome." << endl;
    }
    return 0;
}

// Function in C
/* void isPalindrome(char str[])
{
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = strlen(str) - 1;

    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is Not Palindrome", str);
            return;
        }
    }
    printf("%s is palindrome", str);
} */
