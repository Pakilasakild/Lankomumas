#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;
struct mok
{
    int sveik;
    int nr;
};

int main()
{
    int n, k, tem = 0;
    cin >> n >> k;
    mok info[n];
    for (int i = 0; i < n; i++)
    {
        cin >> info[i].nr;
        info[i].sveik = 0;
    }

    int j = 0;
    while ((j < n) || (info[k].sveik == 0))
    {
        info[k-1].sveik += 1;
        tem = k;
        k = info[k-1].nr;
        j++;
    }
    cout << tem;
    return 0;
}
