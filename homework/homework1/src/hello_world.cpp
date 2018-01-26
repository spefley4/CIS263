#include "hello_world.h"
#include <string>
#include <iostream>

void saySomething(std::string str, int numTimes){

	for(int i=0; i<numTimes; i++) {
		std::cout << str << std::endl;
	}

}
