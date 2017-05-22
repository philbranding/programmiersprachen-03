# define CATCH_CONFIG_RUNNER
# include <catch.hpp>
# include <cmath>
# include <vector>
# include <algorithm>
# include "circle.hpp"


TEST_CASE ("Checking if the myCircle vector is sorted","[sort]")
{
	std::vector<Circle> myCircle;
	
	for(int i=0;i<10;i++){
		myCircle.push_back(Circle(10-i));	//Circle with different Radius
	}

	std::sort (myCircle.begin(), myCircle.end()); //Sorting the vector containing circle

	REQUIRE (std::is_sorted(myCircle.begin(), myCircle.end ())); 
	
}

int main(int argc, char *argv[]){
  return Catch::Session().run(argc, argv);
}