#include<iostream>
#include<map>
#include<vector>
#include<string>

using namespace std;

int main(){
    int time;
    char problem;
    string state;
    bool torun=true;
    map<char,int>Mymp;
    vector<char>arr;

    while(torun){
        cin >> time;
        if(time!=-1){
            cin>> problem>>state;
            auto haveproblem=Mymp.find(problem);
            if(state=="right" && haveproblem==Mymp.end()){
                Mymp[problem]=time;
            }else if(state=="wrong"){
                arr.push_back(problem);
            }           
        }else{
            torun=false;
        }
    }

    int Ttime=0;
    for(auto x=Mymp.begin();x!=Mymp.end();++x){
        int count=0;
        
        for(int i=0;i<arr.size();i++){
            if(x->first==arr[i]){
                count++;
            }
        }

        Ttime=Ttime+x->second+(count*20);

    }

    cout<<Mymp.size()<<" "<<Ttime;
}

for (auto x=mp.begin();x!=mp.end();++x){
    
}