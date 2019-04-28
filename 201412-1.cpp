#include <iostream>
#include <string.h>
using namespace std;

int arr[1001];
int freq[1001];

int main(void){
    int n;
    cin>>n;
    memset(freq, 0, sizeof(freq));
    int tmp;
    cin>>tmp;
    cout<<++freq[tmp];
    for(int i = 1; i<n; i++){
        int tmp;
        cin>>tmp;
        cout<<" "<<++freq[tmp];
    }
    cout<<endl;
    return 0;
}
