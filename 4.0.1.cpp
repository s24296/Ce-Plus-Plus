#include <iostream>
#include <string>

using namespace std;

enum Permission{x=1, y=2, z=4};
string getPermission(Permission);

string getPermission(Permission a)
{
	switch(a)
	{
		case x:
			return "Dzialanie 1.";
			break;
			
		case y:
			return "Dzialanie 2.";
			break;
			
		case z:
			return "Dzialanie 3.";
			break;
			
		case x|y:
			return "Dzialanie 1 i 2";
			break;
			
		case x|z:
			return "Dzialanie 1 i 3";
			break;
			
		case z|y:
			return "Dzialanie 2 i 3";
			break;
			
		case x|y|z:
			return "Wszystkie dzialania";
			break;
			
		default:
			return "Brak dzialania";
			break;
	}
}

int main()
{
	int user[10]={2, 3, 4, 1, 7, 0, 5, 2, 3};
	for(int i=0; i<=10; i++)
	{
		cout<<"Dozwolone dzialania: "<<getPermission(Permission(user[i]))<<endl;
	}

return 0;
}
