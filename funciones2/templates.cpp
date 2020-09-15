#include<iostream>
#include<cstdlib>

template <typename T, typename S> //el S se agrega para que detecte combinaciones de tipos de valores
T getmax(T a, S b)
    {
    T result = a;
    if (b > a){
        result = b;
    }
    return result;
}

int main(int argc, char **argv)
{
    std::cout << getmax(2,-1) << "\n";
    std::cout << getmax(-1.56, -1.84) << "\n";
    std::cout << getmax(-2.56, -3) << "\n";
    std::cout << getmax(-3, -2.56) << std::endl;
    
    return 0;
}
 /* Es lo mismo pero con la funcion plantilla, que se encarga que asignar el tipo de datos
el codigo queda mucho mas corto*/

