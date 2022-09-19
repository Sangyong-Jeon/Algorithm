#include <bits/stdc++.h>
using namespace std;

// 재귀함수
int fact(int n)
{
    if (n == 1 || n == 0)
        return 1;
    return n * fact(n - 1);
}

// 반복문
int fact1(int n)
{
    int ret = 1;
    for (int i = 1; i <= n; i++)
    {
        ret *= i;
    }
    return ret;
}

// int main()
// {
//     int n = 5;
//     for (int i = 0; i <= 5; i++)
//     {
//         cout << i << "번째 : " << fact(i) << '\n';
//     }
//     return 0;
// }