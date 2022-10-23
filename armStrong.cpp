# include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the no. to check it's armstrong or not :";
    cin>>n;
    int b=n;
    int ans=0;
    int d=0,r=0;
    while(b>0){
        r=0;
        r=b%10;
        ans+=r*r*r;
        d=b/10;
        b=d;

    }
    if(ans==n) cout<<"armstrong no."<<endl;
    else cout<<"not a armstrong no."<<endl;
    return 0;
}
