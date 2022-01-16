#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

void fpsort(void*tab, size_t n, void(*fp)(void* a)) -> void
{
	(fp)(tab);
	auto proxy=reinterpret_cast<char*>(tab);
	
	sort(proxy, proxy+1);
	
	cout<<"Sortowanie alfabetyczne: "<<endl;
	cout<<proxy;
}

int main()
{
	char tab[]="Programowanie";
	fpsort(tab, strlen(tab), funkcja);
	
return 0;	
}
