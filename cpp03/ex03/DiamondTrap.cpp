/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: DiamondTrap.cpp
  date: 2023-04-07T00:43:19.655Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "DiamondTrap.hpp"

//Do you know the -Wshadow and -Wno-shadow compiler flags?
/*
Evet, tabii ki Türkçe olarak da yazabilirim.

-Wshadow ve -Wno-shadow derleyici bayraklarını biliyorum.

-Wshadow bayrağı, GCC ve Clang derleyicileri için bir uyarı seçeneğidir. Bu bayrak, bir değişken bildiriminin üst öğe kapsamında başka bir değişkeni gölgelendirdiği durumlarda bir uyarı üretir. Gölgeleme, iç kapsamda bildirilen bir değişkenin, dış kapsamda bildirilen bir değişkenle aynı isme sahip olması ve iç değişkenin o iç kapsamda dış değişkeni "gizlemesi" durumunda meydana gelir. Bu, ince hatalara yol açabilir ve kodun okunması ve bakımı daha zor hale getirebilir.

-Wno-shadow bayrağı ise -Wshadow uyarısını devre dışı bırakmak için kullanılır.

Örneğin, aşağıdaki kodu ele alalım:

int x = 1;

int main() {
    int x = 2;
    printf("%d\n", x);
    return 0;
}
Bu kodda iç değişken x, dış değişken x'i gölgeler. -Wshadow bayrağıyla derlendiğinde derleyici bir uyarı üretir:

warning: declaration of 'x' shadows a global declaration [-Wshadow]

Bu uyarı, -Wno-shadow bayrağı ile devre dışı bırakılabilir.
*/

DiamondTrap::DiamondTrap(){
   	std::cout << "DiamontTrap default constructor called" << std::endl; 
}

DiamondTrap::DiamondTrap(std::string name){
   	std::cout << "DiamontTrap constructor called" << std::endl; 
}

DiamondTrap::DiamondTrap(DiamondTrap& obj){
   	std::cout << "DiamontTrap constructor called" << std::endl;
    *this = obj;
}