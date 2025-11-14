#include <fmt/core.h>
#include <vector>

using namespace fmt;
using std::string, std::vector;

int main()
{
    vector<string> fruit = {
        "Apple", "Orange", "Pear",
        "Grape", "Durian", "Mango"
    };

    for (auto name : fruit) {
        println("Fruit {}", name);
    }

    return 0;
}