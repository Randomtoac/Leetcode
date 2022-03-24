#include <iostream>
#include <string>
using namespace std;

const string ROMAN = "IVXLCDM##";

string intToRoman(int num){
	int flag = 0;
	string out = "";
	while (num){
		string cur = "";
		int last = num % 10;
		char c1 = ROMAN[2*flag];
		char c2 = ROMAN[2*flag+1];
		char c3 = ROMAN[2*flag+2];
		if (last == 4)	cur = cur + c1 + c2;
		if (last == 9)	cur = cur + c1 + c3;
		else if (last > 4){
			cur = cur + c2;
			last %= 5;
		}
		switch(last){
			case 3:
				cur += c1;
			case 2:
				cur += c1;
			case 1:
				cur += c1;
		}
		out = cur + out;
		num /= 10;
		flag++;
	}
	return out;
}

int main(){
	int num[5] = {3,8,9,58,1994};
	for (int i = 0; i < 5; i++){
		string out = intToRoman(num[i]);
		cout << out << endl; 
	} 

	return 0;
}

