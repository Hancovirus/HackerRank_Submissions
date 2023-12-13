#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int k;
    cin>>k;
    vector<int> arr;
    int num;
    for (int i=0;i<k;i++) {
        cin>>num;
        arr.push_back(num);
    } 
    sort(arr.begin(),arr.end()); 
    for (int i=0;i<k;i++) {
        cout<<arr[i] <<" ";
    }
    return 0;
}
