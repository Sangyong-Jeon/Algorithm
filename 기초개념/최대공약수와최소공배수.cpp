#include <bits/stdc++.h>
using namespace std;

// 유클리드 호제법을 이용한 최대공약수
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

// (최소공배수) = (두수의 곱)/(최대공약수)
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

// int main()
// {
//     int a = 10, b = 12;
//     cout << gcd(a, b) << " : " << lcm(a, b) << '\n';
//     return 0;
// }