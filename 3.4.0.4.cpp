#include <iostream>

using namespace std;

void cone(float &r, float &h)
{
	r=(3.14*r*r);
	h=((r/3)*h);
}

int main()
{
	float r, h;
	cout<<"Promien stozka: "<<endl;
	cin>>r;
	cout<<"Wysokosc stozka: "<<endl;
	cin>>h;
	
	cone(r, h);
	cout<<"Pole podstawy wynosi: "<<r<<endl;
	cout<<"Objetosc stozka wynosi: "<<h<<endl;
	
return 0;	
}
