#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;
string numberToWords(int num);
int main(){
	cout << numberToWords(1000010) << endl;
	return 0;
}
string numberToWords(int num){
	if (!num)	return "Zero";
	string ten[11] = {"", "One", "Two", "Three", "Four", "Five", 
					"Six", "Seven", "Eight", "Nine", "Ten"};
	string teen[11] = {"", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", 
					"Sixteen", "Seventeen", "Eighteen", "Nineteen", "Twenty"};
	string ty[10] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", 
					"Sixty", "Seventy", "Eighty", "Ninety"}; 
	string times[4] = {"", " Thousand", " Million", " Billion"};
	string ret;
	int flag = -1;
	while(num){
		int back3 = num % 1000;
		flag++;
		string cur;
		if (back3 > 99){
			int num100 = back3/100;
			cur.append(ten[num100]);
			cur.push_back(' ');
			cur.append("Hundred");
			back3 %= 100;
		}
		if (back3 == 0){
		}
		else if (back3 > 0 && back3 <= 10){
			if (cur != "")	cur.push_back(' ');
			cur.append(ten[back3]);
		}
		else if (back3 <= 20){
			if (cur != "")	cur.push_back(' ');
			cur.append(teen[back3-10]);
		}
		else{
			int num10 = back3/10;
			if (cur != "")	cur.push_back(' ');
			cur.append(ty[num10]);
			if (back3%10){
				cur.push_back(' ');
				cur.append(ten[back3%10]);
			}	
		}
		num /= 1000;
		if (cur == "")	continue;
		if (ret != ""){
			ret = " " + ret;
		}
		ret = times[flag] + ret;
		ret = cur + ret;
	}
	return ret;
}
