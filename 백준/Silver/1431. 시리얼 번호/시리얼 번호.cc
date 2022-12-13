#include <algorithm>
#include <iostream>

using namespace std;

string st[20000];
int num;

int getsum(string ss) {
	int len = ss.length(), sum = 0;
	for (int i = 0; i < len; i++){
		if (ss[i] - '0' <= 9 && ss[i] - '0' >= 0) {
			sum += ss[i] - '0';
		}
	}
	return sum;
}

bool campare(string a, string b) {
	if (a.length() < b.length()) {
		return 1;
	}
	else if (a.length() > b.length()){
		return 0;
	}
	else{
		int asum = getsum(a);
		int bsum = getsum(b);
		if (asum != bsum){
			return asum < bsum;
		}
		else{
			return a < b;
		}
	}
}

int main(void) {
	cin >> num;
	for (int i = 0; i < num; i++){
		cin >> st[i];
	}
	sort(st, st + num, campare);
	for (int i = 0; i < num; i++){
		cout << st[i] << '\n';
	}
}