#include<iostream>
using namespace std;

template <typename T>
int countIf(T data[],int size,T key){
	//Write your code here
	int count=0;
	for(int i=0;i<size;i++){
		if(  data[i] == key){
			count+=1;
	}

}
return count;

}

int main(){
	int a[] = {9,8,7,9,8,7,1,2,3,0,0,0};
	cout << countIf(a,12,0) << "\n";
	cout << countIf(a,12,8) << "\n";
	
	char b[] = "CCCCCC";
	cout << countIf(b,6,'C') << "\n";
	cout << countIf(b,6,'E') << "\n";
	
	return 0;
}
