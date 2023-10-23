//https://www.pbinfo.ro/resurse/9dc152/examene/2023/E_d_Informatica_2023_sp_MI_C_var_simulare_LRO.pdf
#include<iostream>
#include<fstream>

using std::cout, std::ifstream;

ifstream inputFile("bac.txt");
int main(){
	unsigned int i = 0, n, max = -1, previous;
	while(inputFile >> n){
		i++;
		if(n > max)
			max = n;
		if(n == max && previous<n)
			cout << i << ' ';
		previous = n;
	}
	inputFile.close();
	return 0;
}

