class Board {
public:
	bool checkWon(vector<vector<int> > board) {
		// write code here
		int row = board.size();
		int i = 0, j = 0, sum = 0;
		for (int i = 0; i<row; i++){
			for (int j = 0; j<row; j++){
				sum += board[i][j];
			}
			if (sum == row)
				return true;
		}
		for (int i = 0; i<row; i++){
			sum = 0;
			for (int j = 0; j<row; j++){
				sum += board[j][i];
			}
			if (sum == row)
				return true;
		}
		sum = 0;
		for (int i = 0; i<row; i++){
			sum += board[i][i];
		}
		if (sum == row)
			return true;
		for (i = 0; i<row; i++){
			sum += board[i][row - i - 1];
		}
		if (sum == row)
			return true;
	}
};