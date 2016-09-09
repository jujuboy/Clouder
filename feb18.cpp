#include <iostream>
using namespace std;
int main(void) {
    int m, d;
    cin >> m >> d;
    if (m==2) {
        if (d==18) {
            cout << "Special";
            return 0;
        } 
        else {
            if (d<18) {
                cout << "Before";
                return 0;
            }
            else {
                cout << "After";
                return 0;
            }
        }
    }
    else {
        if (m==1) {
            cout << "Before";
            return 0;
        }
        else {
            cout << "After";
            return 0;
        }
    }
        
}