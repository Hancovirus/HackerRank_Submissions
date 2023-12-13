#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'powerSum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER X
 *  2. INTEGER N
 */

int powersum (int x, int sums[], int index, int size) {
    if (x == 0) {
        return 1;
    }
    else if (index == size) {
        return 0;
    }
    int count = 0;
    
    count += powersum(x, sums, index+1, size);
    count += powersum(x - sums[index], sums , index+1, size);
    
    return count;
}
int main() {
    int num, root;
    cin >> num >> root;
    int sums[(int)pow(num, 1.00/root)];
    int index = 0;
    for (int i=1;i<=pow(num, 1.00/root);i++) {
        sums[index] = (pow(i, root));
        index++;
    }
    cout << powersum(num, sums, 0, (int)pow(num, 1.00/root));
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
