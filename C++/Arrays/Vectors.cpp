#include<iostream>
#include<vector>
#include<array>
#define p(v)for(int a:v)std::cout << a << std::endl;
#define sp() std::cout << "================="<<std::endl;
#define out(a) std::cout << a<<std::endl;

int main() {

	std::vector<int> v1;                      // Empty vector of integers

	std::vector<int> v2(5, 10);               // Vector with 5 elements, all initialized to 10

	std::vector<int> v3 = { 1, 2, 3, 4, 5 };    // Initialization using initializer list

	std::vector<int> v4(v3);                  // Copy constructor
	std::array<int, 5> arr2;
	arr2.fill(3);
	std::vector<int> v5(arr2.begin(), arr2.end()); // Create from iterators

	v2.push_back(42);        // Add element at the end
	p(v2);
	sp();
	v2.pop_back();           // Remove last element
	p(v2);
	sp();
	v2.insert(v2.begin(), 7); // Insert 7 at the beginning
	p(v2);
	sp();
	v2.erase(v2.begin());    // Remove the first element
	p(v2);
	sp()
	v2.clear();              // Remove all elements
	p(v2);
	sp();

	out(v3[0]);                   // Access using index

	out(v3.at(0));                // Access with bounds checking

	out(v3.front());              // First element

	out(v3.back());               // Last element
	out(v3.size());               // Number of elements in the vector
	out(v3.capacity());           // Current allocated storage
	out(v3.empty());              // Check if vector is empty
	v3.resize(10);         // Resize to 10 elements (default-initialized if expanding)
	v3.reserve(20);          // Pre-allocate space for at least 20 elements
	sp();
	for (auto it = v4.begin(); it != v4.end(); ++it) {
		std::cout << *it << " ";              // Iterator-based loop
	}
	sp();
	for (int x : v4) {                        // Range-based for loop
		std::cout << x << " ";
	}
	sp();

	for (auto it = v5.begin(); it != v5.end(); ++it) {
		std::cout << *it << " ";              // Iterator-based loop
	}
	sp();
	for (int x : v5) {                        // Range-based for loop
		std::cout << x << " ";
	}
	sp();

	std::cin.get();
	return 0;
}