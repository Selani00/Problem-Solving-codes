#include <cmath>
#include <cstdio>
#include <map>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    map<int, vector<int>> mp;

    for (int m = 0; m < n; m++) {
        int i;
        cin >> i;
        vector<int> arr;
        for (int j = 0; j < i; j++) {
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }

        mp.insert(make_pair(m, arr));
    }

    for (int m = 0; m < q; m++) {
        int key, index;
        cin >> key >> index;

        auto it = mp.find(key);
        if (it != mp.end()) {
            vector<int>& arr = it->second;           
            cout << arr[index] << endl;
             
        } 
    }

    return 0;
}
