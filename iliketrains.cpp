#include <iostream>
using namespace std;
int main(void) {
    int c, sum, b, pmax;
    sum=pmax=0;
    for (b=0; b<8; b++) {
        cin >> c;
        if (b%2==0) {
            sum-=c;
        }
        else {
            sum+=c;
        }
        if (sum>pmax) {
            pmax=sum;
        }
        
    }
    cout << pmax;
}