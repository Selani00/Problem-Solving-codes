#include<iostream>

using namespace std;

int main(){
     int x;
     cin>>x;

    if(x<99){
        x=99;
    } else{        
        if(x%100<49){
            x=((x/100)*100)-1;    
        }else{
            x=((x/100)*100)+99;
     }
    }

    cout<<x;

    return 0;

}
   
