#include <iostream>
#include <random>
#include <ctime>

using namespace std;

void funkcja(int const);
void call_with_random_int(void(*fp)(int const));

void funkcja(int const a)
{
	cout<<"Funkcja: "<<a<<endl;
}

void call_with_random_int (void(*fp)(int const))
{
	srand((int)time(0));
	int n
	n=(rand()%100)+1;
	(fp)(n);
}

int main()
{
	auto fp=&funkcja;
	call_with_random_int(funkcja);
}
