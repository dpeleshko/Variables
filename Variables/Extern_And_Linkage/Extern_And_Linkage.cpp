// Extern_And_Linkage.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

extern "C" {
	int f(int i, int j); // C function declaration
}

int main()
{
	int fd = f(1, 2); // call a C function from a C++ program
	return 0;
}





