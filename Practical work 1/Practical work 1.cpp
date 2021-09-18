#include <iostream>

void memoryView(int, unsigned int);

int main()
{
    //1
    std::cout << "1)\n" << "int: " << sizeof(int) << "\nshort int: " << sizeof(short int) << "\nlong int: " << sizeof(long int) 
                << "\nlong long int: " << sizeof(long long int) << "\nfloat: " << sizeof(float) << "\ndouble: " << sizeof(double) 
                << "\nlong double: " << sizeof(long double) << "\nchar:" << sizeof(char) << "\nbool: " << sizeof(bool) << "\n\n2)\n";

    //2
    std::cout << "-255 = ";
    memoryView(-255, 32);
    std::cout << " 255 = ";
    memoryView(255, 32);
    
    //3
    std::cout << "\n3)\n";
    union
    {
        int tool;
        float num_f = 3.14f;
    };
    std::cout << " 3.14 = ";
    memoryView(tool, 64);
    std::cout << "-3,14 = ";
    memoryView(tool * -1, 64);

    //4
    std::cout << "\n4)\n";
    union
    {
        long long int tool1;
        double num_d = 3.14;
    };
    
    std::cout << " 3.14 = ";
    memoryView(tool1, 64);
    std::cout << "-3.14 = ";
    memoryView(tool1 * -1, 64);
}

void memoryView(int value, unsigned int order)
{ 
    unsigned int mask = 2147483648;
    int j = 1;

    for (int i = order; i >= 1; i--)
    {

        putchar(value & mask ? '1' : '0');
        value <<= 1;

        if (j % 8 == 0)
            std::cout << ' ';
        if (j % order - 1 == 0)
            std::cout << ' ';
        j++;
    }
    std::cout << '\n';
}
