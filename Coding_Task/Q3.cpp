#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

string isPangram(vector<string> pangram) {
    
    string name="";
    for(int i=0;i<pangram.size();i++){
        map<char,int>mp;
        for(int j=0;j<pangram[i].size();j++){
            auto it=mp.find(pangram[i][j]);
            if(mp.empty()){
                mp[pangram[i][j]]=1;
            }
            else if(it!=mp.end()){
                it->second++;
            }else{
                if(pangram[i][j]!=""){
                    mp[pangram[i][j]]=1;
                }
                
            }
        }
        
        if(mp.size()==27){
            name+='1';            
        }else{
            name+='0';
        }
    }
    

    
    return name;

}

int main() {
    vector<string> input = {"we promptly judged antique ivory buckles for the next prize", "we promptly judged antique ivory buckles for the prizes", 
    "the quick brown fox jumps over the lazy dog","the quick brown fox jump over the lazy dog"};
    string result = isPangram(input);
    cout << result << endl;  // The expected output is "1101"

    return 0;
}
