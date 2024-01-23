#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    while (cin >> n && n != 0) {
        vector<pair<int, int>> arr1, arr2;

        
        for (int i = 0; i < n; ++i) {
            int num;
            cin >> num;
            arr1.push_back({num, i});
        }

        
        for (int i = 0; i < n; ++i) {
            int num;
            cin >> num;
            arr2.push_back({num, i});
        }

        
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());

        
        vector<int> arr_new(n);
        for (int i = 0; i < n; ++i) {
            arr_new[arr1[i].second] = arr2[i].first;
        }

        
        for (int i = 0; i < n; ++i) {
            cout << arr_new[i] << endl;
        }

        cout<<endl;
        
    }

    return 0;
}