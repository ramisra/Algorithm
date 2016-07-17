#include<iostream>
#include<list>

using namespace std;

class Graph{

    int V;
    list<int> *adj;
    bool isCyclic(int v,bool visited[]);

    public:

        Graph(int V);
        void add_edge(int v,int w);
        bool cyclic();
};

Graph::Graph(int V){

    this->V=V;
    adj=new list<int>[V];
}
void Graph::add_edge(int v,int w){

    adj[v].push_back(w);
}
bool Graph::isCyclic(int v,bool *visited){

    if(visited[v]==true){
        return true;
    }else{

        visited[v]=true;
        list<int> ::iterator itr;
        for(itr=adj[v].begin();itr!=adj[v].end();itr++){

            if(!visited[v]){

                isCyclic(*itr,visited);
            }
        }
    }
    return false;
}
bool Graph::cyclic(){

    bool *visited= new bool[V];
    for(int i=0;i<V;i++){
        visited[i]=false;
    }
    for(int i=0;i<V;i++){

        if(isCyclic(i,visited)){
            return true;
        }
    }
    return false;

}
int main(){
 Graph g(4);
    g.add_edge(0, 1);
    g.add_edge(0, 2);
    g.add_edge(1, 2);
    g.add_edge(2, 0);
    g.add_edge(2, 3);
    g.add_edge(3, 3);

    if(g.cyclic())
        cout << "Graph contains cycle";
    else
        cout << "Graph doesn't contain cycle";
    return 0;

}
