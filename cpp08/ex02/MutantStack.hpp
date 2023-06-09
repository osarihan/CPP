/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: MutantStack.hpp
  date: 2023-06-09T10:06:25.141Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include <stack>
#include <deque>
#include <iostream>

template<typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
public:
    typedef typename Container::iterator iterator;
    typedef typename Container::const_iterator const_iterator;

    iterator begin() {
        return std::stack<T, Container>::c.begin();
    }

    const_iterator begin() const {
        return std::stack<T, Container>::c.begin();
    }

    const_iterator cbegin() const {
        return std::stack<T, Container>::c.begin();
    }

    iterator end() {
        return std::stack<T, Container>::c.end();
    }

    const_iterator end() const {
        return std::stack<T, Container>::c.end();
    }

    const_iterator cend() const {
        return std::stack<T, Container>::c.end();
    }
};
