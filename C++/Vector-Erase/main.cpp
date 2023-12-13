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
    int dlt;
    cin>>dlt;
    arr.erase(arr.begin()+dlt-1);
    int dlt1,dlt2;
    cin>>dlt1>>dlt2;
    arr.erase(arr.begin()+dlt1-1,arr.begin()+dlt2-1);
    cout<<arr.size()<<endl;
    for (int i=0;i<arr.size();i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
