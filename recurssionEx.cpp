#include <iostream>
using namespace std;
int fun1(int n, int c)
{
    cout << n << endl;
    if (n == c)
    {
        return 0;
    }
    n++;
    fun1(n, c);
    return 0;
}
int main()
{
    int n = 1, c;
    cout << "enter c";
    cin >> c;
    fun1(n, c);
    return 0;
}