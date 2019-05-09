#include <iostream>
#include <string.h>
using namespace std;

int arr[10001];

int main(void){
    int n;
    cin>>n;
    memset(arr, 0, sizeof(arr));
    while(n--){
        int tmp;
        cin>>tmp;
        arr[tmp]++;
    }
    int tm = arr[1];
    int res = 1;
    for(int i = 1; i<=10000; i++){
        if(arr[i] > tm){
            tm = arr[i];
            res = i;
        }
    }
    cout<<res<<endl;
    return 0;
}
