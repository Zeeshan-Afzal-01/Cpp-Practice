#include<iostream>
using namespace std;

void findUnique(int arr[], int length)
{
	int ans=0;
	//use XOR in array to find unique element in array
	for (int i = 0; i < length; i++)
	{
		ans = ans ^ arr[i];
	}
	cout << "The Answer is : " << ans;

}
int main()
{
	int const length = 7;
	int arr[length] = {10,9,8,7,8,9,10};

	findUnique(arr, length);
	
	
}