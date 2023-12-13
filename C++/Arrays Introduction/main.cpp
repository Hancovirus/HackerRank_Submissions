#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int a[n];
    for (int k=0;k<n;k++){
        cin>>a[k];
    }
    int i,j,tg;
    j=n-1;
    i=0;
    while (j>i) {
        tg=a[i];
        a[i]=a[j];
        a[j]=tg;
        j--;
        i++;
    }
    for (int k=0;k<n;k++){
        cout<<a[k]<<" ";
    }
    return 0;
}
