#include <iostream>

using namespace std;
int potega(int p, int w)
{
    if (w==0) return 1; //przypadek podstawowy
    else return p*potega(p, w-1); //przypadek z�o�ony
}
int main()
{
    int p, w;
    cin >> p, w;
    cout << potega(p, w);
    return 0;
}

