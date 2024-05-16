Graphs and Algorithms in C++
Overview

This assignment involves creating a graph and implementing various algorithms to work with it, using C++.
Classes
Graph

This class represents a weighted/unweighted graph using a square matrix.
Private Fields

    neighborMatrix (2D Array)
    Cycles (boolean)
    negativeCycles (boolean)

Constructors

    Inline constructor to initialize the graph.

Public Functions

    void loadGraph(vector<vector<int>>& matrix): Loads the graph from a 2D array representing the graph after checking that it's a square matrix.

    void printGraph(): Prints the matrix representing the graph.

    int getEdgeWeight(size_t a, size_t b) const: Returns the edge weight between two vertices in the graph. This function does not check if the graph is weighted or not; it simply returns the value in the matrix that represents the edge between the two vertices.

    size_t get_numOfVertex(): Returns the number of vertices in the graph, which is simply the number of rows/columns in the neighborMatrix.

    bool hasCycles() const: Returns the value of the Cycles variable.

    bool hasNegativeCycles() const: Returns the value of the negativeCycles variable.

    void setCycles(bool value): Sets the value of the Cycles variable.

    void setNegativeCycles(bool value): Sets the value of the negativeCycles variable.

Algorithms

This class contains various algorithms to work with the Graph class. Some algorithms are private helper functions used within the public functions.
Private Functions

    static vector<size_t> bellman_ford(Graph& g, size_t start): Implements the Bellman-Ford algorithm for finding the shortest path between two vertices. This function is used in the shortestPath function, with the starting vertex set to 0.

    static bool DFS(Graph g, size_t current, vector<bool>& visited, vector<size_t>& parent, vector<size_t>& cycle): Implements the Depth-First Search (DFS) algorithm. It checks for cycles in the graph, returning a boolean value.

    static int RelaxEdges(Graph g, vector<int>& distances, vector<size_t>& path): Implements the edge relaxation step used in the Bellman-Ford algorithm. This function gets a graph, an array that includes the distances from the starting vertex, and an array that includes the vertices of the path. More information on edge relaxation can be found here.

    static bool isBiPartiteBFS(Graph& g, size_t start, vector<int>& color, vector<size_t>& setA, vector<size_t>& setB): Uses the Breadth-First Search (BFS) algorithm to check if the given graph is bipartite. The function uses an array of integers to represent the colors (1 for blue, 0 for white, and -1 for red) and two arrays for the two sets of vertices. It returns true if the graph is bipartite and false otherwise.

Public Functions

    static bool isConnected(Graph g): Returns true if the graph is connected; otherwise, returns false.

    static string shortestPath(Graph g, size_t a, size_t b): Returns the shortest path (or the most lightweight path in case the graph is weighted) between two vertices. If there is no route, the function returns -1.

    static string isContainsCycle(Graph g): Prints and returns a cycle in the graph if one exists; otherwise, returns 0.

    static string isBipartite(Graph g): Returns a string representing the partition of the graph into a bipartite graph if possible; otherwise, returns 0.

    static string negativeCycle(Graph g): Tries to find and print a negative cycle (a cycle whose sum of the weights of the edges is negative). If such a cycle exists, it returns 1; otherwise, it returns 0.

Running the Program

    make run: Runs ./demo (demo.cpp), which is a simple test for the program.
    make test: Runs a more advanced test.
    make tidy: Ensures that the code is clean.
    make valgrind: Ensures there are no memory leaks.

Thank you for reading.
