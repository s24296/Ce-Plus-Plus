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
	Student best;
	
	for(auto i=0; i<x.size(); i++)
	{
		a=average_of(x.at(i));
		if(best<=a)
		{
			best=a;
		}
	}

	for(auto i=0; i<x.size(); i++)
	{
		if(best==average_of(x.at(i)))
		break;
	}	
}

int main()
{
	Student 1;
	p.imie="Jan";
	p.nazwisko="Kowalski";
	p.oceny.push_back(4);
	p.oceny.push_back(4);
	p.oceny.push_back(5);
	
	Student 2;
	p.imie="Kowal";
	p.nazwisko="Janowski";
	p.oceny.push_back(3);
	p.oceny.push_back(4);
	p.oceny.push_back(5);
	
	Student 3;
	p.imie="Maciej";
	p.nazwisko="Piotrowicz";
	p.oceny.push_back(5);
	p.oceny.push_back(5);
	p.oceny.push_back(5);
	
	vector<Student>studenci;
	studenci.push_back(1);
	studenci.push_back(2);
	studenci.push_back(3);
	
	cout<<average_of(1)<<endl;
	cout<<average_of(1)<<endl;
	cout<<average_of(1)<<endl;
	cout<<"Najlepszy student: "<<get_best_Student(studenci).imie<<endl;
	
return 0;	
}
