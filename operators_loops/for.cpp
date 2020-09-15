#include<iostream>
int main()
{int x=0,y=-1;
    for(int n = 100, i = 0; n!=i ;  n--, i++){ \\ explota si la distancia entre n i es un número impar

        std::cout << "n= " << n << ", ";
        std::cout << "i= " << i << ", ";
        x++;
        y++;
        }
    std::cout << "\n" << "Los dos números se encuentran en la posición " << x <<" respecto a n, y en la posición " << y <<" respecto a i";
    return 0;
}
