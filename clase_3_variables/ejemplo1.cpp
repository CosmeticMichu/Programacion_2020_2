#include<iostream>
#include<string>

int main(int argc, char **argv)
{
    std::string fullname;
    std::cout<< "Hola, escribe tu nombre, por favor\n";
    std::getline(std::cin, fullname);
    //std::cin>> fullname; se puede usar pero para cuando encuentra un espacio
    std::cout << "Hola, " << fullname << std::endl;
    return 0;
}
