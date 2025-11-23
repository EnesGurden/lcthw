#include <fmt/core.h>
#include <iostream>

using namespace fmt;
using namespace std;

#define REFERENCEVARIABLE 0;
// #define REFERENCEFUNCTION 1;
// #define REFERENCESTRUCT 2;
// #define REFERENCECLASS 3;

int main()
{
#ifdef REFERENCEVARIABLE
    int foo = 62;
    int& rv = foo;
    println("foo: {}", foo);
    rv++;
    println("foo: {}", foo);
    println("foo add: {}, rv add: {}", (void*)&foo, (void*)&rv);
    cout << "foo add: " << &foo << ", rv add: " << &rv << endl;
#endif
#ifdef REFERENCEFUNCTION
    auto swapref_lambda = [](int& a, int& b) {
        int temp = a;
        a = b;
        b = temp;
    };
    int v1 = 62;
    int v2 = 6262;
    println("initial v1: {}, v2: {}", v1, v2);
    swapref_lambda(v1, v2);
    println("final v1: {}, v2: {}", v1, v2);
#endif
#ifdef REFERENCESTRUCT
    struct free_throws {
        std::string name;
        int made;
        int attempts;
        float percent;
    };
    auto display = [](const free_throws& rs) {
        println("name: {}, made: {}, attempts: {}, percent: {}", rs.name, rs.made, rs.attempts, rs.percent);
    };
    auto accumulate = [](free_throws& target, const free_throws& source) {
        target.percent += source.made;
        return target;
    };

    free_throws one = { "Ifelsa Branch", 13, 14 };
    free_throws two = { "Andor Knott", 10, 16 };
    free_throws three = { "Minnie Max", 7, 9 };
    free_throws team = { "Throwgoods", 0, 0 };
    display(team);
    display(accumulate(team, one));
    free_throws four = accumulate(team, two);
    display(four);
    display(accumulate(team, three));
#endif
#ifdef REFERENCECLASS
    auto version1 = [](const string& s1, const string& s2) {
        string temp;
        temp = s2 + s1 + s2;
        return temp;
    };
    auto version2 = [](string& s1, const string& s2) {
        s1 = s2 + s1 + s2;
        return s1;
    };
    string input;
    string result;
    cout << "Enter a string: ";
    getline(cin, input);
    cout << "Your string as entered: " << input << endl;
    result = version1(input, "***");
    cout << "Your string enhanced: " << result << endl;
    cout << "Your original string: " << input << endl;
    result = version2(input, "###");
    cout << "Your string enhanced: " << result << endl;
    cout << "Your original string: " << input << endl;
#endif
    return 0;
}