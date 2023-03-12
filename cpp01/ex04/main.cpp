/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: main.cpp
  date: 2023-03-12T13:57:41.029Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "main.hpp"

int main(int ac, char *av[]){
	if (ac == 4 ){
		std::string s1 = av[2];
		std::string s2 = av[3];
		std::string filename = av[1];
		std::ifstream file(filename);
		if (!file){
			std::cout << "error" << std::endl;
			return 1;
		}

		std::ofstream outfile (filename + ".replace");
		if (!outfile){
			std::cout << "error" << std::endl;
			return 1;
		}
		std::string line;
		while (std::getline(file, line)){
			size_t pos = 0;
			while ((pos = line.find(s1, pos)) != std::string::npos){
				line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
				pos += s2.length();
			}
			outfile << line << std::endl;
		}
		file.close();
		outfile.close();
	}
	return 0;
}