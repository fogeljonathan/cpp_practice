#include <iostream>
#include <string>
//Basics of creating and using classes/structs

//Structs default to public information, and classes default to private.
struct ExampleStruct {
    string name;
    int age;
    int jerseynumber;
};

int main()
{
    ExampleStruct Jonathan;
    //The next three lines run because the members of ExampleStruct are all public. They would return errors if they were private, like if it was a class instead.
    Jonathan.name = "Jonathan";
    Jonathan.age = 23;
    Jonathan.jerseynumber = 9;

    std::cout<< "Accessing Jonathan's Files... \nName: "<<Jonathan.name<<". \nAge: "<< Jonathan.age<<". \nJersey Number: "<<Jonathan.jerseynumber<<"."<<endl;
}
