//Author: Somaiah Thimmaiah Balekuttira
//Date : 31/oct/2017
//Time : 11:47 PM
//Stock Buy Sell to Maximize Profit
//Constraint : You can buy multiple stocks without selling.








#include <bits/stdc++.h>

using namespace std;




int main(){
	
	int times;
	cin>>times;
	while(times--){
	
		int a;
		cin>>a;
		int value[a];
		//cout<<"Enter the values of the stock for next "<< a <<"days"<<endl;
		for(int i=0;i<a;i++){
			cin>>value[i];
		
		}
	
		int max_now=0;

		long profit=0;
		

		for(int i=a-1;i>=0 ;i--) {
			
			if(max_now <= value[i]) {
				
				max_now=value[i];	
			}
		
			profit+=(max_now-value[i]);

		}

		
		cout<<profit<<endl;

	}







}
