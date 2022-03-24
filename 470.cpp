#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rand7(){
	return rand()%7 + 1;
}

int rand10(){
    int a = rand7(), b = rand7();
    while(a==1) a = rand7();
    while(b>5)  b = rand7();
    return (a&1 ? 0 : 5) + b;
}

int main(){
	srand(time(0));
	int n;
	cin >> n;
	while (n--){
		cout << rand10() << endl;
	}

	return 0;
}

