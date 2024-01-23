#include<iostream>
#include<vector>

using namespace std;


int main(){
    int n;
    cin >> n;

    vector<int>binary;
    while(n!=0){
        int m=n%2;
        n=n/2;
        binary.push_back(m);
    }

    
    vector<int>N_binary;
    for(int i=binary.size()-1;i>=0;i--){
        N_binary.push_back(binary[i]);
    }

   
    
    vector<int>arr;
    int c=0;
    for(int i=0;i<N_binary.size();i++){
        if(N_binary[i]==1){
            arr.push_back(i+1);
            c++;
        }
    }


    vector<int>arr_N;
    arr_N.push_back(c);
    for(int j=0;j<arr.size();j++){
        arr_N.push_back(arr[j]);
    }

    for(int j=0;j<arr_N.size();j++){
        cout<<arr_N[j]<<endl;
    }

    return 0;
    
}


