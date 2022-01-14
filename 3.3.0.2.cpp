#include <iostream>
#include <cmath>

using namespace std;

int wybor;
int n;
int main()
{
    cout<<"Program do liczenia pojemnosci stozka scietego"<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"Co chcesz zrobic?"<<endl;
    cout<<"1. Obliczyc pojemnosc stozka scietego"<<endl;
    cout<<"2. Wyjscie"<<endl;
    cin>>wybor;

    do
    {
    switch(wybor)
    {
    case 1:
        int r, R, h, v, n;
        cout<<"Podaj promien dolnej podstawy: "<<endl;
        cin>>R;
        cout<<"Podaj promieñ gornej podstawy: "<<endl;
        cin>>r;
        cout<<"Podaj wysokosc stozka: "<<endl;
        cin>>h;
        v=((3,14/3)*h)*((R*R)+(R*r)+(r*r));
        cout<<"Objetosc wynosi: "<< v <<endl;
        cin>>n;
        break;

    }
    }while(n!=1);

 return 0;
}
