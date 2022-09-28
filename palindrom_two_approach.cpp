// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    string str;
    cin>>str;
    
    //approach 1
    int flag=1;
    //string revstr;
    int size=str.size();
    int mid=size/2;
    for(int i=0;i<mid;++i){
        if(str[i]==str[size-1]){
            flag=0;
            size--;
        }
    }
    if(flag==0){
        cout<<"yes"<<endl;
    }
    else
        cout<<"No"<<endl;
        
        
    //approach 2
    string revstr;
    int size=str.size();
   // int mid=size/2;
    for(int i=size-1;i>=0;--i){
       revstr=revstr+str;
    }
    if(str==revstr){
        cout<<"yes"<<endl;
    }
    else
        cout<<"No"<<endl;

    return 0;
}
