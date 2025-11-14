#include <fmt/core.h>
#include <iostream>
#include <limits>

using std::cin, std::cout, std::getline, std::string;
using namespace fmt;

void clearInput()
{
    std::streamsize eatme = std::numeric_limits<std::streamsize>::max();
    cin.clear();
    cin.ignore(eatme, '\n');
}

void printInputs(string name, int age)
{
    string quote;
    println("Tell me something about you?");
    getline(cin, quote);

    println("-------------\nHello {}, you are {} years old.", name, age);

    println("Something about you:");
    cout << quote;
}

int main()
{
    string name;
    println("What's your name?");
    cin >> name;

    int age;
    println("What's your age?");
    cin >> age;

    while (!cin) {
        clearInput();
        println("Wrong, enter a number:");
        cin >> age;
    }

    clearInput();
    printInputs(name, age);
}