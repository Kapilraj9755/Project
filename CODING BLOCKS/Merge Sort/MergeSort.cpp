#include<bits/stdc++.h>
using namespace std;

void merge(int arr[] , int i , int N , int j , int M){

    int output[10000];

    int start = i , end = M;
    int k = 0;

    while (i <= N and j <= M){
        if (arr[i] < arr[j]){
            output[k] = arr[i];
            k++;
            i++;
        }
        else {
            output[k] = arr[j];
            j++;
            k++;
        }
    }

    while (i <= N){
        output[k] = arr[i];
        i++; k++;
    }

    while (j <= M){
        output[k] = arr[j];
        k++; j++;
    }

    for (int L = 0 ; L < k ; L++){
       arr[start + L] = output[L];
    }
}

void MergeSort(int arr[] , int start , int end){

    if (start >= end){
        return;
    }

    int mid = (start + end) / 2;


    MergeSort(arr , start , mid); // sort kiya start se mid tk phele
    MergeSort(arr , mid+1 , end); // fir sort kiya mid + 1 se to End tk
    merge(arr , start , mid , mid+1 , end); // ab sbhi ko add kr de  sort k baad
}


int main(){

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
  // 0 = start , N-1 = End ;
   MergeSort(arr , 0 , n-1);

    for (int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    return 0;
}


/* 
input 5
       1 2 5 4 3
     
     output 1 2 3 4 5
*/