#include <bits/stdc++.h> 
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int arr[n];
    for(int i=n-1;i>=0;i--){
        arr[i]=s[i]-'0';
    }
    for(int i=0;i<n;i++){
        arr[i]=9-arr[i];
    }
    if(arr[0]==0){
        int carry=0;
        for(int i=n-1;i>=0;i--){
            int x=arr[i];
            if(i==n-1){
                x+=2;         
            }
            else{
                x+=1;
            }
            x+=carry;
            carry=x/10;
            arr[i]=x%10;
        }
    }
    string sol="";
    for(int i=0;i<n;i++){
        sol+=to_string(arr[i]);
    }
    cout<<sol<<"\n";
}
int main()
{
 ios::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 int t;
 cin >> t;
 while(t--) {
     solve();
 }
 return 0;
}
