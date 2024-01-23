#include<iostream>
#include<string>

using namespace std;

int main(){
    string a,b;
    cin>>a>>b;

    int first,second;

    first=a.length();
    second=b.length();

    if(first<second){
        cout<<"no";
    }else{
        cout<<"go";
    }

}