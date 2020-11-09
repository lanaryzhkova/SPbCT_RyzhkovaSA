#include "pch.h"
#include <iostream>
#include "MathFuncsDll.h"
#include <math.h>
#include <locale.h>

using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	double a, b,p,c,s1, s2;
	cout << "Введите диагонали ромба:"<<endl;
	cin >> a;
	cin >> b;
	s1= MathFuncs::MyMathFuncs::Multiply(a,a);
	s2=MathFuncs::MyMathFuncs::Multiply(b,b);
	c= MathFuncs::MyMathFuncs::Add(s1, s2);
	c= MathFuncs::MyMathFuncs::Pow (c, 0.5);
	cout<< "Периметр ромба = "<<MathFuncs::MyMathFuncs::Multiply (2, c)<<endl;
	a = MathFuncs::MyMathFuncs::Multiply(a,b);
	cout << "Площадь ромба = " << MathFuncs::MyMathFuncs::Divide(a, 2);


	return 0;
}