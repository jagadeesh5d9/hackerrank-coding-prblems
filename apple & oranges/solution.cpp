#include <iostream>

using namespace std;

int main(){
    int s,t;
    cin>>s>>t;
    int a,b;
    cin>>a>>b;
    int m,n;
    cin>>m>>n;
    vector<int> l(m);
    vector<int> r(n);
    
    for(int i=0;i<m;i++){
        cin>>l[i];
    }
    
    for(int i=0;i<n;i++){
        cin>>r[i];
    }
    
    int res_a=0,res_b=0;
    for(int i=0;i<m;i++){
        int dis=a+l[i];
        if(dis>=s && dis<=t){
            res_a++;
        }
    }
    
    for(int i=0;i<n;i++){
        int dis=b+r[i];
        if(dis>=s && dis<=t){
            res_b++;
        }
    }
    
    cout<<res_a<<endl;
    cout<<res_b;
}
