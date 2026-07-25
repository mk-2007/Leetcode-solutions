class Solution {
public:
   string predictPartyVictory(string senate) {
        queue<int>q1, q2;
        int N = senate.size();
        for(int i = 0; i < N; i++){
        	if(senate[i] == 'R') q1.push(i);
        	else q2.push(i);
		}
		while(!q1.empty() && !q2.empty()){
			if(q1.front() < q2.front()){
				int front = q1.front();
				q1.pop(), q2.pop();
				q1.push(N + front);
			}
			else{
				int front = q2.front();
				q1.pop(), q2.pop();
				q2.push(N + front);
			}
		}
		if(q1.empty()) return "Dire";
		else return "Radiant";
}
};