# define CATCH_CONFIG_RUNNER
# include <catch.hpp>
# include <cmath>
# include <vector>
# include <algorithm>
# include "circle.hpp"

// Aufgabe 3.7 sorting the vector that containes the raduis of the Circle Objects created
TEST_CASE ("Checking if the myCircle vector is sorted","[sortAufgabe3.7]")
{
	std::vector<Circle> myCircle;
	
	for(int i=0;i<10;i++){
		myCircle.push_back(Circle(10-i));	//Circle with different Radius
	}

	std::sort (myCircle.begin(), myCircle.end()); //Sorting the vector containing circle

	REQUIRE (std::is_sorted(myCircle.begin(), myCircle.end ())); 
	
}


TEST_CASE("comparing after sorting using Lambda", "[Lambda]") {
  std::vector<Circle> myCircleVector(10);

  for (int v0 = 0; v0 <= 9; ++v0){
    myCircleVector[v0].radius(rand()); //Generate random radius and storing them in the myCircleVector
  }

  std::sort(std::begin(myCircleVector), //Sorting the myCircleVector 
  std::end(myCircleVector),[](Circle const& Circle1, Circle const& Circle2){ //Using Lambda to compare two radius
      return (Circle1.radius() < Circle2.radius());
      } 
    );

  REQUIRE(std::is_sorted(std::begin(myCircleVector), std::end(myCircleVector)));

  

std::vector<int> vec1 {9,8,7,6,5,4,3,2,1,10}; //Testing Lambda sorting a user Defined vec with 10 radius 
	
std::sort(std::begin(vec1), //Sorting the myCircleVector 
std::end(vec1),[](Circle const& Circle1, Circle const& Circle2){ //Using Lambda to compare two radius
      return (Circle1.radius() < Circle2.radius());
      } 
    );
 
  REQUIRE(std::is_sorted(std::begin(vec1), std::end(vec1)));

}




int main(int argc, char *argv[]){
  return Catch::Session().run(argc, argv);
}