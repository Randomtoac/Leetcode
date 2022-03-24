#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
void deleteNode(ListNode* node);
int main(){

	return 0;
}
void deleteNode(ListNode* node){
	*node = *node->next;
}
