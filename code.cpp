#include <iostream>
#include <cstring>
using namespace std;
/*Chuẩn hóa tên theo kiểu nước ngoài ví dụ như là
Ngô Hoàng Minh -> Minh Ngô Hoàng*/

char* ch(char* s) {
	size_t k = strlen(s);
	s[0] = toupper(s[0]); 
	for (int i = 1; i < k; i++) {
		s[i] = tolower(s[i]); 
	}
	return s; 
}
int main() {
	char* ten = new char[55];
	cout << "Nhap ten chua duoc chuan hoa: "; 
	cin.getline(ten, 55); 
	char* final = new char[55]; 
	final[0] = '\0'; 
	char* temp = strtok(ten, " "); 
	while (temp != NULL) {
		temp = strtok(NULL, " "); 
	}
	size_t dem = strlen(temp); 
	strcat(final, temp);
	strcat(final, " "); 
	char* temp2 = strtok(ten, " "); 
	while (temp2 != NULL) {
		ch(temp2); 
		strcat(final, temp2);
		strcat(final, " ");
		temp2 = strtok(NULL, " "); 
	}
	size_t kt = strlen(final); 
	cout << kt - dem ;
	for (int i = kt - 2; i > kt - dem ; i++) {
		final[i] = '\0'; 
	}
	cout << final;

	

}
