#include <iostream>
#include <string.h>
using namespace std;

int arr[101][101];

int main(void){
    memset(arr, 0, sizeof(arr));
    int n;
    cin>>n;
    while(n--){
        int x1, x2, y1, y2;
        cin>>x1>>y1>>x2>>y2;
        for(int i = x1; i<x2; i++){
            for(int j = y1; j<y2; j++){
                arr[i][j] = 1;
            }
        }
    }
    int res = 0;
    for(int i = 1; i<=100; i++){
        for(int j = 1; j<=100; j++){
            if(arr[i][j] == 1){
                res++;
            }
        }
    }
    cout<<res<<endl;
    return 0;
}
