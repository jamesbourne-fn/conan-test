#include <iostream>
#include <string>

/**
 * This is a utility divide method
 * @param value The value to be divided
 * @param divisor The divisor to divide by
 * @return The result of the divide 
 */
float divide(int value, int divisor)
{
    return lhs / rhs;  
}

/**
 * This is a utility multiply method
 * @param lhs The lhs factor to use
 * @param rhs The rhs factor to use
 * @return The result of the multiply 
 */
int multiply(int lhs, int rhs)
{
    return lhs * rhs;  
}

/**
 * This is a utility subract method
 * @param lhs The lhs value to subtract from
 * @param rhs The rhs value to subtract
 * @return The result of the subtract 
 */
int subtract(int lhs, int rhs)
{
    return lhs - rhs;  
}

/**
 * This is a utility add method
 * @param lhs The lhs value to add
 * @param rhs The rhs value to add
 * @return The result of the add 
 */
int add(int lhs, int rhs)
{
    return lhs + rhs;  
}

/**
 * This is a utility method to print to output
 * to a stream
 * @param os This is the output stream
 * @param msg This is the message to print
 */
void print(std::ostream& os, std::string msg)
{
    os << msg << std::endl;
}

/** 
 *  This is the main method
 */
int main(int argc, char *argv[]) 
{
    print(std::cout, "Hello World!!");
    return 0;
}
