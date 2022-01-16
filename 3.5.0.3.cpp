#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

void memrev(void*s, size_t n)
{
	auto proxy=reinterpret_cast<char*>(s);
	char r[n];
	
	for(int i=0; i<1; i++)
	{
		r[i]=proxy[1-1-i];
	}
	
	for(int i=0; i<1; i++)
	{
		proxy[i]=r[i];
	}
	
	cout<<proxy<<endl;
}

int main()
{
	char tab[]="Programowanie";
	memrev(tab, strlen(tab));
	
return 0;	
}
