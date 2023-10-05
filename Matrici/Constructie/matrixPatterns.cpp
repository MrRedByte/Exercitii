#include<iostream>
using std::cout, std::cin;

int main(){
	short n;
	cin >> n;

	cout<<"***************\nLINEAR MATRIXES\n***************\n";
	cout << "Top down: \n";
	for(short i = 1; i <= n; i++){
		for(short j = 1; j <= n; j++){
			cout << i;
		}
		cout << '\n';
	} cout << "\n";

	cout << "Left to right: \n";
	for(short i = 1; i <= n; i++){
		for(short j = 1; j <= n; j++){
			cout << j;
		}
		cout << '\n';
	} cout << "\n";

	cout << "Down up: \n";
	for(short i = 1; i <= n; i++){
		for(short j = 1; j <= n; j++){
			cout << n - i + 1;
		}
		cout << '\n';
	} cout << "\n";

	cout << "Right to left: \n";
	for(short i = 1; i <= n; i++){
		for(short j = 1; j <= n; j++){
			cout << n - j + 1;
		}
		cout << '\n';
	} cout << "\n";


	cout<<"***************\nRADIAL MATRIXES\n***************\n";
	cout << "Lowest value top left: \n";
	for(short i = 1; i <= n; i++){
		for(short j = 1; j <= n; j++){
			if(i > j) cout << i;
			else cout << j;
		}
		cout << '\n';
	} cout << "\n";

	cout << "Lowest value top right: \n";
	for(short i = 1; i <= n; i++){
		for(short j = 1; j <= n; j++){
			if(i + j > n + 1) cout << i;
			else cout << n - j + 1;
		}
		cout << '\n';
	} cout << "\n";

	cout << "Lowest value bottom left: \n";
	for(short i = 1; i <= n; i++){
		for(short j = 1; j <= n; j++){
			if(i + j < n + 1) cout << n - i;
			else cout << j;
		}
		cout << '\n';
	} cout << "\n";

	cout << "Lowest value bottom right: \n";
	for(short i = 1; i <= n; i++){
		for(short j = 1; j <= n; j++){
			if(i < j) cout << n - i + 1;
			else cout << n - j + 1;
		}
		cout << '\n';
	} cout << "\n";


	cout << "***************\nRADIAL MATRIX ODD\n***************\n";
	//https://www.geeksforgeeks.org/print-concentric-rectangular-pattern-in-a-2d-matrix/
    int s = 2 * n - 1;// number of rows and columns to be printed

    /*
	 *     ________
	 *     |\    /|
	 *     | \  / |
	 *     |  \/  |
	 *     |  /\  |
	 *     ________
	 *     | /  \ |
	 *     |/    \|
	 *     ________
	 */

    for (int i = 0; i < (s / 2) + 1; i++) {// Upper Half
        int m = n;
        for (int j = 0; j < i; j++) {// Decreasing part
            cout << m << " ";
            m--;
        }
        for (int k = 0; k < s - 2 * i; k++) {// Constant Part
            cout << n - i << " ";
        }

        m = n - i + 1;
        for (int l = 0; l < i; l++) {// Increasing part.
            cout << m << " ";
            m++;
        }
        cout << '\n';
    }

    for (int i = s / 2 - 1; i >= 0; i--) {// Lower Half (below the middle line)
        int m = n;
        for (int j = 0; j < i; j++) { // Decreasing Part
            cout << m << " ";
            m--;
        }
        for (int k = 0; k < s - 2 * i; k++) {// Constant Part.
            cout << n - i << " ";
        }

        m = n - i + 1;
        for (int l = 0; l < i; l++) {// Decreasing Part
            cout << m << " ";
            m++;
        }
        cout << '\n';
    }


	cout << "***************\nABOMINATIONS - cool patterns tbh\n***************\n";
	cout << "Lowest value top left (inverse): \n";
	for(short i = 1; i <= n; i++){
		for(short j = 1; j <= n; j++){
			if(i > j) cout << n - i + 1;
			else cout << n - j + 1;
		}
		cout << '\n';
	} cout << "\n";

	cout << "Lowest value bottom right (inverse): \n";
	for(short i = 1; i <= n; i++){
		for(short j = 1; j <= n; j++){
			if(i + j < n + 1) cout << i;
			else cout << n - j + 1;
		}
		cout << '\n';
	} cout << "\n";

	cout << "Weird pattern: \n";
	for(short i = 1; i <= n; i++){
		for(short j = 1; j <= n; j++){
			if(i + j > n + 1) cout << n - i + 1;
			else cout << n - j + 1;
		}
		cout << '\n';
	} cout << "\n";

	cout << "Weird pattern: \n";
	for(short i = 1; i <= n; i++){
		for(short j = 1; j <= n; j++){
			if(i + j > n + 1) cout << n - i + 1;
			else cout << n - j + 1;
		}
		cout << '\n';
	} cout << "\n";

	return 0;
}
