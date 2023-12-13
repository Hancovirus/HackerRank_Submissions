#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
    int e=0;
    if (a>e){
        e=a;
    }
    if (b>e){
        e=b;
    }
    if (c>e){
        e=c;
    }
    if (d>e){
        e=d;
    }
    return e;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
