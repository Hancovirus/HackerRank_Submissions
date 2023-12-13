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
    int cases;
    cin>>cases;
    vector<int>::iterator itr;
    int ntf;
    for (int i=0;i<cases;i++) {
        cin>>ntf;
        itr=find(arr.begin(),arr.end(),ntf);
        if (itr!=arr.end()) {
            cout<<"Yes "<<itr-arr.begin()+1<<endl;
        } else {
            cout<<"No ";
            for (int i=0;i<k;i++) {
                if (arr[i]>ntf) {
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
