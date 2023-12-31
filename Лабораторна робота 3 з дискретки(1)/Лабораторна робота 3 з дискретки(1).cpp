﻿// Лабораторна робота 3 з дискретки.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream> 

using namespace std;

void answer_output(bool* f);
void logik_multiply(bool* x1, bool* x2, bool* f);
void logical_addit(bool* x1, bool* x2, bool* f);

int main()
{
	bool x1[16] = { 0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1 };
	bool x2[16] = { 0,0,0,0,1,1,1,1,0,0,0,0,1,1,1,1 };
	bool x3[16] = { 0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1 };
	bool x4[16] = { 0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1 };
	bool Ex1[16] = { 1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0 };
	bool Ex2[16] = { 1,1,1,1,0,0,0,0,1,1,1,1,0,0,0,0 };
	bool Ex3[16] = { 1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0 };
	bool Ex4[16] = { 1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0 };
	bool f1[16], f2[16], f3[16], Final_result[16];

	logik_multiply(x1, Ex2, f1);
	logik_multiply(Ex3, x4, f2);
	logik_multiply(f1, f2, f1);
	logik_multiply(Ex1, Ex2, f3);
	logik_multiply(Ex3, Ex4, Final_result);
	logik_multiply(f3, Final_result, f3);
	logical_addit(f1, f3, Final_result);

	answer_output(Final_result);
}

void answer_output(bool* f)
{
	cout << "final: " << endl;
	for (int i = 0; i < 16; i++)
	{
		cout << i + 1 << "\t| " << f[i] << endl;
	}
}

void logik_multiply(bool* x1, bool* x2, bool* f)
{
	for (int i = 0; i < 16; i++)
	{
		if (x1[i] == 1 && x2[i] == 1)f[i] = 1;
		else f[i] = 0;
	}
}
void logical_addit(bool* x1, bool* x2, bool* f)
{
	for (int i = 0; i < 16; i++)
	{
		if (x1[i] == 1 || x2[i] == 1)f[i] = 1;
		else f[i] = 0;
	}
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
