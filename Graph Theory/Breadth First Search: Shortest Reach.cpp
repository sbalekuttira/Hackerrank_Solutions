//Author: Somaiah Thimmaiah Balekuttira
//Date : 28/oct/2017
//Time : 04:10 PM
//BFS





#include <bits/stdc++.h> 

using namespace std;



class graph
{

int v;

list <int > *adj;

bool *visited;

public:

	graph(int num)
	{
		this->v=num;
		adj=new list<int>[v+1];
		visited=new bool[v+1];


	}


	void addedge(int a , int b)
	{
		adj[a].push_back(b);
		adj[b].push_back(a);

	}

	void bfs(int source)
	{

		int dist[v+1];
		for (int i=0;i<=v;i++)
		{
			dist[i]=0;

		}

		for (int i=0; i<=v; i++)
		{

			visited[i]=false;


		}


		queue <int> qu;
		list <int> :: iterator it;
		visited[source]=true;
		qu.push(source);



		while(!qu.empty())
		{

			int current=qu.front();
			qu.pop();
			
			
			for(it=adj[current].begin();it!=adj[current].end();it++)
			{
				if(!visited[*it])
				{

				dist[*it]+=(dist[current]+6);	
				visited[*it]=true;
				qu.push(*it);
				}
			}

			


		}



		for(int i=1;i<=v;i++)
		{

			if(i!=source)
			{
				if(dist[i]==0)
					cout<<"-1"<<" ";
			

			else
				cout<<dist[i]<<" ";
		
			}
		

		}
		cout<<endl;

	}





};


int main()
{






int times;
cin >> times;

while(times--)
{
int a;
int b;
cin>>a>>b;

graph g(a);

for(int i=0;i<b;i++)
{
	int c,d;
	cin>>c>>d;
g.addedge(c,d);

}
int source;
cin>>source;
g.bfs(source);



}


}
