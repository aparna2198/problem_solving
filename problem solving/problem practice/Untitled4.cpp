#include <bits/stdc++.h>
using namespace std;


int main() {
//	int ar[9]={10 ,20, 20, 10, 10, 30, 50, 10, 20};
	int n;
    cin>>n;// size of the array
	int freq[101];// an array to count the frequency
	for(int i = 0; i < n; i++) {
        int c;
        cin >> c;// take that elements in the array
        freq[c]++;// increases the values by one and not the  index
        // this must be dtoring the number of times the colours are repeated
        // 10 -  4 times
        // 20 -3
        // 30 - 1
        // 50 -1
    }
    // now freq { 4,3,1,1}

	int res = 0;
	for(int i = 0; i <= 100; i++){
        res += freq[i] / 2;
        
        /*{i =0  res= 0+ 4/2= 0+ 2=2
		    i=1  res= 2+ 3/2=2+1=3
			i=2   res 3+ 1/2=0  }*/
     }
	cout << res << endl;
	return 0;
}
