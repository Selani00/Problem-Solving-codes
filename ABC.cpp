#include<iostream>
#include<vector>
#include<map>
#include <algorithm>
#include<string>
#include<cstring>

using namespace std;

int main(){
    vector<int>arr;
    string s;

    for(int i=0;i<3;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    cin>>s;

    //convert string into char array
    const int length=s.length();
    char* char_array = new char[length + 1];
    strcpy(char_array, s.c_str());

    sort(arr.begin(), arr.end());

    map<char,int>mp;

    mp.insert({'A',arr[0]});
    mp.insert({'B',arr[1]});
    mp.insert({'C',arr[2]});

    for(int i=0;i<3;i++){
        if(mp.find(char_array[i])!=mp.end()){
            cout<<mp[char_array[i]]<<" ";
        }
    }
    return 0;

}
