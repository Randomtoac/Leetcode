#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;

int main(){

	return 0;
}
class Bank {
private:
	vector<long long> balance;
	int n;
public:
    Bank(vector<long long>& _balance) {
		this->balance = _balance;
		this->n = balance.size();
    }
    
    bool transfer(int account1, int account2, long long money) {
		if (invalid(account1, money) || invalid(account2, 0))	return false;
		balance[account1-1] -= money;
		balance[account2-1] += money;
		return true;
    }
    
    bool deposit(int account, long long money) {
		if (invalid(account, 0))	return false;
		balance[account-1] += money;
		return true;
    }
    
    bool withdraw(int account, long long money) {
		if (invalid(account, money))	return false;
		balance[account-1] -= money;
		return true;
    }
    bool invalid(int account, long long money){
    	if (account <= 0 || account > n || money > balance[account-1])
    		return true;
    	return false;
	}
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */
