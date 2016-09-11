#include <iostream>
using namespace std;
int main(void) {
    int a, b, max, gcf;
    cin >> a >> b;
    max = (a > b) ? a : b;
    do {
        if (max%a == 0 && max%b == 0) {
            cout << "LCM = " << max;
        }
        else {
            ++max;
        }
    }
    gcf = a*b/max;
    cout << "GCF = " << gcf;
}