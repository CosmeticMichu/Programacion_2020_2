#include<iostream>
#include<vector> // permite arreglos de datos {1, 2, 3, 4, -9}
#include<algorithm> // no lentendi 20:35 del video de funciones lambda

int main(int argc, char **argv)
{
    int c = 90;
    for(int ii = 0; ii < 3; ++ii){
    auto flambda = [&c, ii](auto a, auto b){ // si no se pone el c dentro de los corchetes no se captura c y el compilador marca el error //el & referencia a la variable general, para poder modificarla
        std::cout << "c:" << c <<std::endl;
        c = 100*ii;
        return a< b;};
    bool flag = flambda(2,2.39);
    std::cout << flag << "\n";
    std::cout << flambda(2.39,2) << std::endl;
    }
        return 0;
}
