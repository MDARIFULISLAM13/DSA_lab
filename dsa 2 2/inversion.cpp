#include <bits/stdc++.h>
using namespace std;
int mergeAndCount(vector<int> &arr, int left, int mid, int right)
{
    vector<int> temp;
    int i = left, j = mid + 1;
    int invCount = 0;
    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            invCount += (mid - i + 1); // main trick
            j++;
        }
    }
    while (i <= mid)
        temp.push_back(arr[i++]);
    while (j <= right)
        temp.push_back(arr[j++]);
    for (int k = left; k <= right; k++)
    {
        arr[k] = temp[k - left];
    }
    return invCount;
}
int mergeSort(vector<int> &arr, int left, int right)
{
    int invCount = 0;
    if (left < right)
    {
        int mid = (left + right) / 2;
        invCount += mergeSort(arr, left, mid);
        invCount += mergeSort(arr, mid + 1, right);
        invCount += mergeAndCount(arr, left, mid, right);
    }
    return invCount;
}
int main()
{
    vector<int> arr = {2, 4, 1, 3, 5};
    cout << "Inversion Count: " << mergeSort(arr, 0, arr.size() - 1);
    return 0;
}