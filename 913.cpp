#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;

int catMouseGame(vector<vector<int>>& graph);
int getResult(int mouse, int cat, int turn, vector<vector<int>>& graph);
void getNextResult(int mouse, int cat, int turn, vector<vector<int>>& graph);

const int CAT_WIN = 2;
const int MOUSE_WIN = 1;
const int DRAW = 0;
const int MAXN = 51;
vector<vector<vector<int>>> dp(MAXN, vector<vector<int>>(MAXN, vector<int>(MAXN*2, -1)));

int main(){

	return 0;
}

int catMouseGame(vector<vector<int>>& graph){
	return getResult(1, 2, 0, graph);
}
int getResult(int mouse, int cat, int turn, vector<vector<int>>& graph){
	if (turn == 2 * graph.size())	return DRAW;
	if (dp[mouse][cat][turn] < 0){
		if (mouse == 0)	dp[mouse][cat][turn] = MOUSE_WIN;
		else if (cat == mouse)	dp[mouse][cat][turn] = CAT_WIN;
		else	getNextResult(mouse, cat, turn, graph);
	}
	return dp[mouse][cat][turn];
}
void getNextResult(int mouse, int cat, int turn, vector<vector<int>>& graph){
	int curMove = turn % 2 ? cat : mouse;
	int defaultResult = curMove == mouse ? CAT_WIN : MOUSE_WIN;
	int result = defaultResult;
	for (int& next : graph[curMove]){
		if (curMove == cat && next == 0)	continue;
		int nextMouse = curMove == mouse ? next : mouse;
		int nextCat = curMove == cat ? next : cat;
		int nextResult = getResult(nextMouse, nextCat, turn+1, graph);
		if (nextResult != defaultResult){
			result = nextResult;
			if (result != DRAW)	break;
		}
	}
	dp[mouse][cat][turn] = result;
}
