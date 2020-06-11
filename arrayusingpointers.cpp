#include<iostream>

using namespace std;

int main()
{
	int ary[5];
	int i;
	int *p;
	cout<< "enter thee elements in array:";
	for(i=0;i<5;i++)
	{
		cin >> ary[i];
	}
	p=ary;
	cout<< "you entered: ";
	for (i=0;i<5;i++)
	{
		cout<< *p << "\n";
		p++;
	}
	return 0;
}
