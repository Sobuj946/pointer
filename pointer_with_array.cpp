#include<bits/stdc++.h>
using namespace std;
int main(){
 

    int a[]={1,2,3,4,5,6,7,14};
    int i,num,*ptr;
    ptr=a;
    cout<<"Enter the element to be searched:";
    cin>>num;
    for( i=0;i<8;i++)
    {
        if(*ptr==num)
        {
            cout<<num<<"is present in the array\n";
            break;
        }
        else if(i==8)
        {
            cout<<num<<"is not present in the array";
        }
        ptr++;
    }
    return 0;
}