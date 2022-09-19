// 정답 2
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