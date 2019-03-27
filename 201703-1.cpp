#include <iostream>
using namespace std;

int main(void){
    int n, k;
    cin>>n>>k;
    int sum = 0;
    int res = 1;
    for(int i = 0; i<n; i++){
        int tmp;
        cin>>tmp;
        if(sum >= k){
            sum = tmp;
            res++;
        }else{
            sum += tmp;
        }
    }
    cout<<res<<endl;
    return 0;
}
