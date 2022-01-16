#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student
{
	string imie;
	string nazwisko;
	vector<int>oceny;
};

struct Grupa
{
	string nazwa;
	vector<Student>czlonkowie;
	
	grupa(string const& i)
	{
		nazwa=i;	
	}
};

void add_Student(Grupa& g, Student const& s)
{
	g.czlonkowie.push_back(s);
}

int main()
{
	Student pierwszy;
	pierwszy.imie="Jan";
	pierwszy.nazwisko="Kowalski";
	pierwszy.oceny.push_back(4);
	pierwszy.oceny.push_back(5);
	pierwszy.oceny.push_back(4);
	
	Student drugi;
	drugi.imie="Kowal";
	drugi.nazwisko="Janowski";
	drugi.oceny.push_back(2);
	drugi.oceny.push_back(3);
	drugi.oceny.push_back(3);
	
	Student trzeci;
	trzeci.imie="Maciej";
	trzeci.nazwisko="Piotrowicz";
	trzeci.oceny.push_back(5);
	trzeci.oceny.push_back(5);
	trzeci.oceny.push_back(5);
	
	Student czwarty;
	czwarty.imie="Piotr";
	czwarty.nazwisko="Maciejowicz";
	czwarty.oceny.push_back(4);
	czwarty.oceny.push_back(4);
	czwarty.oceny.push_back(5);
	
	auto grupa1=grupa("Grupa1");
	auto grupa2=grupa("Grupa2");
	
	add_Student(grupa1, piewszy);
	add_Student(grupa2, drugi);
	add_Student(grupa1, trzeci);
	
	cout<<"Czlonkowie grupy nr 1: "<<endl;
	for(auto i:grupa1.czlonkowie)
	{
		cout<<i.imie<<" "<<i.nazwisko<<endl;
	}

	cout<<"Czlonkowie grupy nr 2: "<<endl;
	for(auto i:grupa2.czlonkowie)
	{
		cout<<i.imie<<" "<<i.nazwisko<<endl;
	}

return 0;
}
