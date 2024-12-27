#include<iostream>
#include<string>

int main() {

	//all char* functions are valiable
	const char* c = "hello world";
	std::cout << "=====[cahr *]======" << std::endl;
	std::cout << c << std::endl;
	std::cout << "length: " << strlen(c) << std::endl;
	std::cout << "=====[stander string]======" << std::endl;
	//this is imposible without including string
	std::string str = "hello ";
	std::cout << str << std::endl;
	std::cout << "length: " << str.size() << std::endl;
	str.append(1, ' ');
	std::cout << "add chr: " << str << std::endl;
	str += "World!";
	//it is not possible to write : std::string str = "hello "+"world!";
	std::cout << "concatination: " << str << std::endl;
	bool contains = str.find("ab") != std::string::npos;
	std::cout << "conatinis: " << contains << std::endl;
	//insert
	//char * c = "hello";
	//c[1]='a';
	//it is unaceptable
	//in stander
	str.insert(str.begin()+1,'a');
	std::cout << "insert 'a' : " << str << std::endl;
	str.insert(6, 7, 'b');
	std::cout << "insert 6 'b's : " << str << std::endl;



	std::cin.get();
	return 0;
}