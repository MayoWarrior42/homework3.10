// homework3.10.1.cpp: определяет точку входа для приложения.
//

#include "homework3.10.1.h"



int main()
{
	system("chcp 1251");
	std::string name;
	std::cout << "Введите имя: ";
	std::cin >> name;
	std::cout << "\nЗдравствуйте, " << name << std::endl;
	system("pause");
	return 0;
}
