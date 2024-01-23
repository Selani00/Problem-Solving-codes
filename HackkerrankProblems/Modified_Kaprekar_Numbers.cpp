#include <iostream>
#include<vector>
#include<cmath>
#include<string>

using namespace std;

int main(){

    int p,q;
    cin>>p>>q;

    vector <long>arr;
    for(int i=p;i<=q;i++){  
        long j=i;
        string dh=to_string(i);
        int d=dh.size(); 
        long a=i*i;
        long n=pow(10,d);
        long m=a/n;
        long h=a%n;
        
        if(m+h==i){
            arr.push_back(i);
        }      
    }
    
    if (arr.size()==0){
        cout<<"INVALID RANGE";
    }else{
        for(int l=0;l<arr.size();l++){
            cout<<arr[l]<<" ";
        }
    }
}
