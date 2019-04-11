#include <iostream>
#include <deque>
using namespace std;

int main(void){
    int n;
    cin>>n;
    string str;
    while(n--){
        cin>>str;
        int arr[4];
        char p[3];
        arr[0] = str[0]-'0';
        arr[1] = str[2]-'0';
        arr[2] = str[4]-'0';
        arr[3] = str[6]-'0';
        p[0] = str[1];
        p[1] = str[3];
        p[2] = str[5];
        deque<int> deq;
        deque<char> oper;
        deq.push_back(arr[0]);
        int tmp = 0;
        while(tmp < 3){
            if(p[tmp]=='*' || p[tmp]=='/'){
                int x = deq.back();
                deq.pop_back();
                if(p[tmp]=='*'){
                    x *= arr[tmp+1];
                }else{
                    x /= arr[tmp+1];
                }
                deq.push_back(x);
            }else{
                deq.push_back(arr[tmp+1]);
                oper.push_back(p[tmp]);
            }
            tmp++;
        }

        int res = deq.front();
        deq.pop_front();
        while(deq.empty()==false){
            if(oper.front()=='+'){
                res += deq.front();
            }else{
                res -= deq.front();
            }
            deq.pop_front();
            oper.pop_front();
        }

        if(res==24){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
