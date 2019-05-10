#include <iostream>
using namespace std;

int main(void){
    string str;
    cin>>str;
    int arr[10] = {0, 2, 3, 4, 6, 7, 8, 9, 10, 12};
    int sum = 0;
    for(int i = 1; i<=9; i++){
        sum = sum + (str[arr[i-1]]-'0')*i;
    }
    sum = sum%11;
    if((sum==10 && str[12]=='X') || str[12] == '0'+sum){
        cout<<"Right"<<endl;
    }else if(sum==10){
        str[12] = 'X';
        cout<<str<<endl;
    }else{
        str[12] = '0' + sum;
        cout<<str<<endl;
    }
    return 0;
}
