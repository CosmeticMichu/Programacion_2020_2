#include<iostream>
void  helloworld(int m); // declaracion

int main(void)
{
    int m=9;
    helloworld(m);
    return 0;
}

void helloworld(int m) // implemetacion: que y como hace
{
    std::cout<<"Hello world from a function\n";
    std::cout<< m<<"\n";
}
