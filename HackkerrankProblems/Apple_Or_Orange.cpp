#include<iostream>
#include<vector>

using namespace std;



int main(){
    int s,t,a,b,m,n;
    int noa=0,nob=0;
    vector<int>apple;
    vector<int>orange;

    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        int ap;
        cin>>ap;
        apple.push_back(ap);
    }

    for(int i=0;i<n;i++){
        int ora;
        cin>>ora;
        orange.push_back(ora);
    }

    for(int i=0;i<m;i++){
        apple[i]=apple[i]+a;
        if(apple[i]>=s && apple[i]<=t){
            noa=noa+1;
        }
    }

    for(int i=0;i<n;i++){
        orange[i]=orange[i]+b;
        if(orange[i]>=s && orange[i]<=t){
            nob=nob+1;
        }
    }

    cout<<noa<<endl;
    cout<<nob<<endl;
    return 0;


}