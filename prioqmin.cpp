#include <iostream>
#include <queue>
using namespace std;
priority_queue<int, vector<int>, greater<int> > prioq;
int main(void) {
    int a, b;
    cin >> a;
    while (a--) {
       scanf("%d", &b);
       if (b>0) {
           prioq.push(b);
       }
       else {
           if (prioq.empty()==false) {
               printf("%d\n", prioq.top());
                prioq.pop();
           }
           else {
               printf("0\n");
           }
           
       }
    }
}