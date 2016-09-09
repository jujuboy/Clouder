#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
vector<int> arr;
int main(void) {
    int v, count, sum;
    bool p;
    cin >> v;
    while(v!= -1){
        count = 1;
        arr.push_back(1);
        for (int a=2; a<=(v/2); a++) {
            if (v%a==0) {
                arr.push_back(a);
            }
        }
        sum=accumulate(arr.begin(), arr.end(), 0);
        if (sum==v) {
            cout << v << " = ";
            for (int a=0; a<arr.size(); a++) {
                if (a==arr.size()-1) {
                    cout << arr[a] << endl;
                }
                else {
                    cout << arr[a] << " + ";
                }
            }
        }
        else {
            cout << v << " is NOT perfect." << endl;
        }
    arr.clear();
    cin >> v;
    }
}