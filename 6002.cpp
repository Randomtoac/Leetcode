#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;

class Bitset {
	private:
		vector<bool> v, w;
		int cntv, cntw;
		int n;
		bool flag;
		string s, t;
	public:
	    Bitset(int size) {
			cntv = 0;
			cntw = size;
			n = size;
			v.resize(size);
			w.resize(size);
			for (int i = 0; i < size; i++){
				v[i] = false;
				s.push_back('0');
				w[i] = true;
				t.push_back('1');
			}
			flag = true;
	    }
	    
	    void fix(int idx) {
	    	if (flag){
	    		if (!v[idx])	cntv++;
				v[idx] = true;
				s[idx] = '1';
				if (w[idx])	cntw--;
				w[idx] = false;
				t[idx] = '0';
			}
			else{
				if (v[idx])	cntv--;
				v[idx] = false;
				s[idx] = '0';
				if (!w[idx])	cntw++;
				w[idx] = true;
				t[idx] = '1';
			}
	    }
	    
	    void unfix(int idx) {
			if (!flag){
	    		if (!v[idx])	cntv++;
				v[idx] = true;
				s[idx] = '1';
				if (w[idx])	cntw--;
				w[idx] = false;
				t[idx] = '0';
			}
			else{
				if (v[idx])	cntv--;
				v[idx] = false;
				s[idx] = '0';
				if (!w[idx])	cntw++;
				w[idx] = true;
				t[idx] = '1';
			}
	    }
	    
	    void flip() {
			flag = !flag;
	    }
	    
	    bool all() {
			return flag ? cntv == n : cntw == n;
	    }
	    
	    bool one() {
			return flag ? cntv > 0 : cntw > 0;
	    }
	    
	    int count() {
			return flag ? cntv : cntw;
	    }
	    
	    string toString() {
			return flag ? s : t; 
	    }
};
