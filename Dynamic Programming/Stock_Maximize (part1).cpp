//Author: Somaiah Thimmaiah Balekuttira
//Date : 31/oct/2017
//Time : 11:35 PM
//Stock Buy Sell to Maximize Profit
//Constraint : Once you buy a stock you cant buy another stock till you sell this one.








#include <bits/stdc++.h>

using namespace std;




int main(){
	
	int a=4;
	int arr[10];
	cout<<"Enter the values of the stock for next "<< a <<"days"<<endl;
	for(int i=0;i<a;i++){
		cin>>arr[i];
		
	}
	
	int max_now=arr[a-1];
	int buy;
	int sell;
	int profit=0;
	int j=a-2;
	while(j>=0) {
	
		
		if( j!=0 && (arr[j] < max_now && arr[j -1] > arr[j])) {
			buy=arr[j];
			cout<<"Buy at price :" <<arr[j] <<endl;
			sell=max_now;
			cout<<"Sell at price : " <<sell<<endl;
			profit+=(sell-buy);	
			max_now=arr[j-1];
			j=j-2;
		//	cout<<"max_now  : "<<max_now<<"and j at : "<<j<<endl;
			

		}
		
		else if (arr[j] < max_now && j==0) {
			
		buy=arr[0];
		cout<<"Buy at price : "<<arr[j]<<endl;
		sell=max_now;
		cout<<"Sell at price : " << sell<<endl;
		profit+=(sell-buy);
		j--;
		}


		else if(arr[j] > max_now){
		
			
			max_now=arr[j];
		}
	
		else{
		

			j--;
		}
	}



	cout<<"Profit obtained is  : "<<profit<<endl;










}
		
