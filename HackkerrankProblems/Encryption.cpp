#include <iostream>
#include<string>
#include<vector>
#include <cmath>
#include <typeinfo>

using namespace std;

int main(){
    string s;
    vector<char>arr;
    vector<char>ans;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(s[i]!=' '){
            arr.push_back(s[i]);
        }
        
    }

    int n=sqrt(arr.size());//rows
    int m;//columns
    cout<<arr.size();
    if(n*n==arr.size()){
        m=n;
        
    }else{
        m=n+1;
        n=n+1;
    }
    

    for(int i=0;i<n;i++){
        int h=i;
        while(h<arr.size()){
            ans.push_back(arr[h]);
            h=h+m;
        }
        ans.push_back(' ');
        
    }

    for(int j=0;j<ans.size();j++){
        cout<<ans[j];
    }


    

    


}