#include<iostream>
#include<ctime>
#include<cstdlib>
#include<algorithm>

template <typename T>
void my_swap(T num1,T num2) {
	T tmp = num1;
	num1 = num2;
	num2 = tmp;
}


template <typename T>
void p_swap(T *pnum1, T *pnum2) {
	T tmp = *pnum1;
	*pnum1 = *pnum2;
	*pnum2 = tmp;
}

namespace ddd {
	int num99 = 999;

}
int main() {
	setlocale(LC_ALL, "rus");
	int n,m;


	// Указатели на переменные
	/*
	n = 10;
	m = 20;
	std::cout << "n = " << n << std::endl;
	
	std::cout << "*n = " << &n << std::endl;//& получение адреса объекта
	
	
	int *pn = &n;// создание указателя, направленного на переменную n
	
	std::cout << "pn = " << pn << std::endl;//вувод адреса из указателя
	
	std::cout << "*pn = " << *pn << std::endl;//вывод n через разиминование pn

	*pn = 15;

	std::cout << "Новая n = " << n << std::endl;

	pn = &m;// перенаправление указателя на адрес переменной m

	std::cout << "m = " << m << std::endl;

	std::cout << "&m = " << &m << std::endl;

	std::cout << "pn = " << pn << std::endl;

	std::cout << "*pn = " << *pn << std::endl;

	int *pm = &m;

	std::cout << "pm = " << pm << std::endl;
	*/

	// Указатели и массивы
	/*
	const int size = 5;
	int arr[size]{5,4,3,2,44};
	int *pa2 = &arr[2];
	std::cout << "*pa2 = " << *pa2 << std::endl;
	pa2++;
	std::cout << "*pa2 = " << *pa2 << std::endl;
	pa2 -= 2;
	std::cout << "*pa2 = " << *pa2 << std::endl;
	
	//int  *pa0 = &arr[0];
	//std::cout << "*pa0 = " << *pa0 << std::endl;

	pa2 = &arr[0];
	std::cout << "Array: \n";
	for (int i = 0; i < size; i++)
		std::cout << *(pa2 + i) << ' ';
	std::cout << std::endl;
	//int a = 0;
	//int* pp = &a;
	std::cout << "arr = " << arr << std::endl;
	std::cout << "arr+1 = " << arr+1 << std::endl;
	//arr++; //Error!
	//for (int i = 0; i < size; i++,pp++)
		//std::cout << *pa2+*pp++  << ' ';
		*/

	// Указатели и функции
	n = 7;
	m = 15;
	std::cout << n << ' ' << m << std::endl;
	//my_swap(n, m);// не работает т.к. параметры это копии
	p_swap(&n, &m);
	std::cout << n << ' ' << m << std::endl;

	ddd::num99=10;
	int num99 = 5;
	std::cout << ddd::num99;
	

	return 0;
}