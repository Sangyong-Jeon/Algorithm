#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if (n == 1 || n == 0)
        return n;
    return fibo(n - 1) + fibo(n - 2);
}

// int main()
// {
//     int n = 5;
//     for (int i = 0; i <= 5; i++)
//     {
//         cout << i << "번째 : " << fibo(i) << '\n';
//     }
//     return 0;
// }