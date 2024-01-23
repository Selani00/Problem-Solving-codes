#include<iostream>
#include<vector>
#include<cmath>

using namespace std;


int main(){

    int n;
    cin>>n;
    vector<double>arr;
    vector<double>c;
    vector<double>f;
    for(int i=0;i<n;i++){
        double m;
        cin>>m;
        c[i]=0;
        for(int j=0;j<int(m);j++){
            double temp;
            cin>>temp;
            arr.push_back(temp);
            c[i]=c[i]+temp;

        }

        double ava=c[i]/m;
        f[i]=0;
        for(int h=0;h<m;h++){
            if(arr[h]>ava){
                f[i]=f[i]+1;
            }
        }

        f[i]=(f[i]/m)*100;
        
    }

    for(int j=0;j<n;j++){
        f[j]=ceil(f[j]*1000.0)/1000.0;
        cout<<f[j]<<endl;
    }
    return 0;
}