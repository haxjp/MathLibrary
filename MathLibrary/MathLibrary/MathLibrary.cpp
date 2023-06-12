// MathLibrary.cpp : Defines the exported functions for the DLL.
#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include <utility>
#include <limits.h>
#include <iostream>
#include "MathLibrary.h"

int term1, term2;

extern "C" MATHLIBRARY_API int addition() {
	std::cout << "term1:";
	std::cin >> term1;
	std::cout << "term2:";
	std::cin >> term2;
	return term1 + term2;
}
extern "C" MATHLIBRARY_API int subtraction() {
	std::cout << "term1:";
	std::cin >> term1;
	std::cout << "term2:";
	std::cin >> term2;
	return term1 - term2;
}
extern "C" MATHLIBRARY_API int multiplication() {
	std::cout << "term1:";
	std::cin >> term1;
	std::cout << "term2:";
	std::cin >> term2;
	return term1 * term2;
}
extern "C" MATHLIBRARY_API int division() {
	std::cout << "term1:";
	std::cin >> term1;
	std::cout << "term2:";
	std::cin >> term2;
	return term1 / term2;
}