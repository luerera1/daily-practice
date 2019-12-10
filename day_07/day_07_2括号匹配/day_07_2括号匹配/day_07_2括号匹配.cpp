class Parenthesis {
public:
	bool chkParenthesis(string A, int n) {
		// write code here
		stack<char> sc;
		for (auto &e : A){
			switch (e){
			case '(':
				sc.push(e);
				break;
			case ')':
				if (sc.empty() || sc.top() != '(')
					return false;
				sc.pop();
				break;
			default:
				return false;
			}
		}
		return true;
	}
};