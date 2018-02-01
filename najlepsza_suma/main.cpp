#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int x;
    srand(time(NULL));
    cout << "Podaj wielkosc ciagu: ";
    cin >> x;
    int T[x];
    for(int i=0; i<x; i++)
    {
        T[i]=rand()%101-50;
        cout<< T[i]<<", ";
    }
    int maks=T[0];
    int suma;
    for(int i=0;i<x; i++)
    {
        suma=T[i];
        if(suma>maks)
        {
            maks=suma;
        }
        for(int j=i+1;j<x; j++)
        {
            suma=suma+T[j];
            if(suma>maks)
            {
                maks=suma;
            }
        }

    }
    cout<<endl<<"Najlepsza suma: "<<maks;

    return 0;
}
