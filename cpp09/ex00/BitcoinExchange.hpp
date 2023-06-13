/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: BitcoinExchange.hpp
  date: 2023-06-12T10:24:47.329Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>

class BitcoinExchange{
private:
	
public:
    /*ortadox*/
    BitcoinExchange();
    ~BitcoinExchange();
    BitcoinExchange &operator=(BitcoinExchange &obj);
    BitcoinExchange(BitcoinExchange &obj);

    /*subject*/
    float btc;
    float exrate;

    std::string line;

    std::ifstream input;
    std::ifstream data;

	std::vector<std::string> con;
	std::vector<std::string> btcdata;

    char *_av;

    int Exchange(void);
    int FileCheck(void);
};

#endif