#include <iostream> 


int main()
{
    int a = 8;
    a++;
    const char* string = "hello debug";

    for (int i = 0; i < 5; i++)
    {
        const char c = string[i];
        std::cout << c << std::endl;

    }

    std::cout << "Hello World!\n";
}
    