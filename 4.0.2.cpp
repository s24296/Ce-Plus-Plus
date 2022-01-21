#include <iostream>

using namespace std;

enum sport{plywanie=1, kolarstwo, bieganie, wrestling, sumo, skok_w_dal, rzut_oszczepem, lucznictwo};

int main()
{
int triathlon=7;

switch(triathlon)
{
	case plywanie|kolarstwo|bieganie:
		cout<<"TRIATHLON"<<endl;
		break;
}

return 0;
}
