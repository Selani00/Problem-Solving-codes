#include<iostream>
#include<vector>
#include<map>
#include<string>

using namespace std;

int main(){
    int time;
    char problem;
    string state;
    int Ttime=0;
    int count=0;
    bool torun=false;
    
    cin >> time >> problem >> state;

    map<char,int> Mymp;
    do{

        if(Mymp.find(problem)==Mymp.end()){
        //not present
            if(state=="wrong"){
                Mymp[problem]=20;
            }else{
                Mymp[problem]=time;
                count++;
                Ttime=Ttime+time;
            }       
        }else{
        //present
            auto x=Mymp.find(problem);
            

            int toadd;
            if(state=="wrong"){

                x->second+=20;

            }else{
                
                x->second+=time;
                count++;         
                Ttime=Ttime+x->second;
                const y=Mymp.find(problem);
                

            }

        }
        cin >> time;
        if(time==-1){
                torun=true;
        }else{
                cin>> problem >>state;
        }

    }while(torun==false);

    

    cout<< count <<" "<< Ttime;
    
    return 0;
}
