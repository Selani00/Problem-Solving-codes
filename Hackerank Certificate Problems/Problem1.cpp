#include<iostream>

using namespace std;

int main(){

}

int maxCost(vector<int> cost, vector<string> labels, int dailyCount) {
    
    if (cost.empty() || labels.empty() || cost.size() != labels.size()) {
        
        return 0; 
    }   
    vector<int> sum_arr;
    int i = 0;

    while (i < cost.size()) {
        int dC = 0;
        int sum = 0;
        while (dC != dailyCount && i < cost.size()) {
            if (labels[i] == "legal") {
                dC++;
            }
            if(dC==0 && labels[i]=="illegal" && i==cost.size()-1){
                sum=0;
            }else{
                sum = sum + cost[i];
            }
                    
            i++;
        }
        
        sum_arr.push_back(sum);
    }

    if (sum_arr.empty()) {
        return 0;
    } else {
        auto max = max_element(sum_arr.begin(), sum_arr.end());
        int max_v = static_cast<int>(*max);
        return max_v;
    }
}