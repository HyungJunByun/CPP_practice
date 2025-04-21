#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int separate(vector<int> &arr, int left, int right){
    int pivot=0;
    for (int i=left;i<=right;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int> leftvector;
    vector<int> rightvector;
    int current_temp_idx=0; 
    for (int i=left; i<right;i++){
        if (arr[i]<arr[right]){
            leftvector.push_back(arr[i]);
            current_temp_idx++;
        }
        else{
            rightvector.push_back(arr[i]);
        }
    }
    for(int i=0;i<leftvector.size();i++){
        arr[left+i]=leftvector[i];
    }
    arr[left+current_temp_idx]=arr[right];
    for(int i=0;i<rightvector.size();i++){
        arr[left+current_temp_idx+i+1]=rightvector[i];
    }
    for (int i=left;i<=right;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return left+current_temp_idx;
}

void quicksort(vector<int> &arr, int left, int right){
    if (left<right){
        int pivot=separate(arr, left, right);
        quicksort(arr, left, pivot-1);
        quicksort(arr, pivot+1, right);
    }
}


int main(){
    vector<int> arr={1,3,2,4,4,10,0,2,11,5,7};
    quicksort(arr, 0, arr.size()-1);   
    for (int i=0;i<=arr.size()-1;i++){
        cout<<arr[i]<<" ";
    }
}