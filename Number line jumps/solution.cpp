#include <bits/stdc++.h>
using namespace std;

int main(){
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    
    if(x1>x2 && v1>=v2){
        cout<<"NO";
    }else if(x2>x1 && v2>=v1){
        cout<<"NO";
    }else if(x1>x2){
        int res = (x1-x2)%(v2-v1);
        if(res == 0) {
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }else if(x2>x1){
        int res = (x2-x1)%(v1-v2);
        if(res == 0) {
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }
}
