#include <iostream>
using namespace std;

int arr[500][500];

int main(void){
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<arr[0][0];
    for(int i = 1; i<= n-1; i++){
        for(int j = 0; j<=i; j++){
            cout<<" "<<arr[j][i-j];
        }
        i++;
        for(int j = i; i<=n-1 && j>=0; j--){
            cout<<" "<<arr[j][i-j];
        }
    }
    for(int i = n; i<=n*2-2; i++){
        for(int j = n-1; i-j<n; j--){
            if(n%2==0){
                cout<<" "<<arr[j][i-j];
            }else{
                cout<<" "<<arr[i-j][j];
            }
        }
        i++;
        for(int j = n-1; i<=n*2-2 && i-j<n; j--){
            if(n%2==0){
                cout<<" "<<arr[i-j][j];
            }else{
                cout<<" "<<arr[j][i-j];
            }
        }
    }
    cout<<endl;
    return 0;
}
