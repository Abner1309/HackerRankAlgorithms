int cellSurface(const vector<vector<int>> &A, const int row, const int col) {
	int top = A[row][col], down = A[row][col];
	int front = A[row][col], back = A[row][col];
	int left = A[row][col], right = A[row][col];
	int sum = 0, diff = 0;

	// Top and Down are always equal to one:
	top = 1; down = 1;
	
	// Front Side:
	diff = (col == 0) ? A[row][col] : A[row][col-1] - A[row][col];
	front = (diff < 0) ? 0 : diff; 
	
	// Back Side:
	diff = (col == A[row].size() - 1) ? A[row][col] : A[row][col+1] - A[row][col];
	back = (diff < 0) ? 0 : diff;
	
	// Left Side:
	diff = (row == 0) ? A[row][col] : A[row-1][col] - A[row][col];
	left = (diff < 0) ? 0 : diff;
	
	// Right Side:
	diff = (row == A.size() - 1) ? A[row][col] : A[row+1][col] - A[row][col];
	right = (diff < 0) ? 0 : diff;
	
	sum = top + down + front + back + left + right;
	return sum;
}

int surfaceArea(vector<vector<int>> A) {
	int surface = 0;
	
	for (int i = 0; i < A.size(); i++) {
		for (int j = 0; j < A[i].size(); j++) {
			surface += cellSurface(A, i, j);
		}
	}
	
	return surface;
}
