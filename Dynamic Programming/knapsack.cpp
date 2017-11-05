//Author: Somaiah Thimmaiah Balekuttira
//Date : 31/oct/2017
//Time : 02:10 AM
//Unbounded Knapsack


#include <bits/stdc++.h>

using namespace std;




int maxs (int a, int b)
{
	if (a > b)
		return a;


return b;
}

int knapsack(vector <int> digits,int A,int sum)
{

	std::vector<int>:: iterator it;

	A=digits.size();

	int knapsack[A][sum+1];

	for(int i=0; i<A ;i++)

		for(int j=0;j<sum+1;j++)
			knapsack[i][j]=0;	


	for(int i=0; i<A ;i++)
	{
		for(int j=0;j<sum+1;j++)
		{
			if(i==0)
			{
				if(j % digits[i] == 0 && j!=0)
					knapsack[i][j]=1;
			}	


			else
			{
				if(j / digits[i] > 0  && j%digits[i]==0)
				{

					knapsack[i][j]=1;

				}

				else 
				{
				
					knapsack[i][j]=maxs(knapsack[i-1][j] , knapsack[i][j - digits[i-1]]);
			
				}

			
			}
		}
	
	}		


	
	int flag=0;
	 
	for(int j=sum ;j >= 0 ; j--)
	{
		if (knapsack[A-1][j] == 1)
		{
			flag=1;
			return j;
					

		}
	}

	if (flag==0)
	{
		return 0;
	}


	return 0;



}


int preprocess()
{

	std::vector<int> digits;
	int flag=0;
	int temp;
	int A;
	int sum;
	cin>>A;
	cin>>sum;
	for(int i =0 ; i < A ; i++ )
	{
		cin>>temp;
		if(temp==1)
		{	
			flag=1;
		
		}

		else if (sum % temp ==0)
		{
	
			flag=1;
	
		}

		else if (temp < sum && count(digits.begin(), digits.end() , temp) ==0) 
		{

		digits.push_back(temp);
		}

		else
		{

		continue;


		}

	}
	
	if(flag==1)
	{
		return sum;
	}

	else
	{
 
		return knapsack(digits,A,sum);
	}

}






int main()
{

	int test_cases;
	cin>>test_cases;


	while(test_cases--)
	{


	cout<<preprocess()<<endl;

	}


	return 0;







}
