#include <iostream>

using namespace std;

double fSum(double(*f)(double),int n, int m);
double funkcja(double a);

double fSum(double(*f)(double), int n, int m)
{
	float suma=0.0;
	for(int i=n; i<=m; i++)
	{
		suma+=f(i);
	}

return suma;
}

double funkcja(double a)
{
	return a*2;
}

int main()
{
	auto f=&funkcja;
	cout<<fSum(funkcja, 1, 5);
	
	
return 0;	
}
