#include<iostream>
#include<vector>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int>arr;

    for(int i=0;i<4;i++){
        int m=n%2;
        n=n/2;
        arr.push_back(m);
    }

   
    int x=arr.size();

    cout<<arr[x-1];

    return 0;
    
}


