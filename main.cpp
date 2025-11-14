#include <fmt/core.h>
#include <vector>

using namespace fmt;
using std::vector;

int main()
{
    vector<int> ages = { 12, 62, 23, 18, 5 };
    for (size_t i = 0; i < ages.size(); i++) {
        println("#{}. {}", i + 1, ages.at(i));
    }

    return 0;
}