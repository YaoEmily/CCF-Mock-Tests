#include <iostream>
#include <algorithm>
#include <vector>
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
    if(n%2==1){
        int mid = vec[n/2];
        for(int i = 0; i<=n/2; i++){
            if(vec[i]==mid && vec[n-1-i]==mid){
                cout<<mid<<endl;
            }else if(vec[i]==mid || vec[n-1-i]==mid){
                cout<<"-1"<<endl;
                break;
            }
        }
    }else{
        if(vec[n/2]!=vec[n/2-1]){
            cout<<"-1"<<endl;
        }else{
            int mid = vec[n/2];
            for(int i = 0; i<=n/2-1; i++){
                if(vec[i]==mid && vec[n-1-i]==mid){
                    cout<<mid<<endl;
                }else if(vec[i]==mid || vec[n-1-i]==mid){
                    cout<<"-1"<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
