# define CATCH_CONFIG_RUNNER
# include <catch.hpp>
# include <cmath>
# include <algorithm>
#include <iostream>


bool isnt_multiple_of_3(int numInt){
    return ((numInt%3)!=0);
}

bool is_multiple_of_3(int numInt){
    return ((numInt%3)==0);
}

TEST_CASE ("filter alle vielfache von drei", "[erase]")
{

//using set to get the different numbers from 1 to 100 
std::cout <<"  " <<std::endl; 
std::cout <<" ------------------------------Aufgabe 5 vector with random number 1 to 100----------------------------------" <<std::endl; 

std :: vector <int> v0(100);
	for (auto& myVector : v0){
	myVector = std::rand()%101;
	std::cout << myVector <<" ";
}


std::cout <<"  " <<std::endl; 
std::cout <<"  " <<std::endl; 
std::cout <<" -----------------------------------------Numbers that are Divisible by 3-------------------------------------" <<std::endl;

v0.erase(std::remove_if(v0.begin(), v0.end(), isnt_multiple_of_3), v0.end());
	for (auto& myVector : v0){
	std :: cout << myVector <<" ";
}

std::cout <<"  " <<std::endl; 
std::cout <<"  " <<std::endl; 
std::cout <<" ------------------------------------------------TEST_CASE Assertion-------------------------------------------" <<std::endl;

REQUIRE(std::all_of(v0.begin(), v0.end(), is_multiple_of_3));


}
int main(int argc, char* argv[])
{
return Catch::Session().run(argc, argv);
}