#include<iostream>
#include<array>
#define rf(m,arr,a) for(int i =0;i<m;i++)arr[i]=a;
#define ff(m,arr) for(int i = 0;i<m;i++)std::cin>> arr[i];
#define fout(arr) for(int e:arr)std::cout<<e<< std::endl;
int main() {
	//declarations 
	//1.C like
	int arr[5];
	//2.the "new" one
	int* arr1 = new int[5];
	//3.stander one
	std::array<int, 5> arr2;
	std::cout << "====[sizes]===" << std::endl;

	//sizes
	//1.
	int count = sizeof(arr) / sizeof(int);
	std::cout << count << std::endl;
	//2.
	int size = sizeof(arr1) / sizeof(int);
	std::cout << size << std::endl;
	//3. 
	int arrSize = arr2.size();
	std::cout << arrSize << std::endl;
	//Fill an array
	std::cout << "====[Fill with input]===" << std::endl;

	// for loop is valiable for all 
	for (int i = 0; i < 5;i++)*(arr1 + i) = 2;
	//whit macros
	rf(5, arr, 1);
	// for std arrays we have
	arr2.fill(3);
	//get element 
	std::cout << "====[Get Elements]===" << std::endl;
	// 
	//1. and 2. and 3.
	std::cout << arr[0] << std::endl;
	std::cout << *(arr1 + 1) << std::endl;
	//3.
	std::cout << arr2.at(2) << std::endl;
	std::cout << *arr2.begin() << std::endl;
	std::cout << arr2.back() << std::endl;
	//fill with input 
	ff(5, arr2);
	fout(arr2);
	std::cin.get();
	return 0;
}