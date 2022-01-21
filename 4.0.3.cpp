#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Student
{
	string imie;
	string nazwisko;
	vector<int>oceny;
};

int average_of(Student x)
{
	int sum=0;
	int ile=x.oceny.size();
	
	for(auto i=0; i<ile; i++)
	{
		x.oceny.at(i);
		sum=sum+x.oceny.at(i);
	}
	
	return sum/ile;
}

Student get_best_Student(vector<Student>const&x)
{
	int a;
	int best;
	Student be;
	
	for(auto i=0; i<x.size(); i++)
	{
		a=average_of(x.at(i));
		if(be<=a)
		{
			be=a;
		}
	}

	for(auto i=0; i<x.size(); i++)
	{
		if(best==average_of(x.at(i)))
		{
			be=x.at(i);
			break;
		}
		
	}	
return be;
}

int main()
{
	Student pie;
	p.imie="Jan";
	p.nazwisko="Kowalski";
	p.oceny.push_back(4);
	p.oceny.push_back(4);
	p.oceny.push_back(5);
	
	Student dru;
	p.imie="Kowal";
	p.nazwisko="Janowski";
	p.oceny.push_back(3);
	p.oceny.push_back(4);
	p.oceny.push_back(5);
	
	Student trz;
	p.imie="Maciej";
	p.nazwisko="Piotrowicz";
	p.oceny.push_back(5);
	p.oceny.push_back(5);
	p.oceny.push_back(5);
	
	vector<Student>studenci;
	studenci.push_back(1);
	studenci.push_back(2);
	studenci.push_back(3);
	
	cout<<average_of(pie)<<endl;
	cout<<average_of(dru)<<endl;
	cout<<average_of(trz)<<endl;
	cout<<"Najlepszy student: "<<get_best_Student(studenci).imie<<endl;
	
return 0;	
}
