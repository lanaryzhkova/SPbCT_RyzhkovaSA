// MathFuncsDll.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "pch.h"
#include "MathFuncsDll.h"
#include <stdexcept>
#include <math.h>
using namespace std;
namespace MathFuncs
{
	int i;
	double MyMathFuncs::Add(double a, double b)
	{
		return a + b;
	}
	double MyMathFuncs::Subtract(double a, double b)
	{
		return a - b;
	}
	double MyMathFuncs::Multiply(double a, double b)
	{
		return a * b;
	}
	double MyMathFuncs::Divide(double a, double b)
	{
		if (b == 0)
		{
			throw invalid_argument("b cannot be zero!");
		}
		return a / b;
	}
	double MyMathFuncs::Pow(double a, double b)
	{
		if (b == 0.5)
		{
			a = sqrt(a);
			return a;
		}

		for (int i = 0; i < b - 1; i++)
			a *= a;
		if (b == 0)
			return 1;
		else
			return a;
	}
	}


