#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

void merge(vector<int>& arr, int l, int r, int m) {
    int i = l;
    int j = m + 1;
    vector<int> temparr;

    // 왼쪽과 오른쪽 부분 배열을 병합
    while (i <= m && j <= r) {
        if (arr[i] <= arr[j]) {
            temparr.push_back(arr[i]);
            i++;
        } else {
            temparr.push_back(arr[j]);
            j++;
        }
    }

    // 왼쪽에 남은 값 복사
    while (i <= m) {
        temparr.push_back(arr[i]);
        i++;
    }

    // 오른쪽에 남은 값 복사
    while (j <= r) {
        temparr.push_back(arr[j]);
        j++;
    }

    // 원래 배열에 복사
    for (int k = 0; k < temparr.size(); k++) {
        arr[l + k] = temparr[k];
    }
}

void mergesort(vector<int>& arr, int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        mergesort(arr, l, m);
        mergesort(arr, m + 1, r);
        merge(arr, l, r, m);

        // 디버깅용 출력
        for (int i = l; i <= r; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
} 

int main() {
    vector<int> arr = {1, 3, 2, 5, 3, 6, 4, 6, 2, 2, 8, 9, 0};
    mergesort(arr, 0, arr.size() - 1);

    cout << "최종 정렬 결과: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}