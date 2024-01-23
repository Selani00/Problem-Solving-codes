#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main(){

    int x;
    cin>>x;
    vector<int>arr;

    while(x!=0){
        int n=x%2;
        x=x/2;
        arr.push_back(n);
    }

    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum=sum+arr[i]*pow(2,(arr.size()-(i+1)));
        
    }
     
    
    cout<<sum;



    return 0;
}