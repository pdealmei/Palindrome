#include "palindrome.hpp"

int main()
{
    string text;

    while(1)
    {
        cout<<"Please enter a text"<<endl;
        cin>>text;

        if(isPalindrome(text))
        {
            cout<<"This is a palindrome"<<endl;
        }
        else
        {
            cout<<"This is not a palindrome"<<endl;
        }
    }
    
    
    return 0;
}

