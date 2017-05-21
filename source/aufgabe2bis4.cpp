# include <cstdlib> //std::rand()
# include <vector> //std::vector<>
# include <list>   //std::list<>
# include <iostream> //std::cout
# include <iterator> //std::ostream_iterator<>
# include <algorithm> //std::reverse, std::generate
# include <set>
# include <map>


int main(){

std::list<unsigned int> mylist(100); // creating a new list called l1 with the same size as the v0
	for (auto& i : mylist){ // an iteration that starts refering to the beginning of the v0 Vector
		i = std::rand() % 100 + 1; // placing random numbers into the 10 places that we have created v0-v9
	}

	std::vector<unsigned int> myVector(mylist.size());
		std::copy(std::begin(mylist), std::end(mylist),std::begin(myVector)); 

	std::set<unsigned int> setlist(std::begin(mylist), std::end(mylist));
	std::cout <<" There are : " << setlist.size() << "  different numbers in the List" <<std::endl;



	return 0;
}