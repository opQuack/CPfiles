#include <iostream>
using namespace std;

int flip(int I, long int N, int Q){
    if(I==Q)    return N/2;
    else    return (N+1)/2;
}

int main() {
	int T, G, I, Q;
	long int N;
	cin>>T;
	while(T--){
	    cin>>G;
	    while(G--){
	        cin>>I>>N>>Q;
	        cout<<flip(I, N, Q)<<"\n";
	    }
	}
	return 0;
}
