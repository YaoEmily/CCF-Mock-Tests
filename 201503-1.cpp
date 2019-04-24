#include <iostream>
using namespace std;

int arr[1001][1001];

int main(void){
    int n, m;
    cin>>n>>m;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    for(int j = m-1; j>=0; j--){
        int flag = 1;
        for(int i = 0; i<n; i++){
            if(flag){
                cout<<arr[i][j];
                flag = 0;
            }else{
                cout<<" "<<arr[i][j];
            }
        }
        cout<<endl;
    }
    return 0;
}
