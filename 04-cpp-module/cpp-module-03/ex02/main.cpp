#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	std::string s1 = "sshin";
	std::string s2 = "cadet";
	std::string s3 = "marvin";

	FragTrap t1(s1);
	ScavTrap t2(s2);
	ClapTrap t3(s3);

	std::cout << std::endl;
	t1.hiFivesGuys();
	std::cout << std::endl;

	std::cout << std::endl;
	t2.guardGate();
	std::cout << std::endl;

	std::cout << std::endl;
	t3.attack(s1);
	t1.takeDamage(50);
	t3.attack(s2);
	t2.takeDamage(30);
	std::cout << std::endl;

	std::cout << std::endl;
	t1.attack(s2);
	t2.takeDamage(t1.getAD());
	t1.attack(s3);
	t3.takeDamage(t1.getAD() * 2);
	std::cout << std::endl;

	std::cout << std::endl;
	t3.beRepaired(t3.getHP());
	std::cout << std::endl;

	t1.print_status(std::cout);
	t2.print_status(std::cout);
	t3.print_status(std::cout);
	return (0);
}
