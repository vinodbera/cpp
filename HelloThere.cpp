#include <iostream>

int main(){
    std::cout << "Hello There\n";
    std::cout<<"hello there"<<std::endl; //:: just helps the compiler understand where the method we are using is coming from. 
                                         // Sometimes there may be two different methods with the same name 
                                         // and in such cases :: help us tell the compiler where the method 
                                         // we're using is coming from
    return 0;
}