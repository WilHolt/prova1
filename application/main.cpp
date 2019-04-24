#include <iostream>
#include <fstream>
#include "functions.h"



int main(int argc, char const *argv[])
{	
	std::vector<std::string> instructions;
	int actual_y = 5; 
	int actual_x = 5;

	int init_x = 0;
	int init_y = 0;
	std::string actual_command;


	readInput(argv[1], instructions );
			int x = std::stoi( instructions[0],nullptr, 10);
			int y = std::stoi( instructions[1],nullptr, 10);
			std::vector<std::vector<int>> table(x,std::vector<int>(y,0)); // INICIALIZAR MATRIZ
			 
	for(unsigned int i = 0 ; i < instructions.size() ; i++){
		std::cout<<instructions[i];
		if(i>2){
			if( instructions[i] == "a"){
			table[actual_x][actual_y] = 1;
			actual_command = "a";
			}
			if( instructions[i] == "s"){
				actual_command = "s";
			}
			if(instructions[i] == "c"){//cima
			int aux = std::stoi( instructions[++i],nullptr, 10);	
			init_x = actual_x;						
				for(int cont = actual_x; cont > (init_x-aux); cont--){
					table[cont][actual_y] = 1;
				}
	
			}
			if(instructions[i] == "b"){//baixo
				int aux = std::stoi( instructions[++i],nullptr, 10);	
				init_x = actual_x;		
				for(int cont = init_x ; cont < aux ; cont++){
					if(actual_command == "a"){
						table[cont][actual_y]  = 1;
						actual_x++;						
					}
					else{
						actual_x++;
					}
				}
			
			}
			if(instructions[i] == "d"){//direita
				int aux = std::stoi( instructions[++i],nullptr, 10);
				init_y = actual_y;				
				for(int cont = init_y; cont < aux; cont++){
					if(actual_command == "a"){
						table[actual_x][cont]  = 1;
						actual_y++;
					}else{
						actual_y++;						
					}
				}
				i++;

			}
			if(instructions[i] == "e"){//esquerda
				int aux = std::stoi( instructions[++i],nullptr, 10);
				init_y = actual_y;								
				for(int cont = init_y; cont > (init_y-aux); cont--){
					table[actual_x][cont] = 1;
				}
				i++;
			}
		}
	}
	for (unsigned int i = 0; i < table.size(); i++)
	{	
		for (unsigned int j = 0; j < table[i].size(); j++)
		{
			std::cout << table[i][j];
		}
	}
	writeOutFile(table);
}