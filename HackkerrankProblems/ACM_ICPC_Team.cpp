#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    vector<string>topics;
    vector<int>answer;
    map<int,int>mp;

    for(int i=0;i<n;i++){
        string topic;
        cin >> topic;
        topics.push_back(topic);
    }

    int h=0;
    for(int j=0;j<topics.size();j++){
        for(int k=j+1;k<topics.size();k++){
            int task=0;
            for(int l=0;l<m;l++){
                if(topics[j][l]=='1' || topics[k][l]=='1'){
                    task++;
                }
            }
            mp[h]=task;
            h++;
            
        }
    }

    int max_n=0;
    for(auto it=mp.begin();it!=mp.end();it++){
        if(max_n<=it->second){
            max_n=it->second;
        }
    }
 
    int c_n=0;
    for(auto it=mp.begin();it!=mp.end();it++){
        if(max_n==it->second){
            c_n++;
        }
    }

    cout<<max_n<<c_n<<endl;


    return 0;
}