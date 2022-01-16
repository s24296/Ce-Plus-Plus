#include <iostream>

using namespace std;

enum sport{plywanie=1, kolarstwo, bieganie};

int main()
{
int triathlon=2;

switch(triathlon)
{
	case plywanie|kolarstwo|bieganie:
		cout<<"TRIATHLON"<<endl;
		break;
}

return 0;
}
