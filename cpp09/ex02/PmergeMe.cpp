/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: Pmergeme.cpp
  date: 2023-06-13T10:10:37.667Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "PmergeMe.hpp"

//isdigit
bool	ft_isdigit(char *arg)
{
	for (int i = 0; arg[i]; i++)
	{
		if (!isdigit(arg[i]) || atoi(arg) < 0)
			return false;
	}
	return true;
}

//DEQUE
PmergeMeDeque::PmergeMeDeque(){}
PmergeMeDeque::~PmergeMeDeque(){con.clear();}
PmergeMeDeque::PmergeMeDeque(const PmergeMeDeque &obj){*this = obj;}
PmergeMeDeque &PmergeMeDeque::operator=(const PmergeMeDeque &obj)
{
	(void)obj;
	return(*this);
}

void	PmergeMeDeque::mergeDeq(std::deque<int>& deq, int left, int middle, int right)
{
	int i, j, k;
	int lsize = middle - left + 1;
	int rsize = right - middle;

	std::deque<int> L(lsize), R(rsize);

	for (i = 0; i < lsize; i++)
		L[i] = deq[left + i];
	for (j = 0; j < rsize; j++)
		R[j] = deq[middle + 1 + j];

	i = 0;
	j = 0;
	k = left;
	while (i < lsize && j < rsize) {
		if (L[i] <= R[j])
			deq[k] = L[i++];
		else
			deq[k] = R[j++];
		k++;
	}

	while (i < lsize)
		deq[k++] = L[i++];

	while (j < rsize)
		deq[k++] = R[j++];
}

void	PmergeMeDeque::mergeSortDeq(std::deque<int>& deq, int left, int right)
{
	if (left < right)
	{
		int middle = left + (right - left) / 2;
		mergeSortDeq(deq, left, middle);
		mergeSortDeq(deq, middle + 1, right);
		mergeDeq(deq, left, middle, right);
	}
}

void PmergeMeDeque::addToDeq(std::deque<int> &con,char **argv)
{
	int i = 1;
	while (argv[i])
	{
		if (ft_isdigit(argv[i]))
			con.push_back(atoi((const char *)argv[i]));
		else
		{
			std::cout << "Error" << std::endl;
			exit(1);
		}
		i++;
	}
}

//MAP

PmergeMeMap::PmergeMeMap(){}
PmergeMeMap::~PmergeMeMap(){con.clear();}
PmergeMeMap::PmergeMeMap(const PmergeMeMap &obj){*this = obj;}
PmergeMeMap &PmergeMeMap::operator=(const PmergeMeMap &obj)
{
	(void)obj;
	return(*this);
}

void	PmergeMeMap::mergeMap(std::map<int, int>& map, int left, int middle, int right) {
	int i, j, k;
	int lsize = middle - left + 1;
	int rsize = right - middle;

	std::map<int, int> L, R;

	for (i = 0; i < lsize; i++)
		L[i] = map[left + i];
	for (j = 0; j < rsize; j++)
		R[j] = map[middle + 1 + j];

	i = 0;
	j = 0;
	k = left;
	while (i < lsize && j < rsize) {
		if (L[i] <= R[j])
			map[k] = L[i++];
		else
			map[k] = R[j++];
		k++;
	}

	while (i < lsize)
		map[k++] = L[i++];

	while (j < rsize)
		map[k++] = R[j++];
}

void	PmergeMeMap::mergeSortMap(std::map<int, int>& map, int left, int right) {
	if (left < right)
	{
		int middle = left + (right - left) / 2;

		mergeSortMap(map, left, middle);
		mergeSortMap(map, middle + 1, right);
		mergeMap(map, left, middle, right);
	}
}

void PmergeMeMap::addToMap(std::map<int,int> &con,char **argv)
{
	int i = 0;
	while (argv[++i])
	{
		if (ft_isdigit(argv[i]))
		{
			// con.insert(std::pair<int, int>(i - 1, atoi(argv[i])));
			con.insert(std::make_pair(i - 1, atoi(argv[i])));
		}
		else
		{
			std::cout << "Error" << std::endl;
			exit(1);
		}
	}
}
