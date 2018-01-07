#include <iostream>

using namespace std;
//przek³adanie na b
void hanoi(int n, char a, char b, char c)
{
    if(n>0)
    {
        hanoi(n-1, a, c, b);
        cout << a << " na " << b<< endl;
        hanoi(n-1, c, b, a);
    }
}
//zad dom - na palik c
int main()
{
    hanoi(10, 'a', 'b', 'c');
    return 0;
}
