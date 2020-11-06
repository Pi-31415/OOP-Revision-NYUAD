#include <iostream>
using namespace std;
void fun_ch6(int first, int &second);
int main()
{
    int n1(0), n2(0);
    fun_ch6(n1, n2);
    cout << n1 << endl
         << n2 << endl;
    return 0;
}
void fun_ch6(int first, int &second)
{
    first++;
    second += 2;
    return;
}