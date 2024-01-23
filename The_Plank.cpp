#include<iostream>


using namespace std;

int mp_r(int n){

    long mem[n+5];

    mem[0]=1;
    mem[1]=1;
    mem[2]=2;

    for(int i=3;i<n;i++){
        mem[i]=mem[i-1]+mem[i-2]+mem[i-3];
    }
    
    
    //return mp_r(n-1) +mp_r(n-2)+ mp_r(n-3);

}

int main(){
    int n;
    cin >>n;

    cout<<mp_r(n)<<endl;
}
