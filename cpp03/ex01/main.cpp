#include "ScavTrap.hpp"

/*
C++ dilinde, türetilmiş sınıfların oluşturulması ve yok edilmesi sırasında, önce temel sınıfın yapıcı (constructor) ve yıkıcı (destructor) fonksiyonları çağrılır. Bunun nedeni, türetilmiş sınıfın özelliklerinin temel sınıfın özelliklerine dayanmasıdır. Dolayısıyla, önce temel sınıfın yapıcı fonksiyonu çağrılarak temel sınıfın özellikleri tanımlanır, ardından türetilmiş sınıfın yapıcı fonksiyonu çağrılarak türetilmiş sınıfın özellikleri tanımlanır.

Ancak, nesne ömrü sona erdiğinde (bir nesne bellekten serbest bırakıldığında) yıkıcı fonksiyonların çağrılması sırasında işler biraz farklıdır. C++ dilinde, yıkıcı fonksiyonlar türetilmiş sınıftan başlayarak çağrılır ve ardından temel sınıfın yıkıcı fonksiyonu çağrılır. Bu sıra, nesnenin bellekten serbest bırakılması sırasında, türetilmiş sınıfın özelliklerinin önce yok edilmesi ve ardından temel sınıfın özelliklerinin yok edilmesi gerektiği gerçeğinden kaynaklanır.

Bu nedenle, nesne ömrü boyunca, türetilmiş sınıfın yapıcı fonksiyonu çağrıldıktan sonra, bellekten serbest bırakıldığında önce temel sınıfın yıkıcı fonksiyonu çağrılır ve ardından türetilmiş sınıfın yıkıcı fonksiyonu çağrılır. Bu şekilde, bellek sızıntıları önlenir ve bellek yönetimi doğru şekilde yapılır.
*/

int	main()
{
	ScavTrap a;
	ScavTrap b("ouz");
	ScavTrap c(b);
	ScavTrap d("ey");

	a = d;

	std::cout << "Hp: " << a.getHp() << " Ep: " << a.getEp() << " Ad: " << a.getAd() << " Name: " << a.getName() << std::endl;
	std::cout << "Hp: " << b.getHp() << " Ep: " << b.getEp() << " Ad: " << b.getAd() << " Name: " << b.getName() << std::endl;
	std::cout << "Hp: " << c.getHp() << " Ep: " << c.getEp() << " Ad: " << c.getAd() << " Name: " << c.getName() << std::endl;
	std::cout << "Hp: " << d.getHp() << " Ep: " << d.getEp() << " Ad: " << d.getAd() << " Name: " << d.getName() << std::endl;
	return 0;
}