//Name: Keisuke Kato
#include "Graph.h"
using namespace std;


// adding edge for undirected graph (both ways)
void Graph::addEdgeUnDir(int v, int w)
{
	adj[v].push_back(w);
	adj[w].push_back(v);
}

// adding the edge for directed graph (one way)
void Graph::addEdgeDir(int v, int w)
{
	adj[v].push_back(w);
}

// Breadth First Search algorithm
void Graph::BFS(int x, bool visited[])
{
	// Create an empty list with an interator
	list<int> L;
	list<int>::iterator i;

	// visit the node s and mark it and push it to the list
	visited[x] = true;
	L.push_back(x);

	while (!L.empty())
	{
		//retrieve the node in the front of the list and traverse through it
		x = L.front();
		L.pop_front();
		for (i = adj[x].begin(); i != adj[x].end(); ++i)
		{
			//if a node is not traversed, add it to the list and mark it
			if (!visited[*i])
			{
				visited[*i] = true;
				L.push_back(*i);
			}
		}
	}
}

// Reverse the function
Graph Graph::ReverseGraph()
{
	//Instantiate a new graph
	Graph g(V);

	//Iterate through the graph adding each node in reverse order
	for (int v = 0; v < V; v++)
	{
		list<int>::iterator i;
		for (i = adj[v].begin(); i != adj[v].end(); ++i)
		{
			g.adj[*i].push_back(v);
		}
	}
	return g;
}

//Function to check for connectivitiy
bool Graph::isConnectedDir(int V)
{
	//create new bool array
	bool *visited = new bool[V];

	//mark all as not visited
	for (int i = 0; i < V; i++)
		visited[i] = false;

	//call BFS function and if a node is not visited graph is not connected
	BFS(0, visited);
	for (int i = 0; i < V; i++)
		if (visited[i] == false)
			return false;
	
	//check again in reverse order (mainly for directed graph)
	Graph RevGraph = ReverseGraph();
	for (int i = 0; i < V; i++)
		visited[i] = false;
		
	RevGraph.BFS(0, visited);

	for (int i = 0; i < V; i++)
		if (visited[i] == false)
			return false;

	return true;
}

bool Graph::isConnectedUnDir(int V)
{
	//create new bool array
	bool *visited = new bool[V];

	//mark all as not visited
	for (int i = 0; i < V; i++)
		visited[i] = false;

	//call BFS function and if a node is not visited graph is not connected
	BFS(0, visited);
	for (int i = 0; i < V; i++)
		if (visited[i] == false)
			return false;

	return true;
}
