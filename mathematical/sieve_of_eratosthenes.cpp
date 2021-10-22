#include<bits/stdc++.h>
using namespace std;

int seive(int n){
    bool arr[n+1];
    arr[0] = false;
    arr[1] = false;
   
	 for(int i=2;i<n+1;i++){
        arr[i] = true;
    }

    for(int i=2;i*i<=n;i++){
        for(int j=2*i;j<=n;j += i){
            arr[j] = false;
        }
    }
    int count = 0;
    for(int i=0;i<=n+1;i++){
        if(arr[i] == true){
            count++;
        }
    }
    
    return count;
}

int main() {
    int n = 5;
    cout<<seive(n);
}