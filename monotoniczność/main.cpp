#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

bool rosnacy(int T[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        if(T[i]>=T[i+1]) return false;
    }
    return true;
}

bool malejacy(int T[], int n)
{
    for(int i=0; i<n-1;
     i++)
    {
       if(T[i]<=T[i+1]) return false;
    }
    return true;
}

bool staly(int T[], int n)
{
    for(int i=0; i<n-1; i++)
    {
         if(T[i]!=T[i+1]) return false;
    }
    return true;
}

bool nierosnacy(int T[], int n)
{
    for(int i=0; i<n-1;
     i++)
    {
       if(T[i]<T[i+1]) return false;
    }
    return true;
}

bool niemaleajcy(int T[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        if(T[i]>T[i+1]) return false;
    }
    return true;
}

int main()
{
    int pomocnicza = 1;
    /*int T[] = {4,4,4};
    //ifologia!!!! to jest dramat
    if(staly(T, 3))
        cout << "Ciag jest staly" << endl;
    else if(rosnacy(T, 3))
        cout << "Ciag jest rosnacy"<<endl;
    else if(malejacy(T, 3))
        cout << "Ciag jest malejacy"<<endl;
    else if(nierosnacy(T, 3))
        cout << "Ciag jest nierosnacy"<<endl;
    else if(niemaleajcy(T, 3))
        cout << "Ciag jest niemalejacy"<<endl;
    else
        cout << "Ciag jest niemonotoniczny";*/

    //bez ifologii
    while(pomocnicza == 1)
    {
        srand(time(NULL));
        int rozmiar, x;
        cout << "Podaj rozmiar tablicy: ";
        cin >> rozmiar;
        int T[rozmiar];
        //losowanie do tablicy
        for(int i=0; i<rozmiar; i++)
        {
            T[i]=rand() % 10 +1;
            cout << T[i] << ", ";
        }
        cout << endl << "##### Sprawdz monotonicznosc ciagu #####"<<endl;
        cout << "Podaj co chcesz sprawdzic: "<<endl;
        cout << "1 - Czy ciag jest rosnacy?"<<endl;
        cout << "2 - Czy ciag jest malejacy?"<<endl;
        cout << "3 - Czy ciag jest nierosnacy?"<<endl;
        cout << "4 - Czy ciag jest niemalejacy?"<<endl;
        cout << "5 - Czy ciag jest staly?"<<endl;
        cout << "6 - zakonczenie programu" << endl;
        cin >> x;

        switch(x)
        {
            case 1:
                if (rosnacy(T, rozmiar))
                    cout << "Ciag jest rosnacy"<<endl;
                else
                    cout << "Ciag nie jest rosnacy"<<endl;
                break;
            case 2:
                if(malejacy(T, rozmiar))
                    cout << "Ciag jest malejacy"<<endl;
                else
                    cout << "Ciag nie jest malejacy"<<endl;
                break;
            case 3:
                if(nierosnacy(T, rozmiar))
                    cout << "Ciag jest nierosnacy"<<endl;
                else
                    cout << "Ciag nie jest nierosnacy"<<endl;
                break;
            case 4:
                if(niemaleajcy(T, rozmiar))
                    cout << "Ciag jest niemalejacy"<<endl;
                else
                    cout << "Ciag nie jest niemalejacy"<<endl;
                break;
            case 5:
                if(staly(T, rozmiar))
                    cout << "Ciag jest staly"<<endl;
                else
                    cout << "Ciag nie jest staly"<<endl;
                break;
            case 6:
                pomocnicza = 2;
                break;
        }
        delete T;
        system("cls");
    }

    return 0;
}
