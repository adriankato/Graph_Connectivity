# Graph_Connectivity
Find the connectivity of directed and undirected graphs


CMPSC360 – Project						Name: Keisuke Kato

# Introduction
This project is an assignment from the Computer Science Discrete Mathematics taught by Professor Naseem Ibrahim. The main goal for this project is to understand connectivity. I will be going through the two algorithms I have chosen and analyzed for undirected and directed graph. I will also go through the pseudo-code for each algorithm and the time complexity analysis for each. Finally, I will show a sample output for inputs I have tested.

# Problem
To create a program that checks the connectivity of an undirected or directed graph by analyzing the adjacency matrix given by the user.

# Possible Algorithms
There are two algorithms for undirected and directed graphs that I have analyzed for the project, BFS (Breadth First Search) and DFS (Depth First Search).

# Time complexity analysis of possible algorithms
For the time complexity analysis for BFS and DFS, we consider the ‘n’ to be number of vertices or nodes since the only inputs would be the number of vertices. If we look at the pseudocode and analyze only the loops since constants don’t matter for the worst-case scenario, we can focus on the loops for each algorithm.

In the case of BFS, for the undirected algorithm you have the first for loop that runs n times. In the while loop, there is a for loop that runs n times for 2 operators. The final for loops go through each node to check if all nodes are visited which will run n times again. For each for loop there is an addition loop that ends the loop and before the while loop there are two operations. In total the f(n) is 4n+5, which is O(n). The directed BFS connectivity algorithm has a similar algorithm except you reverse the graph and have the BFS algorithm run again. The function f(n) is 9n+11, which it O(n).

In the case of DFS, for the undirected algorithm the first for loop loops n times. The second for loop loops 2n times as do the final for loop. Each for loop has an extra loop at the end and there are 2 operations before the second for loop. This adds up to f(n) is 4n+5, which is O(n). Similarly, for the directed graph we flip the graph and do the same algorithm twice which gives it 9n+11, which is O(n).

# Breadth First Search
To pick between which algorithm to choose, I had to look at the problem even harder. If you think about connectivity, you want to check if you can reach every node, that is for every node adjacent to the current node. In this case, it is better to use BFS to check it since BFS examines every node at one level before advancing to the next level. You want to look at every child node and see if it is connected, not how far the descendent goes. In conclusion, I picked BFS over DFS for the purposes of the project.


References

https://www.sanfoundry.com/cpp-program-check-undirected-graph-connected-bfs/
https://www.sanfoundry.com/cpp-program-check-directed-graph-connected-bfs/
https://www.sanfoundry.com/cpp-program-check-undirected-graph-connected-dfs/
https://www.sanfoundry.com/cpp-program-check-directed-graph-connected-dfs/

