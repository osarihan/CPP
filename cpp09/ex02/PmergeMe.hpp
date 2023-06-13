/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: PmergeMe.hpp
  date: 2023-06-13T10:10:35.582Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include <iostream>
#include <string>
#include <deque>
#include <map>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cctype> //isdigit

class PmergeMeDeque
{
	public:
		PmergeMeDeque();
		~PmergeMeDeque();
		PmergeMeDeque(const PmergeMeDeque &obj);
		PmergeMeDeque &operator=(const PmergeMeDeque &obj);
		std::deque<int> con;
		std::deque<int>::iterator it;
		void	addToDeq(std::deque<int> &con,char **argv);
		void	mergeDeq(std::deque<int>& deq, int left, int middle, int right);
		void	mergeSortDeq(std::deque<int>& deq, int left, int right);
};

class PmergeMeMap
{
	public:
		PmergeMeMap();
		~PmergeMeMap();
		PmergeMeMap(const PmergeMeMap &obj);
		PmergeMeMap &operator=(const PmergeMeMap &obj);
		std::map<int,int> con;
		std::map<int,int>::iterator it;
		void	addToMap(std::map<int,int> &con,char **argv);
		void	mergeMap(std::map<int,int>& map, int left, int middle, int right);
		void	mergeSortMap(std::map<int, int>& map, int left, int right);
};

bool ft_isdigit(char *arg);