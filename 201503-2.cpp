#include <iostream>
#include <string.h>
using namespace std;

int arr[1000];

void sort(int arr1[], int arr2[], int len){
    for(int i = 0; i<len-1; i++){
        for(int j = 0; j<len-1-i; j++){
            if (arr2[j] < arr2[j + 1]){
                int temp = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = temp;
                temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
            }
        }
    }
}

int main(void){
    int n;
    cin>>n;
    memset(arr, 0, sizeof(arr));
    int tol = 0;
    while(n--){
        int tmp;
        cin>>tmp;
        if(arr[tmp]==0) tol++;
        arr[tmp]++;
    }
    int* arr1 = new int[tol];
    int* arr2 = new int[tol];
    int tmp = 0;
    for(int i = 0; i<1000; i++){
        if(arr[i]!=0){
            arr1[tmp] = i;
            arr2[tmp] = arr[i];
            tmp++;
        }
    }
    sort(arr1, arr2, tol);
    for(int i = 0; i<tol; i++){
        cout<<arr1[i]<<" "<<arr2[i]<<endl;
    }
    return 0;
}
