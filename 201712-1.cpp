#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
using namespace std;

int main(void){
    int n;
    cin>>n;
    vector<int> vec;
    for(int i = 0; i<n; i++){
        int tmp;
        cin>>tmp;
        vec.push_back(tmp);
    }
    sort(vec.begin(), vec.end());
    int sum = INT_MAX;
    for(int i = 0; i<n-1; i++){
        sum = min(sum, vec[i+1]-vec[i]);
    }
    cout<<sum<<endl;
    return 0;
}
