#include <iostream>
#include <string.h>
using namespace std;

int arr[1001];
int num[1001];

int main(void){
    int n;
    cin>>n;
    memset(arr, 0, sizeof(arr));
    while(n--){
        int tmp;
        cin>>tmp;
        int a = tmp%1000;
        if(num[tmp%1000] == tmp){
            arr[tmp%1000]++;
        }
        else if(arr[tmp%1000] != 0){
            int b = a+1;
            while(arr[b%1000] != 0 && num[b%1000] != tmp){
                b++;
            }
            b = b%1000;
            if(arr[b] == 0){
                num[b] = tmp;
                arr[b]++;
            }else{
                arr[b]++;
            }
        }else{
            num[a] = tmp;
            arr[a]++;
        }
    }
    int tm = arr[0];
    int res = num[0];
    for(int i = 0; i<1000; i++){
        if(arr[i] > tm || (arr[i] == tm && num[i]<res)){
            tm = arr[i];
            res = num[i];
        }
    }
    cout<<res<<endl;
    return 0;
}
