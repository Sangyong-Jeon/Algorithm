/*
순열을 구하는 첫번째 방법 : next_permutation과 prev_permutation 함수 이용

next_permutation
- 배열을 오름차순으로 순열을 만들 수 있을 때 true 반환
- 그렇지 않다면 false를 반환하고 배열을 원래의 배열로 복원

prev_permutation
- next_permutation의 반대인 내림차순이라 기능은 똑같음
*/
#include <bits/stdc++.h>
using namespace std;

void printV(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}

// int main()
// {
//     int a[3] = {1, 2, 3};

//     vector<int> v;

//     for (int i = 0; i < 3; i++)
//         v.push_back(a[i]);

//     // 오름차순으로 순열 뽑기 (123, 132, 213 ...)
//     do
//     {
//         printV(v);
//     } while (next_permutation(v.begin(), v.end()));
//     cout << "----" << '\n';
//     v.clear();

//     for (int i = 2; i >= 0; i--)
//         v.push_back(a[i]);

//     // 내림차순으로 순열 뽑기 (321, 312, 231 ...)
//     do
//     {
//         printV(v);
//     } while (prev_permutation(v.begin(), v.end()));

//     return 0;
// }