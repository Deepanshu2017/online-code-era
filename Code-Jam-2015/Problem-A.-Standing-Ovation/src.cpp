
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <algorithm>
using namespace std;
int main(void) {

	int T = 0,count = 0;
	scanf("%d",&T);
	while(T--) {
		++count;
		int K = 0, i = 0, result = 0, standing = 0, temp = 0;
		vector<int> v1;
		vector<int> ::iterator it;
		string s;
		scanf("%d",&K);
		cin >> s;
		for(i = 0; i < s.length(); ++i) {
			v1.push_back(s[i] - '0');
		}
		i = 0;
		standing = v1[0];
		for(it = v1.begin() + 1; it != v1.end(); ++it) {
			++i;
			temp = 0;

			if(standing < i && *it) {
				result += i - standing;
				temp = i - standing;
			}
			standing = *it + standing + temp;


		}
		printf("Case #%d: %d\n",count,result);


	}

	return 0;
}

