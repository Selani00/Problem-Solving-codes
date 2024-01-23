#include<iostream>
#include<vector>

using namespace std;

int main() {

    int P, N;
    cin >> P >> N;
    int count = 0;
    int count1 = 0;
    bool ok = false;
    int j;

    vector<string> arr;
    vector<string> arr1;
    arr1.push_back("sample");

    for (int i = 0; i < N; i++) {
        string part;
        cin >> part;
        arr.push_back(part);
    }

    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for (j = 0; j <= arr.size(); j++) { 
        string temp=arr[j];
        count=count+1;

        for(int i=0;i<arr1.size();i++){
            if(temp!=arr1[i]){
                count1=count1+1;
            }           
        }
        if(count1==arr1.size()){
            arr1.push_back(temp);
        }
        
        
        
        
    }

    for(int i = 0; i < arr1.size(); i++){
        cout<<arr1[i]<<" ";
    }

    cout<<endl;

    

    if (ok) {
        cout << count << endl;
    }
    else {
        cout << "paradox avoided" << endl;
    }

    return 0; 
}
