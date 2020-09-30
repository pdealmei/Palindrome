#include <gtest/gtest.h>
#include "palindrome.hpp"


TEST(palindrome, test_true)
{
    string text = "radar";
    ASSERT_EQ(isPalindrome(text),true);

    text ="tacocat";
    ASSERT_EQ(isPalindrome(text),true);

    text ="rotor";
    ASSERT_EQ(isPalindrome(text),true);

    text ="tenet";
    ASSERT_EQ(isPalindrome(text),true);   

    text ="a";
    ASSERT_EQ(isPalindrome(text),true);   

    text ="aa";
    ASSERT_EQ(isPalindrome(text),true);   
}

TEST(palindrome, test_false)
{
    string text = "text";
    ASSERT_EQ(isPalindrome(text),false);

    text ="hello";
    ASSERT_EQ(isPalindrome(text),false);

    text ="cat";
    ASSERT_EQ(isPalindrome(text),false);

    text ="engine";
    ASSERT_EQ(isPalindrome(text),false);

    text ="turn";
    ASSERT_EQ(isPalindrome(text),false);   
}