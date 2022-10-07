#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    const int MOD = 1234567891, MULTIPLY = 31;
    int L;
    string s;
    cin >> L >> s;
    ll sum = 0, R = 1;
    for (int i = 0; i < L; i++)
    {
        sum = (sum + (s[i] - 'a' + 1) * R) % MOD;
        R = (R * MULTIPLY) % MOD;
    }
    cout << sum << '\n';
    return 0;
}
/*
모듈러 연산
(a+b) mod n == ((a mod n) + (b mod n)) mod n
(a-b) mod n == ((a mod n) - (b mod n)) mod n
(a*b) mod n == ((a mod n) * (b mod n)) mod n
*/