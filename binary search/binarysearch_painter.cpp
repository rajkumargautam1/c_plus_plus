#include<iostream>
#include<climits>

using namespace std;

int numPaintersRequired(int n, int* b, int timeLimit) {

	int numPainters = 1; // assume a single painter can paint all the 'n' boards in the given timeLimit
	int time = 0; // to keep track of the clock

	int i = 0;
	while(i < n) {

		// paint the ith board
		time += b[i];


		if(time > timeLimit) {
			// add a new painter to the job
			numPainters++;
			// reset the time
			time = 0;
			// continue with painting of the same board in the next iteration
			continue;
		}


		i++;

	}

	return numPainters;

}

int getMinTime(int k, int n, int*b) {
	int s = INT_MIN; // for the tightest lower-bound, assign a painter to each board
	int e = 0;       // for the tightest upper-bound, assign a single painter to paint all the boards
	for(int i=0; i<n; i++) {
		s = max(s, b[i]);
		e += b[i];
	}  
	int ans;

	while(s <= e) {
		int m = s + (e-s)/2;
		int x = numPaintersRequired(n, b, m);
		if(x <= k) {
			// 'k' painters can also paint 'n' boards in 'm' amt. of time
			ans = m;
			// since we want to minimize the time, continue 
			// your search towards the left of 'm' i.e. the 
			// search space reduces from [s, e] to [s, m-1].
			e = m-1;
		} else {
		 	// 'k' painters cannot paint 'n' boards in 'm' amt. of time
		 	// therefore continue your search towards the right of 'm'
		 	// i.e. the search space reduces from [s, e] to [m+1, e].
		 	s = m+1;
		}
	}

	return ans;
}

int main() {

	int k;
	cin >> k;

	int n;
	cin >> n;

	int* b = new int[n];
	for(int i=0; i<n; i++) {
		cin >> b[i];
	}

	cout << getMinTime(k, n, b) << endl;

	return 0;
}