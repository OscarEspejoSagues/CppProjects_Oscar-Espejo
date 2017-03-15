#include <iostream>
#include <string>
#include <ctime>
#include <conio.h>

int x;

int selectordedificultad(int dificultad){
	if (dificultad==1){
		x = 1;
		return x;
	}
	else if (dificultad == 2) {
		x = 2;
		return x;
	}
	else if (dificultad==3) {
		x = 3;
		return x;
	}
}

class Player;
class CoinManager;


class MAP {
	char **md;
	int row = 5*x;
	int colum = 5*x*2;

	md = new char *[row];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < row; i++) {
			md[i] = new char[colum];
			md[i][j] = '.';
		}
	}

};


