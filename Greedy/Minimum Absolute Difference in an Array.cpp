//Author: Somaiah Thimmaiah Balekuttira
//Date : 01/nov/2017
//Time : 06:50 AM
//Minimum Absolute Difference in an Array



#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    int min_def=INT_MAX;
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    
    sort(arr.begin(), arr.end() );
    
    
    int temp;
    for(int i=0;i<arr.size()-1;i++)
    {
        if(arr[i]-arr[i+1] < 0) {
           
                temp=(arr[i]-arr[i+1])*-1;
                
            }   
            
            else 
            {
                temp=(arr[i]-arr[i+1]);
                
            }
          
            if(temp <= min_def)
                min_def=temp;
    }
    
    
    
    cout << min_def << endl;
    return 0;
}

