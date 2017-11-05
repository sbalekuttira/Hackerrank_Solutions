//Author: Somaiah Thimmaiah Balekuttira
//Date : 01/nov/2017
//Time : 08:00 PM
//Priyanka and Toys


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n;
    cin>>n;
    vector <int> toys(n);
    int range_now=0;
    
    for(int i=0;i<n;i++)
    {
        cin>>toys[i];
        
    }
    
    sort(toys.begin(),toys.end());
    range_now=toys[0]+4;
    int count=1;
    for(int i=1;i<n;i++){
        if(toys[i]>range_now){
            count++;
            range_now=toys[i]+4;
            
        }
           
    }
    
    cout<<count;
      
    return 0;
}

