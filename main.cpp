//Name: Keisuke Kato

#include "Graph.h"
#include <iostream>
using namespace std;

int main()
{
	char playA;
	bool graphCheck;
	int V, userInput;

	cout << "Graph Connectivity Checker!" << endl;

	do
	{
		//check what type of graph it is
		cout << "What type of graph are you checking? Directed(1) or Undirected(0)" << endl;
		cin >> graphCheck;

		//check for how many vertices
		cout << "How many vertices does the graph have?" << endl;
		cin >> V;
		Graph g1(V);

		//add edges depending on adjacency matrix
		cout << "Enter each row of the adjacency matrix *NOTE:ONLY NUMBERS!* (seperated by spaces)" << endl;
		for (int i = 0; i < V; i++)
		{
			for (int j = 0; j < V; j++)
			{
				cin >> userInput;
				for (int k = 0; k < userInput; k++)
				{
					if (graphCheck == 1)
						g1.addEdgeDir(i, j);
					else if (graphCheck == 0)
						g1.addEdgeUnDir(i, j);
				}
			}
		}

		//check connecitivity
		if (graphCheck==0)
		{
			if (g1.isConnectedUnDir(V))
				cout << "The Graph is Connected" << endl;
			else
				cout << "The Graph is not Connected" << endl;
		}
		else if(graphCheck==1)
		{
			if (g1.isConnectedDir(V))
				cout << "The Graph is Connected" << endl;
			else
				cout << "The Graph is not Connected" << endl;
		}

		cout << "Would you like to try another graph (Y/N) ?" << endl;
		cin >> playA;
		
	} while (playA == 'y' || playA == 'Y');
	
	//end.
	cout << "Program Terminate." << endl;
}