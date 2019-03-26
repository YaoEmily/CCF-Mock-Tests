#include <iostream>
using namespace std;

int main(void){
    int N;
    cin>>N;
    int x = N/50;
    int y = (N-50*x)/30;
    int z = (N-50*x-30*y)/10;
    cout<<x*7+y*4+z<<endl;
    return 0;
}
