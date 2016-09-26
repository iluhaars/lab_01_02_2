#include <stdio.h>
#include <Windows.h>
#include <locale.h>
#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	s1.kol();
	/*s1.zapis();
	s1.show();*/
	s1.zapis1();
	s1.show1();
	s2.vvod();
	s2.sravn();
	system("pause");
	return 0;
}