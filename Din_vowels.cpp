#include<vector>
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    int count=0;
    string line;
    getline(cin,line);
    vector<char>temp;
    for(int k=0;k<line.size();k++)
    {
        temp.push_back(tolower(line[k]));
    }
    vector<char>vowel{'a','e','i','o','u'};
    for(int j=0;j<temp.size();j++)
    {
        for(int i=0;i<vowel.size();i++)
        {
            if(temp[j]==vowel[i])
            {
                count+=1;
                break;
            }
        }
    }
    cout<< count;
}