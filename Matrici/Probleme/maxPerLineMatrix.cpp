#include<iostream>

int main(){
	int ns, nd, v[1001][51], x[1001], y[1001], maxLinie;
	unsigned int index = 0;

	std::cout << "Introduceti numarul de linii: ";
	std::cin >> ns;
	std::cout << "Introduceti numarul de coloane: ";
	std::cin >> nd;

	for(int i = 1; i <= ns; i++)
		for(int j = 1; j <= nd; j++)
			std::cin >> v[i][j];
	
	for(int i = 1; i <= ns; i++){
		maxLinie = 0;
		for(int j = 1; j <= nd; j++){
			if(v[i][j] > maxLinie){
				maxLinie = v[i][j];
				x[index] = i;
				y[index] = j;
			}
		}
		index++;
	}

	for(int i = 0; i < index; i++)
		std::cout << x[i] << ':' << y[i] << ' ';

//https://stackoverflow.com/questions/755835/how-to-add-element-to-c-array
	return 0;
}
