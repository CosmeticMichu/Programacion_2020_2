#include<iostream>

//const int a = 20 // variable global no modificable, se usa en todo el código pero no se puede modificar (se puede usar pero mjr no)
//int a= 20 // variable global modificable, se usa en toddo el código pero se puede modificar (no usar)

void print_msg(double a)
{
    std::cout<<"Hello world\n";
    std::cout << "Parametro a: " << a << "\n";
    std::cout << "Dirección de a en print :" << &a << std::endl;
}

int main(void)
{
    double a = 12;
    std::cout << "Dirección de a en main: " << &a << std::endl; // el & (amperstand) antes de una variable sirve para extraer la dirección de memoria de una variable
    print_msg(a);
    return 0;
}
