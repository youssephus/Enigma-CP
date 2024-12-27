#include<iostream>
#include<map>
#include<array>
#define p(v)for(auto a:v)std::cout << a << std::endl;
#define sp() std::cout << "================="<<std::endl;
#define out(a) std::cout << a<<std::endl;

int main() {

	std::map<int, std::string> m1;                  // Empty map
	std::map<int, std::string> m2 = { {1, "one"},    // Initialize with key-value pairs
									 {2, "two"},
									 {3, "three"} };
	std::map<int, std::string> m3(m2);              // Copy constructor

	m1[1] = "one";                    // Insert or update key 1 with value "one"
	m1.insert({ 2, "two" });            // Insert key 2 with value "two"
	m1.emplace(3, "three");           // Insert using emplace (faster, no copy)
	std::cout << m1[1];               // Access value by key (creates a default value if key doesn't exist)
	std::cout << m1.at(1);            // !!!!Access value by key (throws exception if key doesn't exist)

	// struct:
	// first:key
	//second:value

	for (auto it = m1.begin(); it != m1.end(); ++it) {
		std::cout << it->first << ": " << it->second << "\n";
	}
	out(m3.size());                        // Number of elements
	out(m3.empty());                       // Check if the map is empty


	if (m1.find(4) != m1.end()) {     // Check if key 2 exists
		std::cout << "Key 2 found\n";
	}

	m1.count(2);                      // Returns 1 if key exists, 0 otherwisestd::map<int, std::string> m4;

	m3.swap(m1);                      // Swap contents of two maps
	auto lower = m1.lower_bound(2);   // Iterator to the first element >= 2
	auto upper = m1.upper_bound(2);   // Iterator to the first element > 2
	sp();
		if (lower != m1.end())
			std::cout << "Key: " << lower->first << ", Value: " << lower->second << "\n";
		else
			std::cout << "Lower bound not found!";
	sp();
	if (upper != m1.end())
		std::cout << "Key: " << upper->first << ", Value: " << upper->second << "\n";
	else
		std::cout << "Upper bound not found!";
	std::cin.get();

	return 0;
}