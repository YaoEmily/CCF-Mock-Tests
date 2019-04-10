#include <iostream>
using namespace std;

int main(void){
    long long n;
    cin>>n;
    if(n%2==1){
        long long a, b, c;
        cin>>a;
        long long tmp = n/2;
        while(tmp--){
            cin>>b;
        }
        tmp = n/2;
        while(tmp--){
            cin>>c;
        }
        if(n==1){
            cout<<a<<" "<<a<<" "<<a;
        }else if(a<=c){
            cout<<c<<" "<<b<<" "<<a<<endl;
        }else{
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
    }else{
        long long a, b, c, d;
        cin>>a;
        long long tmp = n/2-1;
        while(tmp--){
            cin>>b;
        }
        cin>>c;
        tmp = n/2-1;
        while(tmp--){
            cin>>d;
        }
        if(n==2){
            cout<<a<<" "<<(long double)(a+c)/2<<" "<<c<<endl;
        }else if(a<=d){
            cout<<d<<" "<<(long double)(b+c)/2<<" "<<a<<endl;
        }else{
            cout<<a<<" "<<(long double)(b+c)/2<<" "<<d<<endl;
        }
    }
    return 0;
}
