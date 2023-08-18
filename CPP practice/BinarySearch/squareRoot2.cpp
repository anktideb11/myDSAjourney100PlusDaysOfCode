#include<iostream>
#include<bits/stdc++.h>

using namespace std;


long long int squareRoot(int n){
    int s =0;
    int e=n;
    long long int mid = s+(e-s)/2;
    long long ans = -1;


    long long int square = mid*mid;

    while(s<=e){
        if(square==n){
            return mid;
        }if(square<n){
            ans = mid;
            s=mid+1;

        }else{
            e=mid-1;
        }mid=s+(e-s)/2;
    }
    return ans;

}

double morePrecision(int n, int precisionCount, int tempSolution){

    double factor = 1;
    double ans = tempSolution;

    for(int i=0; i<precisionCount; i++){
        factor = factor/10;
        for(double j = ans; j*j<n; j=j+factor){
            ans = j;
        }
    }

    return ans;

}

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int tempSolution = squareRoot(n);
    cout<<"Answer is "<<morePrecision(n, 3, tempSolution)<<endl; 


}