#include <iostream>
using namespace std;

int arr[40];

int main(void){
    int tmp = 0;
    do{
        cin>>arr[tmp];
        tmp++;
    }while(arr[tmp-1] != 0);
    int res = 0;
    int pre = 0;
    for(int i = 0; i<tmp-1; i++){
        if(arr[i] == 1){
            res += 1;
            pre = 0;
        }else{
            if(pre == 0){
                res += 2;
                pre = 2;
            }else{
                pre += 2;
                res += pre;
            }
        }
    }
    cout<<res<<endl;
    return 0;
}
