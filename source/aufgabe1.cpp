#include <cstdlib> // std :: rand()
#include <vector> // std::vector<>
#include <list> // std::list<>
#include <iostream> // std :: cout
#include <iterator> // std::ostream_iterator <>
#include <algorithm> // std::reverse, std::generate


int main()
{
std::vector<int>v0(10);  //Creating a Vector named v0 which contains a list of 10 integer values

for (auto& v : v0){ // an iteration that starts refering to the beginning of the v0 Vector
	v = std::rand(); // placing random numbers into the 10 places that we have created v0-v9
}
std::copy(std::begin(v0), std::end(v0), // we are creating a copy of the vector v0 from beginning to the end
		  std::ostream_iterator<int>(std::cout, "\n")); // printing them out. 

std::list<int> l0(v0.size()); // creating a new list called l1 with the same size as the v0
std::copy(std::begin(v0), std::end(v0), std::begin(l0)); // copying the elements into the 

std::list<int> l1(std::begin(l0), std::end(l0)); 
std::reverse(std::begin(l1), std::end(l1)); 
std::copy(std::begin(l1), std::end(l1),
		  std::ostream_iterator<int>(std::cout, "\n"));

l1.sort(); 
std::copy(l1.begin(), l1.end(),
		std::ostream_iterator<int>(std::cout, "\n"));

std::generate(std::begin(v0), std::end(v0), std::rand); 
std::copy(v0.rbegin(), v0.rend(),
		std::ostream_iterator<int>(std::cout, "\n")); 

return 0;
}