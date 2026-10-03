#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main(){
    char *ptr[10]={"books","television","computer","sports"};
    int i=0;
    char ch[100];
    cout<<"Enter your favorite game:";
    cin>>ch;
    for( i=0;i<8;i++)
    {
      if(!strcmp(ch,ptr[i]))
      {
        cout<<"Your favorite game is available here\n";
        break;
      }
    }
    return 0;
}