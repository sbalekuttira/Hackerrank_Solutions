
//Author: Somaiah Thimmaiah Balekuttira
//Date : 02/nov/2017
//Time : 10:50 PM
//Migratory Birds


#include <bits/stdc++.h>

using namespace std;



int main() {
    int n;
    cin >> n;
    int arr[6]={0,0,0,0,0,0};
    
    int index=0;
    int max_type=0;
    int temp;
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin>>temp;
       arr[temp]++;
        
    }
    
    
    
    for(int i=1;i<6;i++)
    {
        if(arr[i] > max_type){
            max_type=arr[i];
            index=i;
         }
    }
    
    cout << index << endl;
    
    
    return 0;
}

