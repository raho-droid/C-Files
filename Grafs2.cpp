#include <iostream>

using namespace std;

class node{
	
	public:
		int data;
		node *link;
}*newNode,*newNode1,*newNode2;

class vertexlist{
	public:
		node *vlisthead;
};

class graph{
	
	public:
		int v;
		vertexlist *vl;
};

graph* createGraph(int n){
	
	graph* vlist= new graph;
	vlist->v= n;
	vlist->vl= new vertexlist[n+1];
	
	for(int i=0;i<n+1;i++){
		vlist->vl[i].vlisthead= NULL;
	}
}

node* NewNode(int x){
	
	newNode= new node;
	newNode->data= x;
	newNode->link= NULL;
	return newNode;
}
void insertEdge(graph *G,int v1,int v2){
	newNode1= NewNode(v1);
	newNode2= NewNode(v2);
	
	if(G->vl[v1].vlisthead==NULL){
	G->vl[v1].vlisthead=newNode2;
	}
	else{
		newNode1->link= G->vl[v1].vlisthead;
	}
	
	if(G->vl[v2].vlisthead==NULL){
		G->vl[v2].vlisthead=newNode1;
	}
	else{
		newNode1->link=G->vl[v2].vlisthead;
		G->vl[v2].vlisthead= newNode1;
	}
}

int main(){
	
	int v,e;
	int edge[e][2];
	cout<<"Dugum sayisi : "<<endl;
	cin>>e;
	for(int i=0;i<e;i++){
		cout<<"v1 : "<<endl;
		cin>>edge[i][0];
		cout<<"v2 : "<<endl;
		cin>>edge[i][1];
		insertEdge(G,edge[i][0],edge[i][1]);
	}
	
	for(int i=0;i<v;i++){
		cout<<endl;
		while(G->vl[i+1].vlisthead!=NULL){
			cout<<G->vl[i+1].vlisthead->data<<" ";
			G->vl[i+1].vlisthead=G->vl[i+1].vlisthead->link;
		}
	}
	
	return 0;
}
