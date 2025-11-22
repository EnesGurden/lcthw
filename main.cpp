#include <fmt/core.h>
#include <iostream>

using namespace std;
using namespace fmt;

#define STRINGCONTROL 0
// #define CHARCONTROL 1
// #define INTCONTROL 2

int main()
{
#ifdef STRINGCONTROL
    string str;
    println("enter a string");
    while (getline(cin, str) && str != "q") {
        println("this is a string(q to quit)");
    }
#endif

#ifdef CHARCONTROL
    char ch;
    println("enter a char");

    while (cin >> ch && ch != 'q') {
        println("this is a char(q to quit)");
    }

#endif

#ifdef INTCONTROL
    int i;
    println("enter an int");
    while (cin >> i) {
        println("this is an int(press anything but not a number to quit)");
    }
#endif
    println("program is over");
    return 0;
}