#include <iostream>
#include <string.h>
using namespace std;

int arr[100];

int isAdjoining(int cur){
    for(int i = 0; i<100; i++){
        if(arr[i] == 0 && (i/5+1)*5-i >= cur){
            return i;
        }
    }
    return -1;
}

int main(void){
    int n;
    cin>>n;
    memset(arr, 0, sizeof(arr));
    while(n--){
        int cur;
        cin>>cur;
        int res = isAdjoining(cur);
        if(res != -1){
            arr[res] = 1;
            cout<<res+1;
            for(int i=res+1; i<res+cur; i++){
                arr[i] = 1;
                cout<<" "<<i+1;
            }
            cout<<endl;
        }else{
            int tmp = cur;
            int flag = 1;
            for(int i = 0; i<100; i++){
                if(arr[i]==0){
                    if(flag){
                        arr[i] = 1;
                        cout<<i+1;
                        flag = 0;
                        tmp--;
                        if(tmp==0) break;
                    }else{
                        arr[i] = 1;
                        cout<<" "<<i+1;
                        tmp--;
                        if(tmp==0) break;
                    }
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
