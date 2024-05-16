#include <iostream>
#include <vector>
#include "Graph.hpp"

using namespace std;
namespace ariel{
    void Graph::loadGraph(vector<vector<int>>& graph){
        for(size_t i=0;i<graph.size();i++){
            if(graph.size() != graph[i].size()){
                cout << "the matrix is not square" << endl;
                return;
            }
            
        }
        neighborsMatrix = graph;
        this->NegativeCycles = false;
        this->Cycles = false;
    }

    void Graph::printGraph(){
        for(size_t i=0; i < this->neighborsMatrix.size(); i++){
            for(size_t j = 0; j<this->neighborsMatrix[i].size(); j++){
                cout << this->neighborsMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    size_t Graph::get_numOfVertex(){
        return neighborsMatrix.size();
    }

    int Graph::getEdgeWeight(size_t verA, size_t verB) const{
        return this->neighborsMatrix[verA][verB];
    }

    bool Graph::hasCycles() const{
        return this->Cycles;
    }

    bool Graph::hasNegativeCycles() const{
        return this->NegativeCycles;
    }

    void Graph::setCycles(bool value){
        this->Cycles = value;
    }

    void Graph::setNegativeCycles(bool value){
        this->NegativeCycles = value;
        this->Cycles = value;
    }
}