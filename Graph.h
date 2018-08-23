//Name: Keisuke Kato
#include <iostream>
#include <list>
#include <queue>
using namespace std;
/*
* Class Declaration
*/
class Graph
{
private:
	int V;
	list<int> *adj;
public:
	Graph(int V)
	{
		this->V = V;
		adj = new list<int>[V];
	}
	void addEdgeDir(int v, int w);
	void addEdgeUnDir(int v, int w);
	void BFS(int x, bool visited[]);
	Graph ReverseGraph();
	bool isConnectedDir(int V);
	bool isConnectedUnDir(int V);
};