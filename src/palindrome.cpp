#include "palindrome.hpp"

bool isPalindrome(string text)
{
    bool is_palindrome = true;
    for (int i = 0 ; i< (text.length())/2 ; i++)
    {
        if (text[i] != text[text.length() - 1 -i ])
        {
            is_palindrome = false;
            break;
        }
    }

    return is_palindrome;


}
