#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm> // For sorting
using namespace std;

int main() {
    // Explaining to a 5-year-old:
    cout << "Imagine you have a toy box to keep your toys. Arrays, vectors, maps, and sets are different ways to organize them!\n";

    // 1. Arrays
    cout << "\n--- Arrays ---\n";
    int toys[5] = {10, 20, 30, 40, 50}; // Fixed-size toy box
    cout << "Toys in the array: ";
    for (int i = 0; i < 5; i++) {
        cout << toys[i] << " ";
    }
    cout << endl;

    // Search in array
    int searchToy = 30;
    bool found = false;
    for (int i = 0; i < 5; i++) {
        if (toys[i] == searchToy) {
            found = true;
            break;
        }
    }
    cout << "Is toy " << searchToy << " in the array? " << (found ? "Yes" : "No") << endl;

    // 2. Vectors
    cout << "\n--- Vectors ---\n";
    vector<int> toyVector = {10, 20, 30, 40, 50}; // Flexible-size toy box
    toyVector.push_back(60); // Add a new toy
    cout << "Toys in the vector: ";
    for (int toy : toyVector) {
        cout << toy << " ";
    }
    cout << endl;

    // Sort the vector
    sort(toyVector.begin(), toyVector.end());
    cout << "Toys after sorting: ";
    for (int toy : toyVector) {
        cout << toy << " ";
    }
    cout << endl;

    // 3. Maps
    cout << "\n--- Maps ---\n";
    map<string, int> toyMap; // Toy box with labels
    toyMap["Car"] = 10;
    toyMap["Ball"] = 20;
    toyMap["Doll"] = 30;
    cout << "Toys in the map: \n";
    for (auto pair : toyMap) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    // Search in map
    string searchLabel = "Ball";
    if (toyMap.find(searchLabel) != toyMap.end()) {
        cout << "Found " << searchLabel << " with value " << toyMap[searchLabel] << endl;
    } else {
        cout << searchLabel << " not found in the map." << endl;
    }

    // 4. Sets
    cout << "\n--- Sets ---\n";
    set<int> toySet = {10, 20, 30, 40, 50}; // Unique toy box
    toySet.insert(60); // Add a new toy
    toySet.insert(30); // Duplicate toys are not added
    cout << "Toys in the set: ";
    for (int toy : toySet) {
        cout << toy << " ";
    }
    cout << endl;

    // Search in set
    int searchInSet = 40;
    if (toySet.find(searchInSet) != toySet.end()) {
        cout << "Found toy " << searchInSet << " in the set." << endl;
    } else {
        cout << "Toy " << searchInSet << " not found in the set." << endl;
    }

    return 0;
}
