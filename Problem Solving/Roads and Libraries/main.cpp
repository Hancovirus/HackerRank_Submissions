#include <bits/stdc++.h>
using namespace std;

void visit(int i, map<int, vector<int>>& connect, int &totalCities, vector<bool> &visited) {
    visited[i]=true;
    for (int j : connect[i]) {
        if (!visited[j]) {
            totalCities++;
            visit(j, connect, totalCities, visited);
        }
    }
}

long roadsAndLibraries(int n, int c_lib, int c_road, vector<vector<int>> cities) {
    if (c_lib < c_road) {
        long ans=long(n)*long(c_lib);
        return ans;
    }
    long cost = 0;
    map<int, vector<int>> connect;
    for (vector<int> i : cities) {
        connect[i[0]-1].push_back(i[1]-1);
        connect[i[1]-1].push_back(i[0]-1);
    }
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            int totalCities = 1;
            visit(i, connect, totalCities, visited);
            cost += c_road * (totalCities - 1) + c_lib;
        }
    }
    return cost;
}

int main() {
    int k;
    cin>>k;
    while (k--) {
        int n,m,c_lib,c_road;
        cin>>n>>m>>c_lib>>c_road;
        vector<vector<int>> cities(m, vector<int>(2));
        for (int i=0; i<m; i++) {
            cin>>cities[i][0]>>cities[i][1];
        }
        cout<<roadsAndLibraries(n, c_lib, c_road, cities)<<"\n";
    }
}
