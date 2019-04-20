#include <iostream>
using namespace std;

void dispX(int** arr, int** sign, int i, int j, int tmp){
    for(int k = j; k<j+tmp; k++){
        sign[i][k] = 0;
    }
}

void dispY(int** arr, int** sign, int i, int tmp, int j){
    for(int k = i; k<i+tmp; k++){
        sign[k][j] = 0;
    }
}

int main(void){
    int n, m;
    cin>>n>>m;
    int** arr = new int*[n];
    int** sign = new int*[n];
    for(int i = 0; i<n; i++){
        arr[i] = new int[m];
        sign[i] = new int[m];
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>arr[i][j];
            sign[i][j] = 1;
        }
    }
    //ÅÐ¶Ïºá×Å
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m-2; j++){
            if(arr[i][j] == arr[i][j+1] && arr[i][j] == arr[i][j+2]){
                int tmp = 3;
                while(j+tmp<m && arr[i][j]==arr[i][j+tmp]){
                    tmp++;
                }
                dispX(arr, sign, i, j, tmp);
                j = j+tmp-1;
            }
        }
    }
    //ÅÐ¶ÏÊú×Å
    for(int j = 0; j<m; j++){
        for(int i = 0; i<n-2; i++){
            if(arr[i][j]==arr[i+1][j] && arr[i][j]==arr[i+2][j]){
                int tmp = 3;
                while(i+tmp<n && arr[i][j]==arr[i+tmp][j]){
                    tmp++;
                }
                dispY(arr, sign, i, tmp, j);
                i = i+tmp-1;
            }
        }
    }
    //ÐÞ¸ÄÁË
    for(int i = 0; i<n; i++){
        int flag = 1;
        for(int j = 0; j<m; j++){
            if(sign[i][j] == 0){
                arr[i][j] = 0;
            }
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
