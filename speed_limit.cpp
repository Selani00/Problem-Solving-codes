#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main(){

    int cases;
    
    
    vector<int>dis;
    int x=0;

    cin >> cases;
    
    
     while(cases!= -1){
        vector<int>times;
   
        
        for(int i=0;i<cases;i++){
            int mile,time;
            cin>> mile>>time;           
            int temp1=time;           
            times.push_back(temp1);
            if(i==0){
                x=(mile*time);

            }else{
                x=x+(mile*(time-times[i-1]));
            }

            
        }
        dis.push_back(x);
        cin >> cases;
        x=0;

     }

     for(int j=0;j<dis.size();j++){
        cout<<dis[j]<<" miles"<<endl;
     }

     return 0;

    
}