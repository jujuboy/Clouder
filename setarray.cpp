#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
vector<int> s;
int main(void) {
    int rep, num, a, b;
    cin >> rep;
    while (rep--) {
        b = s.size();
        cin >> num;
        for (a=0;a<b;a++) {
            if (num==s[a]) {
                break;
            }
        }
        if (a==b) {
            s.push_back(num);
        }
    }
    sort (s.begin(), s.end());
    for (a=0;a<s.size();a++) {
        cout << s[a] << " ";
    }
    
}