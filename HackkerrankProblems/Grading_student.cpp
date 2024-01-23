#include<iostream>
#include<vector>

using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int>grades;
    
    for(int j=0;j<n;j++){
        int elem;
        cin>>elem;
        
        int mod=elem%5;
        int bal=elem/5; 
        if(elem<=37){
            grades.push_back(elem);
        }else{
            if(((bal*5)+5-elem)<3){
            grades.push_back((bal*5)+5);
            }else{
            grades.push_back(elem);
        }

        } 
        
    }

    for(int j=0;j<n;j++){
        cout<<grades[j]<<" ";
    }
    
    
}
