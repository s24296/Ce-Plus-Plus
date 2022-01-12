#include <iostream>

using namespace std;

int main()
{
	
	cout<<"--------------------"<<endl;
	
	int size = 5;
	
	for(int i=1; i<size; i++)
	{
		if(i%2!=0)
		{
			cout<<"I***   ***   ***   I"<<endl;
			cout<<"I***   ***   ***   I"<<endl;
		}
		else
		{
			cout<<"I   ***   ***   ***I"<<endl;
			cout<<"I   ***   ***   ***I"<<endl;
		}
	
	}
	
	cout<<"--------------------"<<endl;
	
	return 0;
}
