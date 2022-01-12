#include <iostream>

using namespace std;

int wybor;

int main()
{
	int n1, n2, n3, n4;
	cout<<"Jakie dzialanie chcesz wykonac?"<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<"1. Pole trojkata"<<endl;
	cout<<"2. Pole prostokata"<<endl;
	cout<<"3. Pole kola"<<endl;
	cout<<"4. Pole trapezu"<<endl;
	cout<<"5. Pole szesciokata foremnego"<<endl;
	cout<<"6: Wyjscie"<<endl;
	cin>>wybor;	
	
	switch(wybor)
	{
		case 1:                       
			int q, w, e;
			cout<<"Wpisz podstawe: "<<endl;
			cin>>q;
			cout<<"Wpisz wysokosc: "<<endl;
			cin>>w;
			e=q*w*0.5;
			cout<<"Pole trojkata wynosi: "<< e <<endl;
			exit (0);
			break;
		
		case 2:                                          
			int r, t, y;
			cout<<"Wpisz bok a: "<<endl;
			cin>>r;
			cout<<"Wpisz bok b: "<<endl;
			cin>>t;
			y=r*t;
			cout<<"Pole kwadratu wynosi: "<< y <<endl;
			break;
			
		case 3:
			int u, i;
			cout<<"Wpisz promien kola: "<<endl;
			cin>>u;
			i=3.14*u*u;
			cout<<"Pole kola wynosi: "<< i <<endl;
			break;
		
		case 4:		
			int o, p, a, s;
			cout<<"Wpisz bok a: "<<endl;
			cin>>o;
			cout<<"Wpisz bok b: "<<endl;
			cin>>p;
			cout<<"Wpisz wysokosc: "<<endl;
			cin>>a;
			s=((o+p)*a)/2;
			cout<<"Pole trapezu wynosi: "<< s <<endl;
			break;
		
		case 5:
			int d, f;
			cout<<"Wpisz bok: "<<endl;
			cin>>d;
			f=6*d*d;
			cout<<"Pole szesciokata foremnego wynosi: "<< f <<endl;
			break;		
	
	}
	
	
return 0;	
}
