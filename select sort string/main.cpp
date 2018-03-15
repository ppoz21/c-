#include <iostream>

using namespace std;

void sortuj (string T[], int n)
{
    int k;
    for(int i=0; i<n-1; i++)
    {
        k=i;
        for(int j=i+1; j<n; j++)
            if(T[j]<T[k])
                swap(T[j], T[k]);
    }
}
void wyswietl(string T[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << T[i]<<", ";
    }
}

int main()
{
    string T[5] = {"janusz", "anna", "tomek", "grazynka", "rafal"};
    cout << "Ciag przed sortowaniem: ";
    wyswietl(T, 5);
    sortuj(T, 5);
    cout <<endl<< "Ciag po sortowaniu: ";
    wyswietl(T, 5);
    return 0;
}
