#include <iostream>

using namespace std;
int fun(int n)
{
    if (n==0) return 4; //przypadek podstawowy
    else return fun(n-1)+3; //przypadek z³o¿ony
}
int main()
{
    int n;
    cin >> n;
    cout << fun(n);
    return 0;
}
