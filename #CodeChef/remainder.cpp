/*
	Simple Problems

begin with me i am also new in code chef..


Write a program to find the remainder when an integer A is divided by an integer B.

Input
The first line contains an integer T, the total number of test cases. Then T lines follow, each line contains two Integers A and B.

Output
For each test case, find the remainder when A is divided by B, and display it in a new line.

Constraints
1 = T = 1000
1 = A,B = 10000


Example
Input
3 
1 2
100 200
40 15

Output
1
100
10

this is question on codechef link => https://www.codechef.com/problems/FLOW002

				my blog =>https://wizardlearner.blogspot.com/
				
	follow me on codechef=>https://www.codechef.com/users/abhishekyadav9
	
				hck =>https://www.hackerrank.com/abhishekyadav191
				


*/



#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout <<a%b<<endl;
    }
    return 0;
}
