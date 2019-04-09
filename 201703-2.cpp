#include <iostream>
using namespace std;

int arr[1001];
int pla[1001];

int main(void){
    int n, m;
    cin>>n>>m;
    for(int i = 1; i<=n; i++){
        arr[i] = i;
        pla[i] = i;
    }
    while(m--){
        int a, b;
        cin>>a>>b;
        int place = pla[a];
        if(b>=0){
            for(int i = place; i<place+b; i++){
                arr[i] = arr[i+1];
                pla[arr[i]]--;
            }
            arr[place+b] = a;
            pla[arr[place+b]] = place+b;
        }else{
            for(int i = place; i>place+b; i--){
                arr[i] = arr[i-1];
                pla[arr[i]]++;
            }
            arr[place+b] = a;
            pla[arr[place+b]] = place+b;
        }
    }
    cout<<arr[1];
    for(int i = 2; i<=n; i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
    return 0;
}
