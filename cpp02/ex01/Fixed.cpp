/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: Fixed.cpp
  date: 2023-03-15T14:57:08.345Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

/*
Elbette, bir örnekle bu işlemi adım adım gösterelim. Diyelim ki elimizde 5 sayısı var ve bu sayıyı Q3.4 sabit noktalı formata dönüştürmek istiyoruz. Bu durumda, bu sayıyı öncelikle binary formata dönüştürmeliyiz. 5 sayısının binary gösterimi 101'dir.

İlk olarak, sabit noktanın pozisyonunu belirleyelim. Q3.4 sabit noktalı formatta, 3 bit virgülden önce, 4 bit ise virgülden sonra gelecek şekilde sabit nokta pozisyonu belirlenmiştir.

Şimdi, tamsayı değerimizi sol tarafa doğru, sabit nokta pozisyonu kadar kaydıralım. Yani, 101 değerini <<3 işlemiyle (3 bit sola kaydırma) 101000 şekline getirelim.

Bu sayı artık Q3.4 sabit noktalı formatta değildir, çünkü virgülden sonra 4 bit yerine 7 bit var. Bu nedenle, son 3 biti virgülden sonraya kaydırmamız gerekiyor. Bu işlemi yapmak için, sabit noktadan sonra gelen ilk 4 biti ve son 3 biti iki ayrı parça olarak ele alacağız.

İlk olarak, sabit noktadan önceki 3 bit 101000 sayısının en solundaki üç biti olduğu için, bu üç biti ayrı ayrı yazalım: 101

İkinci olarak, sabit noktadan sonra gelen son 4 bit ise 0000'dır. Bu 4 biti de ayrı ayrı yazalım: 000

Şimdi, bu iki parçayı birleştirerek, 101.0000 şeklinde bir sayı elde ederiz.

Bu sayı Q3.4 sabit noktalı formatta olduğu için, sayının en soldaki 3 biti virgülden önceki kısımı, sonraki 4 biti ise virgülden sonraki kısmı temsil eder.

Son olarak, bu sayıyı decimal değere çevirerek orijinal sayımız olan 5'e yaklaştırabiliriz. 101.0000 sayısının decimal değeri, (1x2^2) + (0x2^1) + (1x2^0) + (0x2^-1) + (0x2^-2) + (0x2^-3) + (0x2^-4) = 4.5'tir.

Böylece, 5 sayısını Q3.4 sabit noktalı formata dönüştürmek için gereken adımları tamamlamış olduk.
*/

#include "Fixed.hpp"

//DEF CONST
Fixed::Fixed(void){
	std::cout << "Default constructor called" << std::endl;
    this->fixed_point = 0;
}
//takes an integer and converts it to a fixed-point value.
Fixed::Fixed(const int value){
	std::cout << "Int constructor called" << std::endl;
    this->fixed_point = (value << 8);
    //std::cout << this->fixed_point << std::endl;
}

//COPY ASS OP
Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
    fixed_point = other.getRawBits();
    return *this;
}

//Copy Constructor
Fixed::Fixed(const Fixed &obj) {
	std::cout << "copy constructor called" << std::endl;
	*this = obj;
}

// DEF DES
Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const float number){
    this->fixed_point = (int)roundf(number * (1 << frac_bits));
	std::cout << "Float constructor called" << std::endl;
    //std::cout << this->fixed_point << std::endl;
}

std::ostream  &operator<<(std::ostream &out, const Fixed& obj){
    out << obj.toFloat();
    return (out);
}

/*
    roundf() fonksiyonu, aldığı parametre olarak float veya double tipinde bir sayı bekler ve bu sayıyı ondalık sayı olarak işlem yapar. 
Fixed-point sayıları int32_t, int16_t, int8_t vb. tam sayı türleri olarak temsil ederken, 
sabit noktanın konumunu dağıtabileceği için roundf() fonksiyonuna doğrudan bir fixed-point sayı göndermek uygun değildir.

    Qm.n formatında bir fixed-point sayı, genellikle tam sayı tipinde bir değişken içinde saklanır ve roundf() fonksiyonuna göndermeden önce, 
sabit noktadan önceki bit sayısı ve sabit noktadan sonra kaç bitin ondalık kısmı olduğu bilgisi kullanılarak, uygun şekilde ölçeklendirilir. 
Örneğin, bir Q8.8 formatında bir sayı, int16_t tipinde bir değişkende saklanabilir ve roundf() fonksiyonuna göndermeden önce, 
sağ taraftaki 8 bit (ondalık kısım) 2^8 = 256'ya bölünerek ondalık kısmın hassasiyeti elde edilebilir. 
Daha sonra, bu ölçeklendirilmiş sayı, float türüne dönüştürülerek roundf() fonksiyonuna gönderilebilir.
*/
float Fixed::toFloat(void) const{
    return((float)this->fixed_point / (256));
}

//
int Fixed::toInt(void) const{
    return ((int)roundf((float)this->fixed_point / (256)));
}

int Fixed::getRawBits() const{
	//std::cout << "member funtion called" << std::endl;
	return (this->fixed_point);
}

void Fixed::setRawBits(int const raw){
	this->fixed_point = raw;
}
