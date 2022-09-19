// 순열을 구하는 두번째 방법 : 재귀함수 이용
#include <bits/stdc++.h>
using namespace std;

vector<int> v;

void printV(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << '\n';
}

void makePermutation(int n, int r, int depth)
{
    if (r == depth)
    {
        printV(v);
        return;
    }
    for (int i = depth; i < n; i++)
    {
        swap(v[i], v[depth]);
        makePermutation(n, r, depth + 1);
        swap(v[i], v[depth]);
    }
    return;
}

// int main()
// {
//     int a[3] = {1, 2, 3};
//     for (int i = 0; i < 3; i++)
//         v.push_back(a[i]);
//     makePermutation(3, 3, 0);
//     return 0;
// }