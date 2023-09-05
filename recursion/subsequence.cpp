#include<bits/stdc++.h>
using namespace std;
void generatesubsequences(char *inp ,char *out, int i,int j,set<string>& s){
    // base case

    if(inp[i]== '\0'){
        out[j]='\0';
        s.insert(string(out));
        // cout<<out<<endl;
        return;

    }

    //recursive case 
    //generate all the subsquences of inp [i..n-1] i.e take a se quence of(n-i)

    //1. include the ith charter to the to the subseq.

    out[j] =inp[i];
    j++;
    generatesubsequences(inp ,out,i+1,j, s);
    j--;

    //2.exclude the ith charcter  from the output subsequences
    generatesubsequences(inp ,out,i+1,j,s);
}
int main(){
    int n;
    cin >> n;

    char inp[n];
    for (int i = 0; i < n; ++i) {
        cin >> inp[i];
    }

    char out[100];

    set<string> s;




    generatesubsequences(inp, out, 0, 0, s);

    cout<<s.size() <<endl;

    for(string subsequence : s) {
		cout << subsequence << endl;
	}

    return 0;

} 