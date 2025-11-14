#include <fmt/core.h>

using namespace fmt;

int main()
{
    print("Hello World!\n");
    int foo = 62;
    auto msg = fmt::format("An int {}", foo);
    fmt::println("The result is: {}", msg);
    return 0;
}