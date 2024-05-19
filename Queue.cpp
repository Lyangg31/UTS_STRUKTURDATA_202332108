#include <iostream>
#include <queue>
using namespace std; 

int main(){
	queue <int> angka;
	
	angka.push(10);
	angka.push(20);
	angka.push(30);
	
	while (!angka.empty()) {
		cout << "Urutan elemen queue : " << angka.front () << endl;
		angka.pop();
	}
	return 0;
}
