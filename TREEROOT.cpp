#include <iostream>
using namespace std;

//PROBLEM CODE: TREEROOT
// LOGIC :
//each id is included in the sum of the sums given for each node
//except the root
//hence when the sum is subtracted from the id, at the end only the root remains

int main(){
    int T, N;
    cin>>T;
    while(T--){
        cin>>N;
        int id, sum, root = 0;
        for(int i=0; i<N; i++){
            cin>>id>>sum;
            root+=(id-sum);
        }
        cout<<root<<endl;
    }
    return 0;
}
