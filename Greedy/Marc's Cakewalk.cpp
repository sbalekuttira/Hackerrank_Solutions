//Author: Somaiah Thimmaiah Balekuttira
//Date : 01/nov/2017
//Time : 12:44 AM
//Marc's Cakewalk


#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> calories(n);
    long int total_miles=0;
    for(int calories_i = 0; calories_i < n; calories_i++){
       cin >> calories[calories_i];
    }
    
    sort(calories.rbegin(),calories.rend());
    for(int i=0;i<calories.size();i++){
        
        total_miles+=(calories[i]*pow(2,i));
    }
        
    cout<<total_miles;
    
   
    return 0;
}

