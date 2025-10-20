#include <iostream>

int main(void)
{
    std::string name;
    std::cout << "Hello, who are you?" << std::flush;
    std::cin >> name;
    std::cout << "Hello, " << name << std::endl;
    return 0;
}
