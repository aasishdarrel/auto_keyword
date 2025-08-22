#include<iostream>
#include<typeinfo>

int main()
{   // auto keyword use to improve work flow the doesn"t wan explicitly want to declare the datatype it auto detects it
    auto aasish = "he is the best";
    auto dairel = "he will learn cpp";
    std::cout<<aasish<<std::endl;
    std::cout<<dairel<<std::endl;
    /* type information is used to identify the which type(which datatype) of a paricular variable delcared
     and .name() shows the short name of datatype eg integer = i , float = f et....... */
    std::cout<<typeid(aasish).name()<<" "<< typeid(dairel).name()<<std::endl;
return 0;
}


