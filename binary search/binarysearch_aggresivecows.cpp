#include <iostream>
#include<climits>
#include<algorithm>

using namespace std;

bool canPlaceCows(int c, int n, int* pos, int m){


    int numofCowsPlaced =1;
    int prevCowPosition =pos[0];


    for(int i=1; i<n; i++){


        if (pos[i]- prevCowPosition >=m){

            numofCowsPlaced++;
            prevCowPosition = pos[i];

            if(numofCowsPlaced ==c){
                return true;

            }

        }
    }
    return false;
}





int largestMinDist(int n, int c, int* pos){
    int s = INT_MAX;
    int e = pos[n-1]-pos[0];

    for (int i=1; i<n; i++){
        if (pos [i]- pos[i-1] < s){
            s=pos[i]-pos[i-1];

        }
    }
    int ans;
    
    while (s<=e){
        int m=s+(e-s)/2;


        if (canPlaceCows(c, n, pos, m)){

            ans=m;

            s=m+1;
        } else{
            e=m-1;
        }

    }
    return ans;
}





int main(){



  int n;
  cin >> n;

  int c;
  
  cin>>c;

  

  int pos[n];
  for(int i = 0; i < n; i++) {
    cin >> pos[i];
  }
    sort(pos, pos+n);
    cout<< largestMinDist(n,c,pos)<<endl;
  

  

 
  

  cout<<endl;
}   