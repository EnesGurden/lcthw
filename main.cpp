#include <fmt/core.h>
#include <iostream>

using namespace std;
using namespace fmt;

double ali(int n)
{
    return n * 0.05;
}

double ayse(int n)
{
    return 0.03 * n + n * n * 0.0062;
}

void estimate(int lines, double (*pf)(int))
{
    println("{} lines of code will take {} hours", lines, (*pf)(lines));
}

int main()
{
    int lines;
    println("How many lines of code you will write?");
    cin >> lines;
    println("Ali's estimation is:");
    estimate(lines, ali);
    println("Ayse's estimation is:");
    estimate(lines, ayse);
    return 0;
}