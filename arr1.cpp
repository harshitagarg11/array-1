#include <iostream>
using namespace std;
int main(){
	int max=0;
    int a[]={10,20,5,30,90};
	for(int i=0;i<5;i++)
	{
		if(a[i]>=max)
		{
		max=a[i];
		}
	}
cout<<"Max is:"<<max;
}
