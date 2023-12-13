#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Node {
    int data;
    vector<Node*> connected;

    Node(int d) {
        data = d;
    }
};

void addEdge(Node* x, Node* y) {
    x->connected.push_back(y);
    y->connected.push_back(x);
}

int ShortestPath(vector<Node*> vc, vector<bool> visited, vector<int> distance, int start, int end) {
    if (start == end) {
        return 0;
    }

    queue<Node*> q;
    visited[start] = true;
    q.push(vc[start]);

    while (!q.empty()) {
        int temp = q.front()->data;
        q.pop();

        for (Node* neighbour : vc[temp]->connected) {
            if (!visited[neighbour->data]) {
                visited[neighbour->data] = true;
                distance[neighbour->data] = distance[vc[temp]->data] + 1;
                q.push(neighbour);

                if (neighbour->data == end) {
                    return distance[neighbour->data];
                }
            }
        }
    }
    return -1;
}

void solution() {
    int n,m,x,y,start;
    cin>>n>>m;
    vector<Node*> vc;
    vector<bool> visited;
    vector<int> distance;
    for (int i=0;i<n;i++) {
        Node* newNode = new Node(i);
        vc.push_back(newNode);
        visited.push_back(false);
        distance.push_back(0);
    }

    for (int i=0;i<m;i++) {
        cin>>x>>y;
        addEdge(vc[x-1], vc[y-1]);
    }

    cin>>start;

    for (int i=0;i<n;i++) {
        if (i != start - 1) {
            int temp = ShortestPath(vc, visited, distance, start - 1, i);
            if (temp != -1) {
                temp *= 6;
            }
            cout << temp <<" ";
        }
    }
    cout<<"\n";
}

int main() {
    int q;
    cin>>q;
    while(q--){
        solution();
    }
}
