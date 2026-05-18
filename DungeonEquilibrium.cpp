#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> freq;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        int removals = 0;
                        
        for (auto &p : freq) {
            int v = p.first;
            int f = p.second;

            if (v == 0) {
                removals += f;
            } else {
    
                removals += min(f, abs(f - v));
            }
        }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                

        cout << removals << "\n";
        
    }
}
