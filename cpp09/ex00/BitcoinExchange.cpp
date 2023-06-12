/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: BitcoinExchange.cpp
  date: 2023-06-12T10:23:59.627Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "BitcoinExchange.hpp"

int BitcoinExchange::Exchange(){
	std::vector<std::string>::iterator itIn = con.begin();
	std::vector<std::string>::iterator itData = btcdata.begin();
	std::vector<std::string>::iterator tempIt = con.begin();
	while (itIn != con.end())
	{
			while (itData != btcdata.end())
			{
				if ((*itIn).substr(0,3) == "Err")
				{
					std::cout << *itIn << std::endl;
					break;
				}
				else if (atoi((*itIn).substr(0,8).c_str()) == atoi((*itData).substr(0,8).c_str()))
				{
					btc = atof((*itIn).substr(10, strlen((*itIn).c_str()) - 8).c_str());
					exrate = atof((*itData).substr(8, strlen((*itData).c_str()) - 8).c_str());
					std::cout << (*itIn).substr(0,4) << "-" << (*itIn).substr(4,2) << "-" << (*itIn).substr(6,2) << " => " << btc << " = " << exrate * btc << std::endl;
					break;
				}
				else if (atoi((*itIn).substr(0,8).c_str()) < atoi((*itData).substr(0,8).c_str()))
				{
					btc = atof((*itIn).substr(10, strlen((*itIn).c_str()) - 8).c_str());
					exrate = atof((*tempIt).substr(8, strlen((*tempIt).c_str()) - 8).c_str());
					std::cout << (*itIn).substr(0,4) << "-" << (*itIn).substr(4,2) << "-" << (*itIn).substr(6,2) << " => " << btc << " = " << exrate * btc << std::endl;
					break;
				}
				tempIt = itData;
				itData++;
			}
		itIn++;
	}
    return 1;
}

int BitcoinExchange::FileCheck(){
	std::string tmp;
	std::string res;
	std::string str;  
    
    int i = 0;
	char *pstr;

	input.open(_av);
	if (!input.is_open()){
		std::cerr << "Error: could not open file." << std::endl;
		exit(1);
	}
    std::getline(input, line);
    line.clear();
    while (std::getline(input, line)){
    	tmp = line;
    	pstr = strtok((char *)line.c_str(), "|-");
    	while (pstr != NULL){
            //std::cout << pstr << std::endl;
    		if ((atoi(pstr) > 2023 || atoi(pstr) < 2000) && i == 0){
    			con.push_back("Error: bad input => " + tmp);
    			break;
    		}
    		else if ((atoi(pstr) < 1 || atoi(pstr) > 12) && i == 1){
    			con.push_back("Error: bad input => " + tmp);
    			break;
    		}
    		else if ((atoi(pstr) < 1 || atoi(pstr) > 31) && i == 2){
    			con.push_back("Error: bad input => " + tmp);
    			break;
    		}
    		else if (atol(pstr) > 1000 && i == 3){
    			con.push_back("Error: too large a number.");
    			break;
    		}
    		else if ((str != "0" && atoi(pstr) == 0) && i == 3){
    			con.push_back("Error: not a positive number. => " + tmp);
    			break;
    		}
    		res += pstr;
    		pstr = strtok(NULL, "|-");
    		if (i == 3){
    			con.push_back(res);
    			break;
    		}
    		i++;
        }
    i = 0;
    res.clear();
    }
    line.clear();
    return 1;
}

BitcoinExchange::BitcoinExchange(){
    int i = 1;
	std::string res;
	std::string tmp;
	char *pstr;

	data.open("data.csv");
	if (!data.is_open())
	{
		std::cout << "data.csv file could not be opened !" << std::endl;
		exit(1);
	}
	std::getline(data, line);
	while (std::getline(data, line))
	{
			tmp = line;
			pstr = strtok((char *)line.c_str(), "-,");
			while (pstr != NULL)
			{
				res += pstr;
				if (i == 4)
					btcdata.push_back(res);
				pstr = strtok(NULL, "-,");
				i++;
			}
		res.clear();
		i = 1;
	}
	line.clear();
}

