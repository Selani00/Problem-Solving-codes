#include<iostream>
#include<vector>

using namespace std;

int main(){

    int num;
    vector<int>numbers;
    vector<int>correct;
    vector<int>missing;

    cin >>num;

    for(int i=0;i<num;i++){
        int temp;
        cin >> temp;
        numbers.push_back(temp);
    }

    int n=numbers[numbers.size()-1];

    for(int i=1;i<=n;i++){
        correct.push_back(i);
    }

    

    for(int j=0;j<correct.size();j++){
        bool ok=false;
        for(int i=0;i<num;i++){
            if(correct[j]==numbers[i]){
                ok=true;
                break;

            }
        }
        if(ok==false){
            missing.push_back(correct[j]);
        }
        

    }

    if(missing.size()==0){
        cout<<"good job";
    }else{
        for(int h=0;h<missing.size();h++){
            cout<<missing[h]<<" ";
        }
    }

    return 0;

}