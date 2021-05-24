#include
<iostream>
using namespace std;


int v;

struct node {
	int vertex_no;
	int weight;
	node* next;

};
struct list {
	node* head;
}**adj;

void add_node(int s, int d,int w) {
	node* src, * des, * temp;

	if (adj[s]->head == NULL) {
		src = new node;
		src->vertex_no = s;
		src->weight = 0;
		src->next = NULL;
		adj[s]->head = src;
	}

	des = new node;
	des->vertex_no = d;
	des->weight = w;
	des->next = NULL;
	temp = adj[s]->head;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = des;

}

void print_graph(int v) {
	for (int i = 0; i < v; i++) {
		node* p = adj[i]->head;
		p = p->next;
		cout << "Adjacent sides of vertex " << i << " : \n";
		while (p != NULL) {
			cout <<"vertex "<< p->vertex_no<<" & weight "<<p->weight<<"--->";
			p = p->next;
		}
		cout << endl;
	}
}

void kruskal() {

}

int main() {
	int i, v, n, ad_side,w;

	cout << "Enter the no. of vertices :";
	cin >> v;

	adj = new list * [v];

	for (i = 0; i < v; i++) {
		adj[i] = new list;
		adj[i]->head = NULL;
	}

	for (i = 0; i < v; i++) {
		cout << "\nEnter no of adjacent sides for Vertex ->" << i << " : ";
		cin >> n;
		while (n > 0) {
			cout << "\tEnter the adjacent side of Vertex " << i << " and weight : ";
			cin >> ad_side>>w;
			add_node(i, ad_side,w);
			n--;
		}
	}

	print_graph(v);		//to print the graph

}
