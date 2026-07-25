class Solution {
public:
   string predictPartyVictory(string senate) {
        queue<int>q1, q2;
        int n = senate.size();
        for(int i = 0; i < n; i++){
        	if(senate[i] == 'R') q1.push(i);
        	else q2.push(i);
		}
		while(!q1.empty() && !q2.empty()){
			if(q1.front() < q2.front()){
				int front = q1.front();
				q1.pop(), q2.pop();
				q1.push(n + front);
			}
			else{
				int front = q2.front();
				q1.pop(), q2.pop();
				q2.push(n + front);
			}
		}
		if(q1.empty()) return "Dire";
		else return "Radiant";
}
};