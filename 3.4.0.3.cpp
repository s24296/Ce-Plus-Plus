#include <iostream>

using namespace std;

void swap(int *wskaznik1, int *wskaznik2);

void swap(int *wskaznik1, int*wskaznik2)
{
	int wartosc1=*wskaznik1;
	int wartosc2=*wskaznik2;
	*wskaznik1=wartosc2;
	*wskaznik2=wartosc1;
}

int main()
{
	int *wskaznik1, *wskaznik2, a, b;
	a=1;
	b=2;
	wskaznik1=&a;
	wskaznik2=&b;
	cout<<"Wartosc a: "<<*wskaznik1<<endl;
	cout<<"Wartosc b: "<<*wskaznik2<<endl;
	swap(wskaznik1, wskaznik2);
	cout<<"---------------------------------------"<<endl;
	cout<<"Po zamianie wartosc a wynosi: "<<*wskaznik1<<endl;
	cout<<"Po zamianie wartosc b wynosi: "<<*wskaznik2<<endl;
	
return 0;	
}
