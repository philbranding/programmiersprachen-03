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
		i = std::rand() % 101; // placing random numbers into the 10 places that we have created v0-v9
	}

	std::vector<unsigned int> myVector(mylist.size());
			std::copy(std::begin(mylist), 
			std::end(mylist),
			std::begin(myVector)); 

//using set to get the different numbers from 1 to 100 
std::cout <<"  " <<std::endl; 
std::cout <<" -------------------------------------Aufgabe 3.3 Set-----------------------------------------" <<std::endl; 

	std::set<unsigned int> setlist(std::begin(mylist), std::end(mylist));
	    for (auto& i : setlist){
	    	setlist.insert(i);
	    	std::cout<< i <<" ";
    }

std::cout <<"  " <<std::endl;
std::cout <<"There are : " << setlist.size() << "  different numbers in the List" <<std::endl;
std::cout <<"  " <<std::endl;

//using set to get the missing number by checking with a counter
std::cout <<" ----------------------3.3 Zahlen von 0 bis 100 die nicht in der Liste sind--------------------" <<std::endl;


	 for(unsigned int missingNumber = 0; missingNumber <= setlist.size(); missingNumber++){
        if(setlist.find(missingNumber) == setlist.end()){
        	std::cout<< missingNumber <<" ";
    		}

		}
std::cout <<"  " <<std::endl;
std::cout <<"  " <<std::endl;


	return 0;
}