#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_

  #include <sstream>
  #include <vector>
  #include <string> 
  class Instruction{
  private:
    std::string instruction;
    std::string parameter;
  public:
    Instruction(std::string inst, std::string param){
      instruction = inst;
      parameter = param;
    };
    void show(){
      std::cout<<parameter<<std::endl;
    };
  };
  void readInput(const char* fileName, std::vector<std::string> &instructions){
    std::ifstream file;
    std::string line;
    file.open(fileName, std::ifstream::in);
    int count=0;
    if(file.is_open()){
      while(std::getline(file, line)){
          if(count < 3){
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
       std::cout<<"Inicializado"<<std::endl;
  }

  #endif

