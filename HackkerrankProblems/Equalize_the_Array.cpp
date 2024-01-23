#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<cmath>


using namespace std;

int main(){
    int n,max_n;
    cin >>n;
    vector<int>arr;
    map<int,int>mp;


    for (int i=0;i<n;i++){
        int temp;
        cin >>temp;
        arr.push_back(temp);
    }

    sort(arr.begin(),arr.end());

    for(int j=0;j<n;j++){
        auto it=mp.find(arr[j]);
        if(it!=mp.end()){
            it->second=(it->second)+1;
        }else{
            mp[arr[j]]=1;
        }
    }

    

    max_n=0;

    for(auto t=mp.begin();t!=mp.end();t++){
        if(max_n<t->second){
            max_n=t->second;
        }
    }

    int delete_n=arr.size()-max_n;
    cout<<delete_n;




}