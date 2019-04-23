#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_
  #include <sstream>
  #include <vector>

  void readInput(const char* fileName, std::vector<std::string> &instructions){
    std::ifstream file;
    std::string line;
    file.open(fileName, std::ifstream::in);
    int count=0;
    if(file.is_open()){
      while(std::getline(file, line)){
          if(count < 3){
          //std::cout<<line<<std::endl;
          }

          std::istringstream iss(line);

      std::string instruction;
      while(iss >> instruction  ){
          instructions.push_back(instruction);
     
      }
     count++;
      }
    }
  }

  void createPBMImage(){

  }
  
  void initializeMatrix(int x, int y){
	std::vector<std::vector<int>> table;
    for(int i = 0; i< x ; i++){
      std::vector<int> aux(0,y); 
      table.push_back(aux);
    }
  }

  #endif

