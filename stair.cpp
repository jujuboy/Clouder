#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
int n;
int cache [400][4];
const int INF = 999999998;
int arr[400];
int stair(int p, int q) { //q is the sequence state - p is the step
    int& ret = cache[p][q];
    if (q==3) {
        return -INF;
    }
    if (p>n) {
        return -INF;
    }
    if (p==n) {
        return arr[p];
    }
    if (ret != -1) {
        return ret;
    }
    ret = max(ret, stair(p+1, q+1) + arr[p]);
    ret = max(ret, stair(p+2, 1) + arr[p]);
    return ret;
}

int main(void) {
    cin >> n;
    for (int c=1;c<=n;c++) {
        cin >> arr[c];
    }
    memset(cache, -1, sizeof(cache));
    cout << stair(0, 0) << endl;
}