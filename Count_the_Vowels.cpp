#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main() {
    string s;
    getline(cin,s);
    
    for(int j=0;j<s.length();j++){
        s[j]=tolower(s[j]);
    }

    int sum=0;
    

    for(int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]=='e'|| s[i]=='i' || s[i]=='o'|| s[i]=='u'){
            sum=sum+1;
        }

    }

    cout <<sum;

    return 0;
}