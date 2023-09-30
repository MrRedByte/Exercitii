#include<fstream>

int main(){
	int m, n, v[21][21], maxSum = 0;
	
	std::ifstream inputFile("file.in");
	std::ofstream outputFile("file.out");

	inputFile >> m >> n;

	if(2 >= m && m >= 20 && 2 >= n && n >= 20) return 0; 
	
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			int element;
			inputFile >> element;
			if(0 > element || element > 1000) return 0;
			v[i][j] = element;
		}
	}

	for(int i = 0; i < m-1; i++){
		for(int j = 0; j < n-1; j++){
			if(maxSum < v[i][j] + v[i+1][j] + v[i][j+1] + v[i+1][j+1])
				maxSum = v[i][j] + v[i+1][j] + v[i][j+1] + v[i+1][j+1];
		}
	}
	outputFile << maxSum << '\n';

	inputFile.close();
	outputFile.close();
	return 0;
}

