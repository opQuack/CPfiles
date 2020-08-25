#include <iostream>
#define MAX 100001
using namespace std;

int main() {
	//code
	int T, A[MAX], x;
	long int N;
	bool stat = 0;
    cin>>T;
    while(T--){
    	
        cin>>N;
        for(int i=1; i<=N; i++)  A[i] = 0;
        for(int i=0; i<N; i++){
            cin>>x;
            if(x>0) A[x] = 1;
        }
        for(int i=1; i<=N+1; i++){
            if(A[i]==0){
                cout<<i<<endl;
                break;
            }
        }
    }
	return 0;
}
