#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;
class Twitter {
private:
	vector<vector<unordered_set<int>>> user;
	vector<vector<int>> postid;
public:
    Twitter() {
		user.resize(501, vector<unordered_set<int>>(2));
    }
    
    void postTweet(int userId, int tweetId) {
		postid.push_back({userId, tweetId});
    }
    
    vector<int> getNewsFeed(int userId) {
		vector<int> ret;
		for (int i = postid.size()-1; i >= 0; i--){
			if (postid[i][0] == userId || user[userId][1].count(postid[i][0])){
				ret.push_back(postid[i][1]);
				if (ret.size() == 10)	return ret;
			}
		}
		return ret;
    }
    
    void follow(int followerId, int followeeId) {
		user[followerId][1].insert(followeeId);
		user[followeeId][0].insert(followerId);
    }
    
    void unfollow(int followerId, int followeeId) {
		user[followerId][1].erase(followeeId);
		user[followeeId][0].erase(followerId);
    }
};
int main(){

	return 0;
}

