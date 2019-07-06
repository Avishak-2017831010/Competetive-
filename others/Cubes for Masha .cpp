#include<bits/stdc++.h>
using namespace std;

int cnt[5][8];

int main()

{
    int n;
    cin >> n; int x;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 6; j++) {
            cin >> x; cnt[i][x] = 1;
        }
    }
    int last = 0;
    for (int i = 1; i <= 99; i++) {
        if (i < 10) {
            if (cnt[1][i] || cnt[2][i] || cnt[3][i]) {
                last = i;
                continue;
            } else {
                break;
            }
            continue;
        }
        if (i < 100) {
            if (cnt[1][i % 10] && cnt[2][i / 10] ||
                cnt[1][i / 10] && cnt[2][i % 10] ||
                cnt[2][i % 10] && cnt[3][i / 10] ||
                cnt[2][i / 10] && cnt[3][i % 10] ||
                cnt[1][i % 10] && cnt[3][i / 10] ||
                cnt[1][i / 10] && cnt[3][i % 10]) {
                    last = i;
                    continue;
                } else {
                    break;
                }
            continue;
        }
    }
    cout << last << endl;
}

