#include <iostream>
#include <algorithm>
using namespace std;

int arr[501];

int main(void){
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int i = 0, j = n-1;
    int res = 0;
    while(i<j && arr[i]<0 && arr[j]>0){
        if(arr[i] + arr[j] == 0){
            res++;
            i++;
            j--;
        }else if(arr[i] + arr[j] < 0){
            i++;
        }else{
            j--;
        }
    }
    cout<<res<<endl;
    return 0;
}
