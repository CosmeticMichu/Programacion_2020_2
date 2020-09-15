#include<iostream>
int main(void){
    int suma = 0;
    for(int n = 0; n<=100; n++){
        if(n%2 == 0){
            suma += n;
        }
    }

    std::cout << suma;
    
    return 0;
}
