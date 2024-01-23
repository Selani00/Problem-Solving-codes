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

    int maxDifference ; // Initialize with a value that can't be achieved
    int minElement = arr[0];

    for (int j = 1; j < n; j++) {
        maxDifference = max(maxDifference, arr[j] - minElement);
        minElement = min(minElement, arr[j]); //This will get minimum element upto index j
    }

    if(maxDifference<=0){
        maxDifference=-1;
    }
    cout << maxDifference;


    // int max=0;

    // for(int j=1;j<n;j++){
    //     int i=j-1;
    //     do{
    //         if((arr[j]-arr[i])>max){
    //             max=arr[j]-arr[i];
    //         }
    //         i--;

    //     }
    //     while(i>=0);
    // }

    // if(max<=0){
    //     cout<<-1;
    // }else{
    //     cout<<max;

    // }

    
}