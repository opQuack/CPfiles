#include <iostream>
using namespace std;

int main(){
	int T, N, max_level, water_filled;
	cin>>T;
	while(T--){
		cin>>N;
		water_filled = 0;
		int arr[N], rMax[N], lMax[N];
		for(int i=0; i<N; i++)	cin>>arr[i];
	
		rMax[N-1] = arr[N-1], lMax[0] = arr[0];
	
		for(int i=N-2; i>=0; i--)	
			if(arr[i]>rMax[i+1])	rMax[i] = arr[i];	
			else	rMax[i] = rMax[i+1];
			
		for(int i=1; i<N-1; i++)	
			if(arr[i]>lMax[i-1])	lMax[i] = arr[i];
			else	lMax[i] = lMax[i-1];	
	
	    for(int i=1; i<N-1; i++){
			max_level = min(lMax[i], rMax[i]);
            if(arr[i]<max_level)
			    water_filled+=(max_level-arr[i]);
	    }
	    cout<<water_filled<<endl;
	
	}
	return 0;
}
