
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;

int main(void) {


	int T = 0, count = 0;
	scanf("%d",&T);
	while(T--) {
		++count;
		int result = 999999, value = 0, D = 0, i = 0;
		vector<int> v1;
		vector<int> ::iterator it;
		scanf("%d",&D);
		for(i = 0; i < D; ++i) {
			scanf("%d",&value);
			v1.push_back(value);
		}
		value = 0;
		for(i = 1; i <= 1000; ++i) {
			value = 0;
			
			for( it = v1.begin(); it != v1.end(); ++it)
				value += (*it - 1) / i;

			value += i;
			result = min(result,value);
		}
		
		printf("Case #%d: %d\n",count,result);		

	}

	return 0;
}
