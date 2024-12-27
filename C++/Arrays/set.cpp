#include <iostream>
#include <set>
#define p(v) for(auto a : v) std::cout << a << std::endl;
#define sp() std::cout << "=================" << std::endl;
#define out(a) std::cout << a << std::endl;

int main() {
    std::set<int> s1;                        // Empty set
    std::set<int> s2 = {1, 2, 3};           // Initialize with values
    std::set<int> s3(s2);                   // Copy constructor

    s1.insert(1);                           // Insert element 1
    s1.insert(2);                           // Insert element 2
    s1.emplace(3);                          // Insert using emplace

    for (auto it = s1.begin(); it != s1.end(); ++it) {
        std::cout << *it << " ";            // Iterate and print elements
    }
    std::cout << std::endl;

    out(s3.size());                         // Number of elements
    out(s3.empty());                        // Check if the set is empty

    if (s1.find(4) != s1.end()) {           // Check if element exists
        std::cout << "Element 4 found\n";
    } else {
        std::cout << "Element 4 not found\n";
    }

    s1.erase(2);                            // Remove element 2
    sp();
    p(s1);                                  // Print all elements

    s3.swap(s1);                            // Swap contents of two sets

    auto lower = s1.lower_bound(2);         // Iterator to the first element >= 2
    auto upper = s1.upper_bound(2);         // Iterator to the first element > 2

    sp();
    if (lower != s1.end()) {
        std::cout << "Lower bound: " << *lower << "\n";
    } else {
        std::cout << "Lower bound not found!\n";
    }

    sp();
    if (upper != s1.end()) {
        std::cout << "Upper bound: " << *upper << "\n";
    } else {
        std::cout << "Upper bound not found!\n";
    }

    std::cin.get();
    return 0;
}