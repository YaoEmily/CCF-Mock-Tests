#include <iostream>
using namespace std;

int main(void){
    int r, y, g;
    cin>>r>>y>>g;
    int n;
    cin>>n;
    long long sum = 0;
    long long x1 = y, x2 = r+y, x3 = r+y+g;
    while(n){
        n--;
        int k, t;
        cin>>k>>t;
        if(k==0) sum += t;
        else{
            long long tmp;
            if(k==1) tmp = (r-t+sum+y)%x3; //红灯
            else if(k==2) tmp = (y-t+sum)%x3; //黄灯
            else tmp = (g-t+sum+r+y)%x3; //绿灯
            if(tmp<x1){
                sum += y+r-tmp;
            }
            else if(tmp<x2){
                sum = sum+y+r-tmp;
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
