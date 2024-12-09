#include <iostream>
#include <cstring>
using namespace std;
//Bài toán cấp email thường gặp khi bạn cần cung cấp email cho các nhân viên trong 1 công ty hay các sinh viên trong trường đại học dựa trên tên của học
//
//Ví dụ tên "Nguyen Van Nam" sẽ được cấp email là "namnv@28tech.com.vn" chẳng hạn
//
//Tên email được cấp bằng cách lấy tên và ghép với các chữ cái đầu tiên của họ và đệm.
//
//Có nhiều kiểu cấp email khác nhau nhưng bạn có thể làm tương tự kiểu chuẩn email này.
char* cd(char* s) {
	size_t k = strlen(s);
	s[0] = tolower(s[0]);
	for (int i = 1; i < k; i++) {
		s[i] = '\0'; 
	}
	return s;
}
int main() {
	char* ten = new char[55];
	char* ten2 = new char[55];
	strcpy(ten2, ten);
	cin.getline(ten, 55);
	char* final = new char[100];
	final[0] = '\0'; 
	const char* domain = "@gmail.com";
	char* last = strtok(ten, " "); 
	while (last != NULL) {
		last = strtok(NULL, " ");
	}
	//Tách được last ra riêng rồi
	char* temp = strtok(ten2, " "); 
	while (temp != NULL) {
		if (temp != last) {
			cd(temp);
			strcat(final, temp);
			strcat(final, " "); 
		}
		temp = strtok(ten2, " "); 
	}
	strcat(final, last);
	strcat(final, domain); 
	cout << final; 
}
