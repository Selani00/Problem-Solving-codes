#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int NoBooks;
    vector<int>prices;

    cin >> NoBooks;

    for(int i=0;i<NoBooks;i++){
        int temp;
        cin >> temp;
        prices.push_back(temp);
    }

    
    sort(prices.begin(),prices.end(), greater<int>());

    int j=0;
    int Tprice=0;
    int remain=NoBooks%3;
    for(int i=0;i<NoBooks-remain;i=i+3){
        Tprice=Tprice+prices[i]+ prices[i+1];       
    }

    for(int j=NoBooks-1;j>=NoBooks-remain;j--){
        Tprice=Tprice+prices[j];
    }

    cout<< endl;
    cout<<Tprice;
    return 0;

}