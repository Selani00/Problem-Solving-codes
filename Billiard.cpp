#include<iostream>
#include<cmath>
#include<iomanip>


using namespace std;


int main(){

    double a,b,s,m,n;
   
    cout<<fixed;
    cout<<setprecision(2);

    //we need to 

    while(true){
        cin >> a>> b>> s>>m>>n;


            if (a+b+s+m+n<0.5){
                return 0;
            }
            
            

            double velo=sqrt(n*n*b*b+m*m*a*a)/s;

            double angle=atan(n*b/(m*a))*180/3.1415;

            cout<<angle<<" "<<velo<<endl;

    }
    






    return 0;

}