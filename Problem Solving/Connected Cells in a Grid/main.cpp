#include <iostream>

using namespace std;

int n,m;

int visit(int i, int j, int arr[][10]) {
    if (i<0||i>m||j<0||j>n||arr[i][j]==0) {
        return 0;
    } else {
        int found=1;
        arr[i][j] = 0;
        found += visit(i-1, j-1, arr);
        found += visit(i-1, j, arr);
        found += visit(i-1, j+1, arr);
        found += visit(i, j+1, arr);
        found += visit(i, j-1, arr);
        found += visit(i+1, j+1, arr);
        found += visit(i+1, j, arr);
        found += visit(i+1, j-1, arr);
        return found;
    }
    return 0;
}

int main() {
    int x;
    cin>>n>>m;
    int arr[10][10];
    for (int i=0;i<10;i++) {
        for (int j=0;j<10;j++) {
            arr[i][j] = 0;
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin>>x;
            arr[i][j] = x;
        }
    }
    int i=0;
    int j=0;
    int max = 0;
    while (i<m && j<n) {
        while (arr[i][j] == 0) {
            j++;
            if (j == n) {
                i++;
                j=0;
            }
            if (i == m) {
                break;
            }
        }
        if (i == m) {
            break;
        }
        int found=visit(i,j,arr);
        if (found > max)
            max=found;
    }
    cout << max;
}
