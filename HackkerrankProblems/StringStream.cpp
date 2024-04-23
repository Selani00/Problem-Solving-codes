#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {

    vector<int>arr;
    stringstream ss(str);
    string temp;

    while(getline(ss,temp,',')){
        int n;
        stringstream(temp)>>n;

        arr.push_back(n);
    }

    return arr;


	
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}