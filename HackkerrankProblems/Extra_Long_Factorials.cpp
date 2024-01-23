#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    arr.push_back(1);  // Initialize the vector with a single element

    for (int i = 2; i <= n; i++) {
        int carry = 0;
        int size = arr.size();  // Get the current size of the vector

        for (int j = 0; j < size; j++) {
            int prod = arr[j] * i + carry;
            arr[j] = prod % 10;
            carry = prod / 10;
        }

        while (carry) {
            arr.push_back(carry % 10);  // Add carry digits to the end of the vector
            carry = carry / 10;
        }
    }

    for (int i = arr.size() - 1; i >= 0; i--) {
        cout << arr[i];
    }

    return 0;
}



