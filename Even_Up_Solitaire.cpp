#include <iostream>

#include <stack>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    stack<int> s;

    for (int i = 0; i < n; i++) {
        int cur;
        cin >> cur;

        if (s.empty()) {
            s.push(cur);
        }
        else {
            if ((s.top() + cur) % 2 == 0) {
                s.pop();
            }
            else {
                s.push(cur);
            }
        }


    }

    cout << s.size() << endl;
}

