#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<unordered_map>


using namespace std;

int main(){
    string line;
    getline(cin,line);

    string word;
    stringstream ss(line);
    unordered_map<string,int>mp;

    while(ss>>word){
        if(mp.find(word)!=mp.end()){
            cout<<"no"<<endl;
            return 0;

        }else{
            mp[word]=1;
        }
    }

    cout<<"yes";

}

// int main(){

//     string x;
//     getline(cin,x);

//     stringstream ss(x);
//     string word;
//     vector<string> arr;
//     string result="yes";
     
//     while(ss >> word){       
//         arr.push_back(word);       
//     }
//     for(int i=0;i<arr.size();i++){
//         string temp=arr[i];
//         for(int j=i+1;j<arr.size();j++){
//             if(temp==arr[j]){
//                 result="no";
//                 break;
//             }
//         }

//         if(result=="no"){
//             break;
//         }
//     }    
//     cout<<result;

//     return 0;
// }