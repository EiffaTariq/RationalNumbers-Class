//#include<iostream>
//using namespace std;
//class Rational
//{
//	int numerator;
//	int denominator;
//public:
//	Rational()
//	{
//		numerator = 0;
//		denominator = 0;
//	}
//	Rational(int num, int den)
//	{
//		numerator = num;
//		denominator = den;
//	}
//	void setNumerator(int num)
//	{
//		if (num >= 0)
//		{
//			numerator = num;
//		}
//	}
//	const int getNumerator()
//	{
//		return numerator;
//	}
//	void setDenominator(int den)
//	{
//		if (den > 0)
//		{
//			denominator = den;
//		}
//	}
//	const int getDenominator()
//	{
//		return denominator;
//	}
//	int add(Rational &r)
//	{
//		int num = numerator * r.denominator+denominator*r.numerator;
//		int den = denominator * r.denominator;
//		Rational result(num, den);
//		result.reduce();
//	}
//	int multiply(Rational &r)
//	{
//		int num = numerator * r.numerator;
//		int den = denominator * r.denominator;
//		Rational result(num, den);
//		result.reduce();
//	}
//	int divide(Rational &r)
//	{
//		int ans = 0;
//		ans = GCD(r.numerator, r.denominator);
//		return ans;
//	}
//	void subtract(Rational& r)
//	{
//		int num = numerator * r.denominator - denominator * r.numerator;
//		int den = denominator * r.denominator;
//		Rational result(num, den);
//		result.reduce();
//	}
//	void reduce()
//	{
//		int common = GCD(numerator, denominator);
//		int num;
//		int den;
//		num = numerator / common;
//		den = denominator / common;
//		cout << "The number is now " << num << "/" << den;
//	}
//	int GCD(int g, int h)
//	{
//		while (h != 0)
//		{
//			int temp = h;
//			h = g % h;
//			g = temp;
//		}
//		return g;
//	}
//	void printInReducedForm(Rational& r)
//	{
//		int ans = 0;
//		ans = GCD(r.numerator, r.denominator);
//		cout << r.numerator / GCD(r.numerator, r.denominator) << "/" << r.denominator / GCD(r.numerator, r.denominator);
//	}
//	void print(Rational& r)
//	{
//		cout << "The numerator is " << r.numerator;
//		cout << "The denominator is " << r.denominator;
//	}
//};
//int main()
//{
//	int num;
//	cout << "Enter the numerator\n";
//	cin >> num;
//	int den;
//	cout << "Enter the denominator\n";
//	cin >> den;
//	Rational r;
//	r.setNumerator(num);
//	r.getNumerator();
//	r.setDenominator(den);
//	r.getDenominator();
//	r.subtract(r);
//	r.print(r);
//}