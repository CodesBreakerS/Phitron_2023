#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<pair<int, int>> v[N];
bool visited[N];

class Edge {
public:
    int a, b, w;

    Edge(int a, int b, int w) {
        this->a = a;
        this->b = b;
        this->w = w;
    }
};

class cmp {
public:
    bool operator()(Edge a, Edge b) {
        return a.w > b.w;
    }
};

int cnt = 0;
long long sum = 0;

void prims(int n, int s) {
    priority_queue<Edge, vector<Edge>, cmp> pq;
    pq.push(Edge(s, s, 0));
    vector<Edge> edgeList;

    while (!pq.empty()) {
        Edge parent = pq.top();
        pq.pop();
        int a = parent.a;
        int b = parent.b;
        int w = parent.w;

        if (visited[b]) continue;
        visited[b] = true;
        cnt++;
        edgeList.push_back(parent);

        for (int i = 0; i < v[b].size(); i++) {
            pair<int, int> child = v[b][i];
            if (!visited[child.first]) {
                pq.push(Edge(b, child.first, child.second));
            }
        }
    }

    
        edgeList.erase(edgeList.begin());
        for (Edge val : edgeList) {
            sum += val.w;
        }
        
}

int main() {
    int n, e;
    cin >> n >> e;


    memset(visited, false, sizeof(visited));

    while (e--) {
        int a, b, w;
        cin >> a >> b >> w;
        v[a].push_back({b, w});
        v[b].push_back({a, w});
    }

    prims(n, 1);

    if (cnt != n ) {
        cout << "-1";
    } else {
        cout << sum;
    }

    return 0;
}

