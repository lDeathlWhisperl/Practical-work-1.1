#include <iostream>

int main()
{
    //1
    std::cout << "1)\n" << "int: " << sizeof(int) << "\nshort int: " << sizeof(short int) << "\nlong int: " << sizeof(long int) 
                << "\nfloat: " << sizeof(float) << "\ndouble: " << sizeof(double) << "\nlong double: " << sizeof(long double)
                << "\nchar:" << sizeof(char) << "\nbool: " << sizeof(bool) << "\n\n2)\n";

    //2
    int value = -255;
    int order = 32;
    int mask = 2147483648;
    int j = 1;

    for (int i = order; i >= 1; i--)
    {

        putchar(value & mask ? '1' : '0');
        value <<= 1;

        if (j % 8 == 0 )
            std::cout << ' ';
        j++;
    }
}
