// 정답 3
#include <bits/stdc++.h>
using namespace std;
int a[9], sum;
vector<int> v;
pair<int, int> ret;
void solve()
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (sum - a[i] - a[j] == 100)
            {
                ret = {i, j};
                return;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for (int i = 0; i < 9; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    solve();
    for (int i = 0; i < 9; i++)
    {
        if (ret.first == i || ret.second == i)
            continue;
        v.push_back(a[i]);
    }
    sort(v.begin(), v.end());
    for (int i : v)
        cout << i << '\n';
    return 0;
}

/* 정답 2
#include <bits/stdc++.h>
using namespace std;
int a[9];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for (int i = 0; i < 9; i++)
        cin >> a[i];
    sort(a, a + 9);
    do
    {
        int sum = 0;
        for (int i = 0; i < 7; i++)
            sum += a[i];
        if (sum == 100)
            break;
    } while (next_permutation(a, a + 9));
    for (int i = 0; i < 7; i++)
        cout << a[i] << '\n';
    return 0;
}
*/

/* 정답 1
#include <bits/stdc++.h>
using namespace std;
int a[9];

int main()
{
    int i, j, c = 0;
    for (i = 0; i < 9; i++)
    {
        cin >> a[i];
        c += a[i];
    }
    c -= 100;
    sort(a, a + 9);
    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 9; j++)
        {
            if (a[i] + a[j] == c)
            {
                a[i] = 0;
                a[j] = 0;
                break;
            }
        }
        if (a[i] == 0 && a[j] == 0)
            break;
    }

    for (i = 0; i < 9; i++)
    {
        if (a[i] != 0)
            cout << a[i] << '\n';
    }
    return 0;
}
*/