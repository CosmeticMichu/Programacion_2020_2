#include<iostream>

int main(int argc, char **argv)
{
    int c = 90;
    auto flambda = [](auto a, auto b){return a< b;};
    bool flag = flambda(2,2.39);
    std::cout << flag << "\n";
    std::cout << flambda(2.39,2);
        return 0;
}
