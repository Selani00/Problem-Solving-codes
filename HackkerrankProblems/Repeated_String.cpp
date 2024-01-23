#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    unsigned long long n;

    cin>>s>>n;

    unsigned long long count_a=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a'){
            count_a++;
        }
    }

    unsigned long long times=n/s.size();
    unsigned long long remain=n%s.size();

    
    unsigned long long x=0;
    for(int i=0;i<remain;i++){
        if(s[i]=='a'){
            x++;
        }
    }

    unsigned long long all_a=times*count_a+x;
    cout<<all_a;

}