#include<iostream>
#include<string>
#include<cstring>

#include<map>

using namespace std;

int main(){

    string x;
    getline(cin,x);

    // no need to convert into array we can get the size by using s.size();

    const int length=x.length();

    char* char_array = new char[length + 1];

    strcpy(char_array, x.c_str());

    for(int i=0; i<x.length();i++){
        if(x[i]==':'){
            if(x[i+1]==')'){
                cout<<i<<endl;
            }
            else if(x[i+1]=='-'){
                if(x[i+2]==')'){
                    cout<<i<<endl;
                }
            }

        }
        
        else if(x[i]==';'){
            if(x[i+1]==')'){
                cout<<i<<endl;
            }
        
            else if(x[i+1]=='-'){
                if(x[i+2]==')'){
                    cout<<i<<endl;
                }
            }

        }

    }

    


}
