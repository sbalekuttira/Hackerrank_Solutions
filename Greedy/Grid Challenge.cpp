//Author: Somaiah Thimmaiah Balekuttira
//Date : 01/nov/2017
//Time : 07:50 PM
//Grid Challenge

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int tests;
    cin>>tests;
    int n;
    char temp;
    while(tests--) {
        int flag=0;
        cin>>n;
        int arr[n][n];
        vector<int> sort_temp(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>temp;
                arr[i][j]=temp-'0';
            }
        }
        
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                
                sort_temp[j]=arr[i][j];     
                
            }
            
            sort(sort_temp.begin(),sort_temp.end());
            
            
            for(int j=0;j<n;j++){
                
                    arr[i][j]=sort_temp[j];          
            
            }
        }
     
            
        
      int i=1;
        
      while(flag !=1 && i<n) {    
            for (int j=0;j<n;j++) {
                
               
                if(arr[i][j] < arr[i-1][j]){
                   
                    flag=1;
                    break;
                }   
               
            }
                
            i++;
    
    
    }
           
                    
    
    if(flag==0)
    {
        cout<<"YES"<<endl;
        
        
    }
        
     else if(flag==1)
         cout<<"NO"<<endl;
    
    
    }
        
    
    
    
    
    return 0;
}

