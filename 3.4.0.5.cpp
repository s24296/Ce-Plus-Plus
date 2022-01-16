#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int copyTableToVector(int tab[100][8], int indeks);

int copyTableToVector(int tab[100][8], int indeks)
{
	int reszta;
	vector<int>wektor;
	reszta=indeks%3;
	
	if(reszta==0)
	{
		reszta=5;
	}
	
	for(int j=0; j<8; j++)
	{
		int a=tab[reszta-1][j];
		wektor.push_back(a);
	}

	int *wskaznik;
	wskaznik=&wektor.back();
	int w=*wskaznik;
	return w;

}

int main()
{
	int tablica[100][8];
	int indeks;
	
	for(int i=0; i<100; i++)
	{
		for(int j=0; j<8; j++)
		{
			tablica[i][j]=rand()%9+1;
			cout<<tablica[i][j]<<endl;
		}				
	}

	cout<<"Prosze podac indeks: "<<endl;
	cin>>indeks;
	cout<<"Zwrot: "<<copyTableToVector(tablica, indeks);
	
	
return 0;
}
