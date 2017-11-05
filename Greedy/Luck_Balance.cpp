//Author: Somaiah Thimmaiah Balekuttira
//Date : 01/nov/2017
//Time : 12:30 AM
//Luck Balance


#include <bits/stdc++.h>

using namespace std;


int main() {
    int games;
    cin>>games;
    int max_loses;
    cin>>max_loses;
    int luck_balance=0;
    vector <int> score;
    int temp;
    int a,b;
    for(int i=0; i< games ; i++ ){
        cin>>a;
        cin>>b;
        if(b==1)
        {
            score.push_back(a);
        }
        else
            luck_balance+=a;
        
        
    }
        
    sort(score.rbegin(),score.rend());
    for(int i=0;i<score.size();i++){
        
        if(i>=max_loses)
        {
            luck_balance-=score[i];
            
        }
        else
            luck_balance+=score[i];
        
        
    }
        
        
    
    cout<<luck_balance;
    return 0;
}

