#include<bits/stdc++.h>
using namespace std;
int partition(int *arr, int s,int e){
    int i=s-1;
    int j=s; 

    int pivot= arr[e];
    while (j<e){
        if(arr[j]<pivot){
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }
    swap(arr[i+1] , arr[e]);
    return i+1;

}
void quicksort(int *arr, int s, int e){
    //parition the array around the pivot element 
    if(s>=e){
        return;
    }
    int p= partition(arr,s,e);
    // quicksort the leftpartition
    
    quicksort(arr,s,p-1);

    //quicksort the rightparition

    quicksort(arr, p+1, e) ;
}
int main(){
     int n;
     cin>>n;

     int arr[100];
     for(int i=0; i<n; i++){
        cin>>arr[i];

     } 

     quicksort(arr,0,n-1);

    for (int i = 0; i < n; i++)
     {
        cout<<arr[i]<<" ";
     }
     
}