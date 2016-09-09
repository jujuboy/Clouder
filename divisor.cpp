#include <iostream>
using namespace std;
int main(void) {
    int n, k;
    cin >> n >> k;
    int count = 0;
    int i;
    for (i = 1; i<=n; ++i) {
        if (n%i==0) {
            count++;
        }
        if (count == k) {
            break;
        }
    }
    printf ("%d\n", count < k ? 0 : i);
}
