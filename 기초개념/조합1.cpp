/*
nCr 공식
nCr = n!/r!*(n-r)!

재귀를 이용한 조합
*/
#include <bits/stdc++.h>
using namespace std;
// 5개 중에서 3개를 뽑을 때

void printV2(vector<int> b)
{
    for (int i : b)
        cout << i << " ";
    cout << '\n';
}

void combi(int n, int k, int start, vector<int> b)
{
    if (b.size() == k)
    {
        printV2(b);
        return;
    }
    for (int i = start + 1; i < n; i++)
    {
        b.push_back(i);
        combi(n, k, i, b);
        b.pop_back();
    }
    return;
}

// int main()
// {
//     vector<int> b;
//     combi(5, 3, -1, b);
//     return 0;
// }