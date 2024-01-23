#include<iostream>
#include<vector>
#include<string>
#include<typeinfo>
#include<sstream>
#include<cmath>

using namespace std;

int main(){
    // do{
    //     int people_meat;
    //     cin>> people_meat;

    // }while();
    string line;
    getline(cin,line);

    string s;
    stringstream ss(line);
    vector<string>arr;

    while(getline(ss,s,' ')){
        arr.push_back(s);
    }

    
    
    double x=stod(arr[0]);   
    double y=stod(arr[1]);

    double walk=stod(arr[5]);
    double initial_direction=stod(arr[3]);
    
    double new_x,new_y;
  
    new_x=x+(walk*cos((22*initial_direction)/1260));
    new_y=y+(walk*sin((22*initial_direction)/1260));

    int i=5;
    while(i!=arr.size()-1){
        double trun=stod(arr[i+2]);
        double walkfurther=stod(arr[i+4]);

        new_x=new_x+(walkfurther*cos((22*trun)/1260));
        new_y=new_y+(walkfurther*sin((22*trun)/1260));

        i=i+4;
    }

   //kalin angle eketh ekke check karannath oni 
  

    cout<< new_x<< " "<<new_y<<endl;
    
    

    return 0; 


}