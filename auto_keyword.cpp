#include<iostream>
#include<typeinfo>

int main()
{
    auto aasish = "he is the best";
    auto dairel = "he will learn cpp";
    std::cout<<aasish<<std::endl;
    std::cout<<dairel<<std::endl;
    std::cout<<typeid(aasish).name()<<" "<< typeid(dairel).name()<<std::endl;
return 0;
}


