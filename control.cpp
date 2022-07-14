#include <iostream> 
//Basics of looping.
int main()
{
    int sum = 0, val = 1;
    //while loops are very straightforward.
    while (val <= 10){
        sum += val;
        ++val;
    }
    std::cout<< "[while loop test] Sum of 1 to 10, inclusively, is "<<sum<<std::endl;

    int sum2 = 0;
    //for loops are less straightforward. You must specify the condition and iteration.
    for (int val = 11; val<=20; ++val)
        sum2 += val;
    std::cout<< "[for loop test] Sum of 11 to 20, inclusively, is "<<sum2<<std::endl;

    return 0;
}
