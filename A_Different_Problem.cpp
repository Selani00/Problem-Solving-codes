#include<iostream>
#include<string>
#include<sstream>
#include<vector>


using namespace std;

int main(){


    long long int x,y,z;
    vector<long long int>arr;
    
    while(cin >>x>>y){
        

        z=abs(x-y);
        arr.push_back(z);

    }   

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
     
   

    return 0;
}