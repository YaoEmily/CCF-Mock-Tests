#include <iostream>
using namespace std;

int main(void){
    int y, d;
    cin>>y>>d;
    int arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int notLeap[12];
    int leap[12];
    leap[0] = arr[0];
    for(int i = 0; i<12; i++){
        int tmp = 0;
        for(int j = 0; j<=i; j++){
            tmp += arr[j];
        }
        notLeap[i] = tmp;
        if(i != 0){
            leap[i] = notLeap[i] + 1;
        }
    }
    if(d <= 31){
        //Ò»ÔÂ
        cout<<1<<endl;
        cout<<d<<endl;
    }else if((y%4==0 && y%100!=0) || (y%400==0)){
        //ÈòÄê
        int res;
        for(int i = 0; i<11; i++){
            if(d > leap[i] && d <=leap[i+1]){
                res = i;
                break;
            }
        }
        cout<<res+2<<endl;
        cout<<d - leap[res]<<endl;
    }else{
        int res;
        for(int i = 0; i<11; i++){
            if(d > notLeap[i] && d <=notLeap[i+1]){
                res = i;
                break;
            }
        }
        cout<<res+2<<endl;
        cout<<d - notLeap[res]<<endl;
    }
    return 0;
}
