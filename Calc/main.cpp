#include <iostream>
#include <Windows.h>
//#include "Calc.h"
typedef int (*AddImpl)(int, int);
//#define DllImport   __declspec( dllimport )

int main()
{
	HMODULE lib = LoadLibraryA("C:\\Users\\user\\source\\repos\\Calc\\Debug\\CalcDynamic.dll");
	AddImpl add = reinterpret_cast<AddImpl> (GetProcAddress(lib, "Add"));
	std::cout << add(10, 20);
}