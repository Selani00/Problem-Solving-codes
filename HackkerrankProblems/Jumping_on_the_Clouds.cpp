#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >>n;

    vector<int>arr;

    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);    
    }

    int jump=0;
    int j=0;
    while(j<n-1){
        if(arr[j+2]==0){
            j=j+2;
        }else if(arr[j+1]==0){
            j=j+1;
        }

        jump++;
        
    }

    cout<<jump;

    return 0;

    


    
}