#include<iostream>
using namespace std;
int main(){
	int testcases,n=0;

	int * smax;
	int sum=0;

	cout<<"Enter test cases :";
	cin>>testcases;
	smax = new int [testcases];
	int** ary = new int*[testcases];

	for(int i=0; i<testcases; i++){
		cout<<"Enter Smax";
		cin>>smax[i];
		ary[i] = new int[smax[i]];
		for(int j=0; j<=smax[i]; j++){
			cin>>ary[i][j];
		}

	}



	for(int i=0; i<testcases; i++){
			for(int j=0; j<=smax[i]; j++){
				sum+=ary[i][j];
				
				if(j == sum){
					n=j-sum;

				}
			}
			cout<<"Case "<<i<<": Number of persons to add = "<<n<<endl;
			n=0;

		}

return 0;
}
