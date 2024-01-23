#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    long number;
    long index;

    cin >> number >> index;

    vector<long> arr;

    for (long i = 1; i * i <= number; i++) {
        if (number % i == 0) {
            arr.push_back(i);

            if (i != number / i) {
                arr.push_back(number / i);
            }
        }
    }

    sort(arr.begin(), arr.end());

    cout << arr[index - 1];

    return 0;
}
