#include <iostream> 
using namespace std;
int main(){
	int arr[]={0,1,2,3,4,5,6,7,8,9};
	int *Apuntador;
	int total=0, promedio=0;


	Apuntador=&arr[0];
	for(int i=0; i < 10; i++){
		cout << "valor directo: " << &arr[i] << endl;
		cout << "valor" << arr [i] << endl;
		total = total +*Apuntador++;
	}
	promedio = total / 10;
	cout << "suma= " << total << endl;
	cout << "promedio: " << promedio << endl;
	return 0;
}
