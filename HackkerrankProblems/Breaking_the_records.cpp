#include<iostream>
#include<vector>

using namespace std;

int main(){

    int n;
    cin >>n;
    vector<int> scores;

    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        scores.push_back(temp);
    }

    int most=scores[0];
    int least=scores[0];
    int most_c=0;
    int least_c=0;
    
    for(int i=1;i<n;i++){
        if(scores[i]>most){
            most_c=most_c+1;
            most=scores[i];
        }else if(scores[i]<least){
            least_c=least_c+1;
            least=scores[i];
        }else{
            
        }
    }
    
    vector<int>count;
    count[0]=most_c;
    count[1]=least_c;

    for(int j=0;j<2;j++){
        cout<<count[j]<<" ";
    }
    return 0;

}