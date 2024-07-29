#include <bits/stdc++.h>
using namespace std;

int main(){
        int n,sum=0,avg;
        cout<<"Enter the length of the array: "<<endl;
        cin>>n;
        int a[n];
        cout<<"Enter the integers: "<<endl;
        for(int i=0; i<n; i++){
                cin>>a[i];
                sum+=a[i];
        }
        avg=sum/n;
        cout<<"Sum: " <<sum<<"Average: "<<avg<<endl;
}
