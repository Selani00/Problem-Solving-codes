#include<iostream>
#include<vector>

using namespace std;

int main(){

    char arr1[13]={'A','2','3','4','5','6','7','8','9','T','J','Q','K'};
    char arr2[4]={'C','D','H','S'};
    vector<string>arr;
    int c=0;

    for(int i=0;i<5;i++){
        string s;
        cin>>s;
        arr.push_back(s);
    }

    for(int j=0;j<5;j++){
        cout<<arr[j]<<endl;
    }

    // for(int i=0;i<5;i++){
    //     string temp=arr[i];

    //     for(int j=0;j<15;j++){
    //         if(temp[1]==arr1[j]){
    //             for(int h=0;h<4;h++){
    //                 if(temp[2]==arr2[h]){
    //                     c++;
    //                 }
    //             }
    //         }
    //     }
    // }

    //cout<<c;

}