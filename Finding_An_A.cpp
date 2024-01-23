#include <iostream>
#include <string>

using namespace std;

int main()
{
    string x;
    getline(cin, x);
    int n = x.length();
    int i;
    for (i = 0; i < n; i++) {

        if (x[i] == 'a') {
            break;
        }
    }
    for (int j = i; j < n; j++) {
        cout << x[j];
    }

    return 0;
}