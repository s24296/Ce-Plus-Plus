#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    auto v=vector<int>();

    int n;
        cout<<"Ile liczb chcesz wpisaæ do tablicy?"<<endl;
        cin>>n;

    float rozmiar=n;
    for (int i=0; i<n; i++;)
    {
        cout<<v.at(i)<<endl;
    }

    float srednia = 0.0;
    for (int i=0; i<rozmiar;)
    {
        srednia=srednia+v.at(i);
    }
        srednia=srednia/size;
        cout<<"Srednia arytmetyczna podanych liczb wynosi: "<<srednia<<endl;


return 0;
}
