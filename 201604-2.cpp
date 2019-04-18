#include <iostream>
using namespace std;

int arr[15][10];
int tmp[4][4];

int main(void){
    for(int i = 0; i<15; i++){
        for(int j = 0; j<10; j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){
            cin>>tmp[i][j];
        }
    }
    //找到板件的上下左右最小界限
    int up=0, down=0, left=0, right=0;
    int flag = 1;
    for(int i = 0; i<4 && flag; i++){
        for(int j = 0; j<4 && flag; j++){
            if(tmp[i][j]==1){
                flag = 0;
                up = i;
            }
        }
    }
    flag = 1;
    for(int i = 3; i>=0 && flag; i--){
        for(int j = 0; j<4 && flag; j++){
            if(tmp[i][j]==1){
                flag = 0;
                down = i;
            }
        }
    }
    flag = 1;
    for(int j = 0; j<4 && flag; j++){
        for(int i = 0; i<4 && flag; i++){
            if(tmp[i][j]==1){
                flag = 0;
                left = j;
            }
        }
    }
    flag = 1;
    for(int j = 3; j>=0 && flag; j--){
        for(int i = 0; i<4 && flag; i++){
            if(tmp[i][j]==1){
                flag = 0;
                right = j;
            }
        }
    }
    //cout<<up<<down<<left<<right<<endl;
    int n;
    cin>>n;
    int res = -1;
    flag = 1;
    for(int i = 0; i<15-(down-up) && flag; i++){
        for(int j = up; j<=down && flag; j++){
            for(int k = left; k<=right && flag; k++){
                if(tmp[j][k] == 1 && arr[i+j-up][n+k-1] == 1){
                    flag = 0;
                }
            }
        }
        if(flag == 0){
            res = i-1;
        }
    }
    if(res == -1){
        for(int i = up; i<=down; i++){
            for(int j = left; j<=right; j++){
                if(tmp[i][j]==1){
                    arr[14-down+i][n+j-1] = 1;
                }
            }
        }
    }else{
        for(int i = up; i<=down; i++){
            for(int j = left; j<=right; j++){
                if(tmp[i][j]==1){
                    arr[res+i-up][n+j-1] = 1;
                }
            }
        }
    }
    for(int i = 0; i<15; i++){
        flag = 1;
        for(int j = 0; j<10; j++){
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
