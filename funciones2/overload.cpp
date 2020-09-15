#include<iostream>
#include<cstdlib>

int getmax(int a, int b);
double getmax(double a, double b);
double getmax(double a, int b);
double getmax(int a, double b);

int main(int argc, char **argv)
{
    std::cout << getmax(2,-1) << "\n";
    std::cout << getmax(-1.56, -1.84) << "\n";
    std::cout << getmax(-2.56, -3) << "\n";
    std::cout << getmax(-3, -2.56) << std::endl;
    
    return 0;
}

int getmax(int a, int b)
{
    int result = a;
    if (b > a){
        result = b;
    }
    return result;
}

double getmax(double a, double b)
{
    double result = a;
    if (b > a){
        result = b;
    }
    return result;
}

double getmax(double a, int b)
{
    double result = a;
    if (b > a){
        result = b;
    }
    return result;
}

double getmax(int a, double b)
{
    double result = a;
    if (b > a){
        result = b;
    }
    return result;
}


