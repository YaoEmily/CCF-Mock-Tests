#include <iostream>
#include <vector>
using namespace std;

int arr[11][4];
int range[11];

bool solve(int x, int y, int* arr){
    if(x>=arr[0] && x<=arr[2] && y>=arr[1] && y<=arr[3])
        return true;
    return false;
}

int main(void){
    int N, M;
    cin>>N>>M;
    for(int i = 0; i<N; i++){
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2]>>arr[i][3];
    }
    for(int i = N-1; i>=0; i--){
        range[i] = N-i-1;
    }
    while(M--){
        int x, y;
        cin>>x>>y;
        int flag = -1;
        for(int i = 0; i<N; i++){
            if(solve(x, y, arr[range[i]]) == true){
                flag = i;
                break;
            }
        }
        if(flag == -1){
            cout<<"IGNORED"<<endl;
            continue;
        }
        int res = range[flag];
        cout<<res+1<<endl;
        for(int i = flag; i>0; i--){
            range[i] = range[i-1];
        }
        range[0] = res;
    }
    return 0;
}
