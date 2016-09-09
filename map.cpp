#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;
map<string, int> a;
vector<string> arr;

int main() {
    int b, c;
    string name;
    cin >> b >> c;
    for (int x=1; x<=b; x++) {
        cin >> name;
        a[name]=1;
    }
    for (int y=1; y<=c; y++) {
        cin >> name;
        a[name]++;
    }
    map<string, int>::iterator it;
    for (it = a.begin(); it!= a.end(); ++it) {
        if (it->second == 2) {
            arr.push_back(it->first);
        }  
    }
    cout << arr.size() << endl;
    for (int y=0; y<arr.size(); y++) {
        cout << arr[y] << endl;
    }
    
}