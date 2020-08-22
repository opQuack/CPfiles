#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int T, X, Y, K, N;
	int P = 0, C = 0;
	bool output;
	scanf("%d", &T);
	while(T--){
	    output = false;
	    cin>>X>>Y>>K>>N;
	    for(int i=0; i<N; i++){
	        cin>>P>>C;
	        if(P>=(X-Y) and C<=K)   output = true;
	    }
	    if(output==true)  cout<<"LuckyChef"<<"\n";
	    else    
				cout<<"UnluckyChef"<<"\n";
	}
	return 0;
}

