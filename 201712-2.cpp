#include <iostream>
#include <string.h>
using namespace std;

int arr[1005];

bool isOut(int num, int k){
    if(num%k == 0 || num%10==k)
        return true;
    return false;
}

int main(void){
    memset(arr, 0, sizeof(arr));
    int n, k;
    cin>>n>>k;
    int num = 1; //报的数
    int emp = 0; //当前为空的数量
    int tmp = 0; //当前报数的人
    int res = -1;
    while(emp <= n){
        if(arr[tmp]==1){
            tmp = (tmp+1)%n;
            emp++;
            continue;
        }
        emp = 0;
        if(isOut(num, k) == true){
            arr[tmp] = 1;
            res = tmp;
            //cout<<res<<endl;
        }
        tmp = (tmp+1)%n;
        num++;
    }
    cout<<res+1<<endl;
    return 0;
}
