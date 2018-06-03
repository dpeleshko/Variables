// TypeTraits.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <type_traits>

#include <iostream>

using namespace std;
struct A {};
struct B {
	int f2;
	char c;
};

struct alignas(128) Empty128 {};

int main() {
	std::cout << "size of A class: " << sizeof(A)
		<< '\n' << "size of pointer : " << sizeof(int*)
		<< '\n' << "size of char : " << sizeof(char)
		<< '\n' << "size of short : " << sizeof(short)
		<< '\n' << "size of B : " << sizeof(B)
		<< '\n' << "size of Empty128 : " << sizeof(Empty128) << '\n';

	//td::cout << std::alignment_of<A>::value << '\n';
	//std::cout << std::alignment_of<int>() << '\n'; // alt syntax
	//std::cout << std::alignment_of_v<double> << '\n'; // c++17 alt syntax

	std::cout << "alignment of A class: " << alignment_of<A>::value
		<< '\n' << "alignment of pointer : " << alignment_of<int*>()
		<< '\n' << "alignment of char : " << alignment_of<char>()
		<< '\n' << "alignment of short : "
		<< alignment_of<short>() << '\n' << "alignment of B : "
		<< alignment_of<B>() << '\n' << "alignment of Empty128 : " << alignment_of<Empty128>() << '\n';
	system("pause");
	return 0;
}
