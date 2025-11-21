#include <fmt/core.h>
#include <iostream>

using namespace fmt;
using namespace std;

int characterCount(char* str, char ch);
int main()
{
    const int MaxSize = 62;
    char* str = new char[MaxSize];
    println("Please enter a string(Max {} characters): ", MaxSize);
    cin.getline(str, MaxSize);
    char ch;
    println("Which character count do you wanna know?");
    cin >> ch;
    int counter = characterCount(str, ch);
    println("{} is used {} times in {} ", ch, counter, str);
    return 0;
}

int characterCount(char* str, char ch)
{
    int counter = 0;

    while (*str) {
        if (*str == ch) {
            counter++;
        }
        str++;
    }
    return counter;
}