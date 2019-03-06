#include <iostream>
using namespace std;

int arr[1001];
int res[1001];

int main(void){
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    res[0] = (arr[0]+arr[1])/2;
    res[n-1] = (arr[n-1]+arr[n-2])/2;
    for(int i = 1; i<n-1; i++){
        res[i] = (arr[i-1]+arr[i]+arr[i+1])/3;
    }
    for(int i = 0; i<n-1; i++){
        cout<<res[i]<<" ";
    }
    cout<<res[n-1]<<endl;
}
