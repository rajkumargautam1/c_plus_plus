#include<bits/stdc++.h>
using namespace std;
int main(){
    int freqmap[26]={};
    queue<char> q;
    char ch;

    while(true){
        cin>> ch;

        freqmap[ch-'a']++;

        if(freqmap[ch-'a']==1){
            //"ch" is currently a non reapting char
            q.push(ch);
        }

        //find the 1st non-reapting char in the stream after reading ch

        while(!q.empty() and freqmap[q.front() -'a']>1){
            //char at the front of the queue is no longer non-reapting 

            q.pop();

        }
        if(q.empty()){
            //stream doesn't have a non-reapeting char

            cout<<-1<<" ";
        }else{
            cout<<q.front()<<" ";
        }
    }
    return 0;

}

