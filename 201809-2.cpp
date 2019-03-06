#include <iostream>
using namespace std;

long long arr1[1001][2];
long long arr2[1001][2];

int main(void){
    long long res = 0;
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>arr1[i][0]>>arr1[i][1];
    }
    for(int i = 0; i<n; i++){
        cin>>arr2[i][0]>>arr2[i][1];
    }
    int a=0, b=0;
    while(a<n && b<n){
        if(arr1[a][1] < arr2[b][1]){
            if(arr1[a][1] > arr2[b][0]){
                if(arr1[a][0] < arr2[b][0]){
                    res = res + arr1[a][1] - arr2[b][0];
                }else{
                    res = res + arr1[a][1] - arr1[a][0];
                }
            }
            a++;
        }else{
            if(arr1[a][0] < arr2[b][1]){
                if(arr1[a][0] < arr2[b][0]){
                    res = res + arr2[b][1] - arr2[b][0];
                }else{
                    res = res + arr2[b][1] - arr1[a][0];
                }
            }
            b++;
        }
    }
    cout<<res<<endl;
    return 0;
}
