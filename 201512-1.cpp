#include <iostream>
#include <stdio.h>
using namespace std;

int main(void){
    int res = 0;
    char c;
    while(true){
        c = getchar();
        if(c == '\n') break;
        res = res+c-'0';
    }
    cout<<res<<endl;
    return 0;
}
