#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){

    string s,t;
    int k;

    cin>>s>>t>>k;
    
    int i=0;
    while((i<s.size()) && (i<t.size())){
        if(s[i]!=t[i]){
            break;
        }
        i++;
    }

    

    int x= (s.size()-i)+(t.size()-i);

    if( x <= k && (x % 2 == k % 2) || s.size() + t.size() <= k){
        cout<<"Yes";

    }else{
        cout<<"No";
    }
   
  return 0;

}