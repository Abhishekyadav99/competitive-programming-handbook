/*

	John works at a clothing store. He has a large pile of socks that he must pair by color for sale. Given an array of integers representing the color of each sock, determine how many pairs of socks with matching colors there are.

For example, there are n=7  socks with colors ar=[1,2,1,2,1,3,2] There is one pair of color 1 and one of color 2. There are three odd socks left, one of each color. The number of pairs is 2.
Sample Input

9
10 20 20 10 10 30 50 10 20
Sample Output

3

link of hck question is => https://www.hackerrank.com/challenges/sock-merchant/problem?h_r=profile

follow me on this profile => https://www.hackerrank.com/abhishekyadav191

*/



#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	//logic begin
	int d=-1;       
	int c=0;
	for(int i=0;i<n;i++){
		int b=a[i];
		for(int j=i+1;j<n;j++){
			if(a[j]==b){
				c++;
				a[j]=d;
				d--;
				break;
			}
		}
		for(int j=0;j<n;j++){
			cout<<a[j]<<" ";
		}
		cout<<endl;
	}
	cout<<"odd number is : "<<c<<endl;
	return 0;
}
