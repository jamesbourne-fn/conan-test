#include <iostream>
#include <string>

void print(std::ostream& os, std::string msg)
{
    os << msg << std::endl;
}


int main(int argc, char *argv[]) 
{
    print(std::cout, "Hello World!!");
    return 0;
}
