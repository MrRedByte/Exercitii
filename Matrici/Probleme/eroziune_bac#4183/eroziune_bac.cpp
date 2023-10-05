#include<iostream>
using std::cin, std::cout;

int main(){
	short s = 0, m, n;
	cin >> m >> n;
	short v[m][n];

	for(short i = 0; i < m; i++)
		for(short j = 0; j < n; j++)
			cin>>v[i][j];

	for(short i = 0; i < m; i++){
		for(short j = 0; j < n; j++){
			short minimum = 10;
			if(i != 0 && v[i-1][j] < minimum)
				minimum = v[i-1][j]; // UP
			if(i != m && v[i+1][j] < minimum)
				minimum = v[i+1][j]; // DOWN
			if(j != 0 && v[i][j-1] < minimum)
				minimum = v[i][j-1]; // LEFT
			if(j != n && v[i][j+1] < minimum)
				minimum = v[i][j+1]; // RIGHT
			if(v[i][j]<minimum)
				s += minimum - v[i][j];
		}
	}
	cout << s << '\n';
	return 0;
}
