#include <iostream> 
int main()
{
    int val = 1;

    while (val <= 100){
        if (val%3 == 0) {
            if (val%5 == 0) {
                std::cout<< "FizzBuzz \n";
            } else {
                std::cout<< "Fizz \n";
            }
        } else if (val%5 == 0) {
            std::cout<< "Buzz \n";
        } else {
            std::cout<< val << " \n";
        }

        ++val;
    }
    
    return 0;
}
