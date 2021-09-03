#include <iostream>
using namespace std;

int linearsearch(int arr[], int n, int key)
{
    int i;
    for (i = 0; i<n; i++)
        if (arr[i] == key)
            return i;
    return -1;
}

int main()
{
    int n;
    cout << "enter the number of elements in array -";
    cin>>n ;
    
    int arr[n];
    cout << "the elements in array are -";
    for (int i = 0; i<n; i++)
    {	
       cin>>arr[i]; 
	}
	int key;
	cout << "the key element to find is -";
	cin>>key; 
	
	cout << " key element found at index -";
	cout << linearsearch(arr, n, key) << endl;
  
    return 0;
}
