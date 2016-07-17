# include <iostream>

using namespace std;
struct AdjListNode {

    int dest;
    struct AdjListNode *next;
};

struct AdjList{

    struct AdjListNode *head;
};

struct graph{

    int V;
    struct AdjList *arr;
};
struct AdjListNode * create_node(int dest){

    struct AdjListNode *temp=new AdjListNode;
    temp->dest=dest;
    temp->next=0;

    return temp;
}


struct graph * create_graph(int vertices){

    struct graph* g=new struct graph;
    g->V=vertices;
    g->arr= new struct AdjList[vertices];
    int i;
    for(i=0;i<vertices;i++){

        g->arr[i].head=0;
    }
    return g;
}
void addEdge(graph * g,int src,int dest){

    struct AdjListNode * edge=create_node(dest);
    edge->next=g->arr[src].head;
    g->arr[src].head=edge;

}

void print(struct graph * g){

    struct AdjListNode* pcrawl;
    int i;
    for(i=0;i<g->V;i++){
        pcrawl=g->arr[i].head;
        pcrawl=pcrawl->next;
        while(pcrawl){
            cout<<pcrawl->dest;
            pcrawl=pcrawl->next;
        }
        cout<<endl;
    }
}

int main(){
 int V = 5;

 graph *g=create_graph(V);
    addEdge(g, 0, 1);
    addEdge(g, 0, 4);
    addEdge(g, 1, 2);
    addEdge(g, 1, 3);
    addEdge(g, 1, 4);
    addEdge(g, 2, 3);
    addEdge(g, 3, 4);
    print(g);

}
