#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

void funkcja(void* ta)
{
	auto proxy=reinterpret_cast<char*>(ta);
	cout<<"Przed sortowaniem: "<<endl;
	cout<<proxy;
}

auto fpsort(void* tab, size_t l, void(*fp)(void*ta)) -> void
{
	(fp)(tab);
	auto proxy=reinterpret_cast<char*>(tab);
	sort(proxy)=reinterpret_cast<char*>(tab);
	
	cout<<"Po sortowaniu: "<<endl;
	cout<<proxy;
}

int main()
{
	char tab[]="Programowanie";
	fpsort(tab, strlen(tab), funkcja);
	
return 0;
}
