#include <iostream>
#include <math.h>
using namespace std;

int main(void){
    int n;
    cin>>n;
    int a;
    cin>>a;
    int res = 0;
    while(--n){
        int b;
        cin>>b;
        res = max(res, b-a>0 ? b-a : a-b);
        a = b;
    }
    cout<<res<<endl;
    return 0;
}
