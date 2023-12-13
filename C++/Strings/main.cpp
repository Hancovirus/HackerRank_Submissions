#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    cin>>a>>b;
    int lena,lenb;
    lena=a.size();
    lenb=b.size();
    string c;
    c=a+b;
    char tg;
    tg=a[0];
    a[0]=b[0];
    b[0]=tg;
    cout<<lena<<" "<<lenb<<endl;
    cout<<c<<endl;
    cout<<a<<" "<<b;
    return 0;
}
