#include <iostream>
#include <vector>

using namespace std;

class QuickSort {
public:
    void quickSort(vector<int>& nums, int low, int high) {
        if (low < high) {
            int pi = partition(nums, low, high);
            quickSort(nums, low, pi - 1);
            quickSort(nums, pi + 1, high);
        }
    }

    void printVector(const vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            cout << nums[i] << endl;
        }
    }

private:
    int partition(vector<int>& nums, int low, int high) {
        int pivot = nums[high];
        int i = low - 1;
        for (int j = low; j < high; j++) {
            if (nums[j] < pivot) {
                i += 1;
                swap(nums[i], nums[j]);
            }
        }
        swap(nums[i+1], nums[high]);
        return (i+1);
    }
};


int main() {
    QuickSort sort;
    vector<int> test = {2, 2, 1, 1, 4, 3};
    sort.quickSort(test, 0, 5);
    sort.printVector(test);
}
