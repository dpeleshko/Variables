// Extern_Example.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <iostream>
int main()
{
	extern int i; i++;
	// extern int j = 2;    - ������� 
	// ������ �������������� ������� �����
	std::cout << "i = " << i;
	return 0;
}
int i = 5;

