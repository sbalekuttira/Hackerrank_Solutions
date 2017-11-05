//Author: Somaiah Thimmaiah Balekuttira
//Date : 01/nov/2017
//Time : 12:57 AM
//Greedy Florist

#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> c(n);
    int minimumCost;
    for(int c_i = 0; c_i < n; c_i++){
       cin >> c[c_i];
    }
    
    sort(c.rbegin(),c.rend());
    
    for(int i=0;i<k;i++)
    {
        minimumCost+=c[i];
        
    }
    int j=0;
    for(int i=k;i<n;i++)
    {
        if(i%k==0)
        {
            j++;
            
            
        }
        
        minimumCost+=(j+1)*c[i];
        
    }
    
    cout << minimumCost << endl;
    return 0;
}

