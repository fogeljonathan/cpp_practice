#include <iostream>
#include <string>

// This is a single lined comment.

/* This is a multiline comment.
Wow, another commented line!
Could it be??? a third commented line??? */

int main()
{
    std::cout<< "Write Your Name: " <<std::endl;
    std::string name;
    std::cin>>name;
    std::cout<< "Hi, "<< name << ", nice to meet you! I am a .cpp file!" <<std::endl;
}
