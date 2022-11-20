#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int x;
    long y;
    char a;
    float z;
    double b;
    cin>>x>>y>>a>>z>>b;
    cout<<x<<endl<<y<<endl;
    printf("%c\n",a);
    printf("%.3f\n",z);
    printf("%.9lf\n",b);
    return 0;
}

