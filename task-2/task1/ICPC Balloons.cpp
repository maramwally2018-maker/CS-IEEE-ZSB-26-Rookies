#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int freq[26] = {0};
        for (int i = 0; i < n; i++)
        {
            char c = s[i];
            int index = c - 'A';
            freq[index]++;
        }

        int ans = 0;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] > 0)
            {
                ans += freq[i] + 1;
            }
        }

        cout << ans << '\n';
    }
    return 0;
}
