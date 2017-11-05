//Author: Somaiah Thimmaiah Balekuttira
//Date : 01/nov/2017
//Time : 1:25 AM
//Max Min

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K, unfairness = INT_MAX;
    cin >> N >> K;
    vector<int> lists;
    int temp;
    for (int i=0; i<N; i++){
        cin>>temp;
        lists.push_back(temp);
    }
    
    
    sort(lists.begin(),lists.end());
    
  
    for(int i=0;i<lists.size()-K +1;i++) {
    
        
        temp=lists[i+K-1]-lists[i];
   
        if(temp <= unfairness)
            unfairness=temp;
        
        
    }
    

    cout << unfairness << "\n";
    return 0;
}

