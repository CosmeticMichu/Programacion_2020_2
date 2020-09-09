#include<iostream>

double average (double x, double y);

int main(void)
{
    double x = 9.8, y = -10.76, z = 0;
    z = average(x,y);
    std::cout << z << std::endl;
    return 0;
}

double average(double x,double y)
{
    double result = 0;
    result = 0.5*(x+y);
    return result;
}
