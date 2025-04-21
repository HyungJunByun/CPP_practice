#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

void countingsort(vector<int> &arr){
    int maxidx=0;
    for (int i=0;i<arr.size();i++){
        if (arr[maxidx]<arr[i]){
            maxidx=i;
        } 
    }
    cout<<"maxidx: "<<maxidx<<endl;
    vector<int> countvector(arr[maxidx]+1);
    for (int i=0;i<arr.size();i++){
        countvector[arr[i]]++;    
    }
    int sum=0;
    for(int i=0;i<countvector.size();i++){
        sum+=countvector[i];
        countvector[i]=sum;
    }
    vector<int> temp(arr.size());
    for (int i=0;i<arr.size();i++){
        temp[--countvector[arr[i]]]=arr[i];
    }
    for (int i=0;i<arr.size();i++){
        arr[i]=temp[i];
    }
}

int main(){
    vector<int> arr={1,1,5,5,3,3,4,2,1};
    countingsort(arr);
    for (int i=0; i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}