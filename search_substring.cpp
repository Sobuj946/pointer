#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter main string s:";
    string s;
    getline(cin,s);
    string sub;
    cout<<"Enter substring :";
  getline(cin,sub);
    int k=0,i;
    int len=s.size();
    int len1=sub.size();
    for( i=0;i<len;i++)
    {
        k=i;
        for(int j=0;j<len1;j++)
        {
            if(s[k]==sub[j])
            {
                if(j==len1-1)
                {
                    cout<<"The substring is present in the main string\n";
                    break;
                }
            
            }
        }
    }
    if(i==len-1)
    cout<<"The substring is not found the main string\n";
    
    return 0;
}