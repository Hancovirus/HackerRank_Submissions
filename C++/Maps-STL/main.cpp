#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int k,type,score;
    string name;
    cin>>k;
    map<string, int> m;
    map<string, int>::iterator itr = m.begin();
    for (int i = 0 ; i<k ; i++) {
        cin>>type>>name;
        if (type == 1 ) {
            cin>>score;
            itr=m.find(name);
            if (itr == m.end()) {
                m.insert(make_pair(name, score));
            }else {
                itr->second+=score;
            }
        } else if (type == 2) {
            m.erase(name);
        } else if (type == 3) {
            itr=m.find(name);
            if (itr != m.end()){
                cout<<itr->second<< endl;
            } else {
                cout<<"0"<<endl;
            }
        }
    }
    return 0;
}



