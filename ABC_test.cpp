#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

int main(){

    vector<int>arr;
    map<char,int>Mymp;
    string s;

    for(int i=0;i<3;i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    sort(arr.begin(),arr.end());

    Mymp.insert({'A',arr[0]});
    Mymp.insert({'B',arr[1]});
    Mymp.insert({'C',arr[2]});

    cin>>s;

    for(int j=0;j<s.length();j++){
        
        if(Mymp.find(s[j])!=Mymp.end()){
            cout<< Mymp[s[j]] <<" ";
        }
    }
    return 0;

}
