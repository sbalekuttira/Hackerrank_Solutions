
//Author: Somaiah Thimmaiah Balekuttira
//Date : 02/nov/2017
//Time : 01:53 PM
//Electronic Shop

#include <bits/stdc++.h>

using namespace std;



int main() {
    int s;
    int n;
    int m;
    int max=0;
    cin >> s >> n >> m;
    vector<int> keyboards(n);
    for(int keyboards_i = 0; keyboards_i < n; keyboards_i++){
       cin >> keyboards[keyboards_i];
    }
    vector<int> drives(m);
    for(int drives_i = 0; drives_i < m; drives_i++){
       cin >> drives[drives_i];
    }
    
    sort(drives.begin(),drives.end());
    sort(keyboards.begin(),keyboards.end());
    int flag=0;
    if(drives[0] + keyboards[0] > s){
        cout<<"-1";
        flag=1;
    }
    else
    {
        
        for(int i=0;i<keyboards.size();i++){
            for(int j=0;j<drives.size();j++){
                   
                if(keyboards[i] + drives[j] <= s && keyboards[i]+drives[j] >= max)
                    max=keyboards[i]+drives[j];
            }
        }
                
        
    }
    if(flag==0)
    cout<<max;
    
    return 0;
}

