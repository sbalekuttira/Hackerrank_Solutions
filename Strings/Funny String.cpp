
//Author: Somaiah Thimmaiah Balekuttira
//Date : 02/nov/2017
//Time : 02:28 PM
//Funny String

#include <bits/stdc++.h>
#include <string.h>
using namespace std;



int main() {
    int q;
    cin >> q;
    while(q--){
    string s;
    cin>>s;
    char rev_s[s.length()];
    
    for(int i=s.length()-1,j=0;i>=0,j<s.length();i--,j++) {
        rev_s[j]=s[i];
        
    }
    int flag=0;
    int first;
    int second; 
    for(int i=0;i<s.length()-1;i++)
    {
        first=s[i+1]-s[i];
        if(first<0)
            first*=-1;
        
        second=rev_s[i+1]-rev_s[i];
        if(second < 0)
            second*=-1;
        
        if(first != second){
               flag=1;
               break;
        }
    }
    
    
    if(flag==0)
        cout<<"Funny"<<endl;
    else
        cout<<"Not Funny"<<endl;
    }     
    return 0;
}

