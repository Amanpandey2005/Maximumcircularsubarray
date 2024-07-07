#include<iostream>
#include<limits.h>
using namespace std;
int kadane(int arr[], int n){
    int maxsum = INT_MIN;
    int sum =0;
    for (int i = 0; i<n; i++){
        sum +=arr[i];
        maxsum = max(sum,maxsum);
        if(sum<0){
            sum = 0;
        }
    }
    return maxsum;
}

int inversekadane(int arr[], int n){
    int minsum = INT_MAX;
    int sum =  0;
        for(int i = 0; i< n; i++){
            sum += arr[i];
            minsum = min(sum,minsum);
            if(sum>0){
                sum = 0;
            }   
        }
        return minsum;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n ;i++){
        cin >> arr[i];
    }
    int s1;
    int A;
    int B;
    B = inversekadane(arr,n);
    A = kadane(arr,n);
    s1 = A - B;
    if(s1 == 0){
        s1 = A;
    }
    cout << "The Result is "<< s1 << endl;
}