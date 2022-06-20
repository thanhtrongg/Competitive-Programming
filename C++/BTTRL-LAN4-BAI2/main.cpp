#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cout<<"Nhap so phan tu: ";cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Arr["<<i<<"] = ";cin>>arr[i];
	}
	cout<<"Mang sau khi nhap: \n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
	int max=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	cout<<"\nPhan tu lon nhat cua mang: "<<max<<endl;
	int min=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	cout<<"\nPhan tu nho nhat cua mang: "<<min<<endl;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	cout<<"\nTong cua mang la: "<<sum;
	return 0;
}
