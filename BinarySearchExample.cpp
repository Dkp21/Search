#include <iostream>
#include <algorithm>

using namespace std;

bool binarySearch(int arr[], int size, int n)
{
    int left = 0;
    int right = size;
    
    while(right >= left)
    {
        int mid = (left + right)/2;
        
        if(arr[mid] > n)
        {
            right = mid -1;
        }
        else if(arr[mid] < n)
        {
            left = mid + 1;
        }
        else
        {
            return true;
        }
    }
    
    return false;
}


int main(int argc, char ** argv)
{
    cout << "Enter array size : ";

    int size;

    cin >> size;


    int arr[size];

    cout << "Enter range of number for array : ";
    for(int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }
    
    cout << "Enter element to be searched in the array : ";

    int search;    

    cin >> search;
    
    sort(arr, arr+size);

    cout << "Element (" << search << ") found :" << (binarySearch(arr, size, search)?(" true"):(" false")) << endl;
    
    return 0;
}
