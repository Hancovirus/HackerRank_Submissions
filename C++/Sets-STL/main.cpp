#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int cases;
    cin>>cases;
    set<int> arr;
    set<int>::iterator itr;
    int type;
    int temp;
    for (int i=0;i<cases;i++){
        cin>>type;
        cin>>temp;
        if (type == 1) {          
            arr.insert(temp);
        } else if (type == 2) {
            itr=arr.find(temp);
            if (itr!=arr.end()) {
                arr.erase(temp);
            }
        } else {
            itr=arr.find(temp);
            if (itr!=arr.end()) {
                cout<<"Yes"<<endl;
            } else {
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}



