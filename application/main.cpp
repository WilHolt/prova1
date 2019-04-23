#include <iostream>
#include <fstream>
#include "functions.h"



int main(int argc, char const *argv[])
{
	std::vector<std::string> instructions;
	int actual_y, actual_x;


	readInput(argv[1], instructions);
			int x = std::stoi( instructions[0]);
			int y = std::stoi( instructions[2]);
			initializeMatrix(x,y);
	
	for(unsigned int i = 0 ; i < instructions.size() ; i++){

	}
}