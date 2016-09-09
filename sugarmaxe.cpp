#include <iostream>
#include <array>
#include <string.h>
using namespace std;
int arr[1010][1010];
const int INF = 999999876;
int i, j;
int cache[1003][1003];

int sugarsucker(int y, int x) {
    if (y > i || x > j) {
        return -INF;
    }
    if (y == i && x == j) {
        return 0;
    }
    int& ret= cache[y][x];
    if (ret != -1) {
        return ret;
    }
    ret = max(ret, sugarsucker(y + 1, x) + arr[y][x]);
    ret = max(ret, sugarsucker(y, x + 1) + arr[y][x]);
    return ret;
}

int main(void) {
    cin >> i >> j;
    for (int y=0; y<i; y++) {
        for (int x=0; x<j; x++) {
            cin >> arr[y][x];
        }
    } 
    memset(cache, -1, sizeof(cache));
    cout << sugarsucker(0, 0);
}