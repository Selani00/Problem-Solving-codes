#include<iostream>

using namespace std;

int main(){
    int c;
    cin>>c;

    for(int i=1;i<=c;i++){
        if(i%3==0 && i%5==0){
            cout<<"FizzBuzz"<<endl;
        }
        else if(i%3==0){
            cout<<"Fizz"<<endl;
        }
        else if(i%5==0){
            cout<<"Buzz"<<endl;
        }
        else{
            cout<<i<<endl;
        }

    }
    
}