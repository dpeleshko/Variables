// Extern_Example.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>
int main()
{
	extern int i; i++;
	// extern int j = 2;    - помилка 
	// спроба проініціалізувати зовнішню змінну
	std::cout << "i = " << i;
	return 0;
}
int i = 5;

