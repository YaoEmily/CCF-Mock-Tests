#include <iostream>
using namespace std;

int arr[1001];

int main(void){
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int res = 1;
    int tmp = arr[0];
    for(int i = 1; i<n; i++){
        if(arr[i] != tmp){
            res++;
            tmp = arr[i];
        }
    }
    cout<<res<<endl;
    return 0;
}
