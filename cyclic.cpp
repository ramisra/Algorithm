#include<iostream>

using namespace std;

class Graph{



    int V;
    list<int>* adj;
    bool isCyclicUtil(int v,bool visited[],bool rs[]);


     public:
    Graph(int v);
    void addEdge(int v,int w);
    bool isCyclic();
};
Graph::Graph(int V){

    this->V=V;
    adj=new list<int>[V];
}

void Graph::addEdge(int v,int w){

    adj[v].push_back(w);
}
bool Graph::isCyclicUtil(int v,bool *visited,bool *rec){

    if(visited[v]==false){

        visited[v]=true;
        rec[v]=true;

        list<int>::iterator i=adj[v].begin();
        for(;i!=(adj[v].end());i++){

                /**calls to adjacent vertices and checks whether it is cyclic or not **/
            if(!visited[*i] && isCyclicUtil(*i,visited,rec)){

                    return true;
                    }
            else if(rec[*i]){
                        /**checks for back edges and print the location where it doexist **/
                        return true;
                        }
        }
    }
    rec[v]=false;
    return false;
}
bool Graph::isCyclic(){

    bool *visited=new bool[V];
    bool *rec=new bool[V];

    for(int i=0;i<V;i++){

        visited[i]=false;
        rec[i]=false;
    }

    for(int i=0;i<V;i++){
        if(isCyclicUtil(i,visited,rec))
                  for(int i=0;i<V;i++){

        cout<<visited[i];

        cout<<rec[i];
    }
            return true;
    }


}
int main(){

 Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    if(g.isCyclic())
        cout << "Graph contains cycle";
    else
        cout << "Graph doesn't contain cycle";
    return 0;


}
