#include<iostream>
#include<vector>

using namespace std;

int main(){

    int x;
    cin >>x;
    vector<int>arr;

    for(int i=0;i<x;i++){
        int y;
        cin>>y;
        int sum=0;
        for(int j=0;j<y;j++){
            int temp;
            cin >>temp;
            arr.push_back(temp);
            sum=sum+temp;
        }

       
        
        for(int h=0;h<y;h++){
            sum=sum+arr[h];
        }
        cout<<sum<<" ";

        cout<<sum+1-y<<endl;
    }

    return 0;

}