#include <iostream>
using namespace std;

int main(void){
    long long S;
    cin>>S;
    long long res = 3500;
    int arr[] = {3500, 4955, 7655, 11255, 30755, 44755, 61005};
    if(S <= arr[0]){
        cout << S << endl;
        return 0;
    }
    if(S <= arr[1]){
        cout << (S-arr[0])/0.97+3500 << endl;
        return 0;
    }
    if(S <= arr[2]) {
        cout << (S-arr[1])/0.9+5000 << endl;
        return 0;
    }
    if(S <= arr[3]) {
        cout << (S-arr[2])/0.8+8000 << endl;
        return 0;
    }
    if(S <= arr[4]) {
        cout << (S-arr[3])/0.75+12500 << endl;
        return 0;
    }
    if(S <= arr[5]) {
        cout << (S-arr[4])/0.7+38500 << endl;
        return 0;
    }
    if(S <= arr[6]) {
        cout << (S-arr[5])/0.65+58500 << endl;
        return 0;
    }
    cout << (S-arr[6])/0.55+83500 << endl;

    return 0;
}
