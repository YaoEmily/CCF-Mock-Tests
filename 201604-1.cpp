#include <iostream>
using namespace std;

int arr[1001];

int main(void){
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int res = 0;
    for(int i = 1; i<n-1; i++){
        if((arr[i]>arr[i-1] && arr[i]>arr[i+1]) || (arr[i]<arr[i-1] && arr[i]<arr[i+1])){
            res++;
        }
    }
    cout<<res<<endl;
    return 0;
}
