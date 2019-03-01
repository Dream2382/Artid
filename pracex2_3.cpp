#include<iostream>
#include <ctime>

using namespace std;
char table[8][8];

void showTable();
void randomTable();

int main(){

	srand(time(0));	
	randomTable();
	showTable();
}

void showTable(char table[8][8]){
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			cout << table[i][j] << " ";
		}
		cout << "\n";
	}
}


void randomTable(char table[8][8]){
for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			char x = rand()%65-64 +rand()%90;
			 table[i][j] = x;
		}
}
}

