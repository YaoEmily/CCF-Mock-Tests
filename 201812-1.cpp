#include <iostream>
using namespace std;

int main(void){
    int r, y, g;
    cin>>r>>y>>g;
    int n;
    cin>>n;
    int sum = 0;
    while(n){
        n--;
        int k, t;
        cin>>k>>t;
        if(k==0||k==1){
            sum += t;
        }else if(k==2){
            sum += t;
            sum += r;
        }
    }
    cout<<sum<<endl;
    return 0;
}
