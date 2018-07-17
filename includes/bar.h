#pragma once
#include <string>
#include <iostream>
class Bar{
private:
	std::string s;
public:
	Bar(std::string s){
		this->s = s;
	}
	void foo(){
		std::cout << this->s << std::endl;
	}
};