#include<iostream>
#include<unordered_set>
#include<stack>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;
//naive: o(n+m)log(n+m), as:o(n).....merge 2 sorted arrays,sort temp array, check if size of temp is odd or even and return accordingly.
int median(int a1[], int a2[], int n, int m){
    int temp[n+m];
    int k=0;
    for(int i=0; i<n; i++){
        temp[k]=a1[i];
        k++;
    }
    for(int j=0; j<m; j++){
        temp[k]=a2[j];
        k++;
    }
    sort(temp, temp+(n+m));

    if((n+m)%2==0){
        int z=(n+m)/2;
        int p=temp[z];
        int q=temp[z-1];
        int r=(p+q)/2;
        return r;
    }
    else {
        int z=(n+m)/2;
        return temp[z];
    }
}
// optimized: o(log n1),
double findmedian(int a1[], int a2[], int n1, int n2){
    int begin1=0, end1=n1;

    while(begin1<=end1){
        // cal i1 & i2
        int i1=(begin1+end1)/2;
        int i2=(n1+n2+1)/2 - i1;

        // cal min1, max1, min2, max2
        int min1= (i1==n1)?INT_MAX:a1[i1];
        int max1= (i1==0)?INT_MIN:a1[i1-1];

        int min2= (i2==n2)?INT_MAX:a2[i2];
        int max2= (i2==0)?INT_MIN:a2[i2-1];

        // which side to move on
        if((min1>=max2)&&(min2>=max1)){
            if((n1+n2)%2==0){
                return ((double)max(max1,max2)+min(min1,min2))/2;
            }
            else return (double)max(max1,max2);
        }
        else if(max1>min2) end1=i1-1; //left half

        else begin1=i1+1; //right half

    }
    return -1;
}
int main(){
    int a[]={1, 2, 5, 4};
    int b[]={ 2, 5,3, 4};

    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);

    cout<<median(a, b, n ,m)<<endl;
    cout<<findmedian(a, b, n ,m);

    return 0;
}