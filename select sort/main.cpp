#include <iostream>

using namespace std;

void sortuj (double T[], int n)
{
    int k;
    double pom;
    for(int i=0; i<n-1; i++)
    {
        k=i;
        for(int j=i+1; j<n; j++)
            if(T[j]<T[k])
                swap(T[j], T[k]);
    }
}
void wyswietl(double T[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << T[i]<<", ";
    }
}

int main()
{
    double T[6] = {3, 8, 9, 2, 15, 10};
    cout << "Ciag przed sortowaniem: ";
    wyswietl(T, 6);
    sortuj(T, 6);
    cout <<endl<< "Ciag po sortowaniu: ";
    wyswietl(T, 6);
    return 0;
}
