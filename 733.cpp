#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor);
int main(){
	vector<vector<int>> image = {{0,0,0},{0,1,1}};
	int sr = 1, sc = 1, newColor = 1;
	vector<vector<int>> newimage = floodFill(image, sr, sc, newColor);
	for (int i = 0; i < newimage.size(); i++){
		for (int j = 0; j < newimage[0].size(); j++){
			cout << newimage[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
	queue<pair<int, int>> q;
	vector<vector<bool>> visited(image.size(), vector<bool>(image[0].size(), false));
	int ori = image[sr][sc];
	q.push(make_pair(sr, sc));
	while(!q.empty()){
		int x = q.front().first, y = q.front().second;
		image[x][y] = newColor;
		visited[x][y] = true;
		q.pop();
		if (x > 0 && image[x-1][y] == ori && (!visited[x-1][y]))	q.push(make_pair(x-1, y));
		if (x < image.size()-1 && image[x+1][y] == ori && (!visited[x+1][y]))	q.push(make_pair(x+1, y));
		if (y > 0 && image[x][y-1] == ori && (!visited[x][y-1]))	q.push(make_pair(x, y-1));
		if (y < image[0].size()-1 && image[x][y+1] == ori && (!visited[x][y+1]))	q.push(make_pair(x, y+1));
	}
	return image;
}
