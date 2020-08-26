#include <iostream>
using namespace std;

int findSides(int N){
    if(N==3)    return 3;
    else if(N==4)   return 4;
    else if(N==5)   return 5;
    else{
        return N+findSides(N/2);
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	int T, N;
	long int x;
	scanf("%d", &T);
	while(T--){
	    scanf("%d", &N);
	    for(int i=0; i<N; i++)	scanf("%d%d", &x, &x);
	    printf("%d\n", findSides(N));
	}
	
	return 0;
}

