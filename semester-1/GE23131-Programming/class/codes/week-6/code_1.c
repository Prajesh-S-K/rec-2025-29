// Problem Statement:
// Given an array A of sorted integers and another non negative integer k, find if there
// exists 2 indices i and j such that A[i] - A[j] = k, i != j.
// Input Format
// 1. First line is number of test cases T. Following T lines contain:
// 2. N, followed by N integers of the array
// 3. The non-negative integer k
// Output format
// Print 1 if such a pair exists and 0 if it doesn’t.
// Sample Input:
// 1
// 3 1 3 5
// 4
// Sample Output:
// 1


#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        char spacer;
        scanf("%d%c",&n,&spacer);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d%c",&arr[i],&spacer);
        }
        int k;
        scanf("%d",&k);
        int found = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && arr[i]-arr[j]==k){
                    found = 1;
                    break;
                }
            }
            if(found) break;
        }
        printf("%d\n",found);
    }
    return 0;
}