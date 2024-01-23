#include<iostream>
#include<vector>

using namespace std;

int main(){
    
    int x;
    cin >> x;
    vector<int>arr;

    for(int i=0;i<x;i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);


    }

    for(int j=arr.size()-1;j>=0;j--){
        cout<<arr[j]<<endl;
    }
    return 0;

}