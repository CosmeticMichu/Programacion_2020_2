#include<iostream>
#include<cstdlib>

long factorial_loop(int n);
long factorial_recu(int n);

int main(int argc, char **argv)
{
    int n = std::atoi(argv[1]);
    std::cout << factorial_recu(n) << "\n";
    std::cout << factorial_loop(n) << "\n";
    
    return 0;
}

long factorial_recu(int n)
{
    if(n <= 1) {return 1; }
    return n*factorial_recu(n-1);
        
}

long factorial_loop(int n)
{
    long mult = 1;
    for(long ii = 2; ii <= n; ++ii){
        mult = mult*ii;
    }
    return mult;
}
