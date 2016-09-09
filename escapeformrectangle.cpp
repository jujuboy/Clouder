#include <iostream>
using namespace std;
int main(void) {
    int x, y, w, h, q, f;
    cin >> x >> y >> w >> h;
    q=1000;
    f=w-x;
    if (f<q) {
        q=f;
    }
    if (x<q) {
        q=x;
    }
    if (y<q) {
        q=y;
    }
    f=h-y;
    if (f<q) {
        q=f;
    }
    cout << q;
}