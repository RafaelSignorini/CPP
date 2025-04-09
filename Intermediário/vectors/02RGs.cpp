#include <iostream>
#include <vector>
#include <map>

int main() {
	std::map<std::string, int> RGs{ {"Rafael", 75832}, {"Raul", 81573}, {"João", 57842} };
	// use the key instead of index to find a value
	std::cout << RGs["Rafael"] << std::endl;

	RGs["Raul"] = 34725;
	std::cout << RGs["Raul"] << std::endl;

	RGs.insert({ "Leon", 84567 });
	std::cout << RGs["Leon"] << std::endl;

	std::cout << "the size of the RGs vector is " << RGs.size() << std::endl;

	RGs.erase("Leon"); // this erases the Leon key value from the map
	std::cout << "the size of the RGs vector is " << RGs.size() << std::endl;

	std::cout << RGs["Leon"] << std::endl; // this line of code actually creates a "Leon" again and adds a zero to his value
	// acting as the following: RGs.insert({ "Leon", 0 });

	std::cout << "the size of the RGs vector is " << RGs.size() << std::endl;

	RGs.clear(); // erases all of the values from the vector

	std::cout << "the size of the RGs vector is " << RGs.size() << std::endl;

	return 0;
}
