//@author: rahulskhatav CPP
//GeeksforGeeks Stock Buy and Sell
// Aug 13 2020
#include <iostream>
using namespace std;

int main(){
  int T, N, buy, sell, STAT;
  cin>>T;
  while(T--){
    cin>>N;
    int A[N];
    for(int i=0; i<N; i++)  cin>>A[i];
    buy = 0, sell = -1;
    STAT=0;
    for(int i=1; i<N; i++){
        if(A[i]>A[i-1]){
          sell = i;
          STAT=1;
        }
        else if(A[i]<A[i-1]){
          if(sell!=-1 || A[i-1]!=A[buy]){
            cout<<"("<<buy<<" "<<sell<<")";
            sell = -1;
          }
          buy = i;
        }
        if(sell!=-1 && i==N-1){
          cout<<"("<<buy<<" "<<sell<<")";
        }
        if(STAT==0 && i==N-1) cout<<"No Profit";
    }
    cout<<endl;
  }
  return 0;
}
