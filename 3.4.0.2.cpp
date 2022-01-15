#include <iostream>
#include <string>

using namespace std;

void print(string *wskaznik)
{
	cout<<&*wskaznik<<" = "<<*wskaznik<<endl;
}

int main()
{
	string zmienna="Hello World!";
	string*wskaznik;
	wskaznik=&zmienna;
	
	print(wskaznik);
	
return 0;	
}
