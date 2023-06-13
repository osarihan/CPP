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
  date: 2023-06-13T10:10:39.632Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	PmergeMeDeque pmd;
	PmergeMeMap pmm;

	clock_t startdeq,startmap,enddeq,endmap;
	double	timedeq, timemap;

	if (argc > 1)
	{
		//DEQUE
		startdeq = clock();
		pmd.addToDeq(pmd.con, argv);
		pmd.it = pmd.con.begin();
		//oncesini yazdir
		std::cout << "Before: ";
		while (pmd.it != pmd.con.end())
		{
			std::cout << *pmd.it << " ";
			pmd.it++;
		}

		std::cout << std::endl;
		std::cout << "After: ";
		pmd.mergeSortDeq(pmd.con, 0, pmd.con.size() - 1);
		pmd.it = pmd.con.begin();
		while (pmd.it != pmd.con.end())
		{
			std::cout << *pmd.it << " ";
			pmd.it++;
		}
		enddeq = clock();
		timedeq = (double)(enddeq - startdeq) / CLOCKS_PER_SEC;
		std::cout << "\nTime to process a range of " << pmd.con.size() << " elements with std::[deque] : " << std::fixed << timedeq << " us" << std::endl;

		//MAP
		startmap = clock();
		pmm.addToMap(pmm.con, argv);
		pmm.mergeSortMap(pmm.con, 0, pmm.con.size() - 1);
		pmm.it = pmm.con.begin();
		endmap = clock();
		timemap = (double)(endmap - startmap) / CLOCKS_PER_SEC;
		std::cout << "Time to process a range of " << pmm.con.size() << " elements with std::[ map ] : " << std::fixed << timemap << " us" << std::endl;
		// for (int i = 0; i < pmm.con.size(); i++)
		// 	std::cout << pmm.con[i] << " ";
		// while (pmm.it != pmm.con.end())
		// {
		// 	std::cout << pmm.it->second << " ";
		// 	pmm.it++;
		// }
		// std::cout << std::endl;
	}
	else
		std::cout << "Error" << std::endl;
	return 0;
}
