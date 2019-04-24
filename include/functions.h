#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_

  #include <sstream>
  #include <vector>
  #include <string> 
  
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

  void writeOutFile(std::vector<std::vector<int>> table){
    std::ofstream ofs ("p1.txt", std::ofstream::out);
    
      ofs << "P1"<<'\n'<<"# José Wilder de Morais Venancio"
      <<'\n'<< "401" <<' '<<"401" << ' ' ;
          for (unsigned int i = 0; i < table.size(); i++)
          {	
            for (unsigned int j = 0; j < table[i].size(); j++)
            {
              ofs << table[i][j] <<' ';
            }
          }
      ofs.close();
  }
  
  void initializeMatrix(int x, int y){
       std::cout<<"Inicializado"<<std::endl;
  }



  #endif

