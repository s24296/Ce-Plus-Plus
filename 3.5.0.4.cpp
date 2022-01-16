#include <iostream>
#include <string>

using namespace std;

auto print_int(void* a)
{
	auto proxy=reinterpret_cast<int*>(a);
	
	for(int i=0; i<4; i++)
	{
		cout<<proxy[i]<<endl;
	}
}

auto print_str(void* a)
{
	auto proxy=reinterpret_cast<string*>(a);
	
	for(int i=0; i<4; i++)
	{
		cout<<proxy[i]<<endl;
	}
}

auto fpprint(void*a, void(*fp)(void*a))
{
	(fp)(a);
}

int main()
{
	int tabint[4]={0, 10, 20, 30};
	string tabstr[4]={str1, str2, str3, str4};
	
	fpprint(tabint, print_int);
	fpprint(tabstr, print_str);
	
return 0;
}
