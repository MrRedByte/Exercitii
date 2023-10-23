/*************************
 * The minimum per line
 * must be searched in the
 * matrix and then make the
 * adjacent lower value
 * level with the minimum.
**************************/
#include<iostream>

using std::cout, std::cin;

int main(){
	int m, n, s = 0;
	cin >> m >> n;
	int matrix[m][n];

	for(int i = 0; i < m; i++) // read the matrix
		for(int j = 0; j < n; j++)
			cin >> matrix[i][j];

	for(int i = 0; i < m; i++){
		int minimum = 10, adjacent = 10;
		for(int j = 0; j < n; j++) //find minimum per line
			if(minimum > matrix[i][j]) 
				minimum = matrix[i][j];

		for(int j = 0; j < n; j++){
			if(matrix[i][j] == minimum){
				if(i != 0 && minimum < matrix[i-1][j] && matrix[i-1][j] < adjacent)
					adjacent = matrix[i-1][j]; // UP
				if(i != m && minimum < matrix[i+1][j] && matrix[i+1][j] < adjacent)
					adjacent = matrix[i+1][j]; // DOWN
				if(j != 0 && minimum < matrix[i][j-1] && matrix[i][j-1] < adjacent)
					adjacent = matrix[i][j-1]; // LEFT
				if(j != n && minimum < matrix[i][j+1] && matrix[i][j+1] < adjacent)
					adjacent = matrix[i][j+1]; // RIGHT
				cout << minimum << ' ' << adjacent << '*';
			}
		}
		cout << '\n';
		s += adjacent - minimum;
	}
	cout << s << '\n';
	return 0;
}
