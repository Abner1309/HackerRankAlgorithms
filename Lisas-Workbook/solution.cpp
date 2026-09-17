int workbook(int n, int k, vector<int> arr) {
    int specialPages = 0;
    int page = 1;

    for (int i = 0; i < n; i++) {
        int problems = arr[i];
        int problem = 1;

        while (problem <= problems) {
            int problemsOnThisPage = min(k, problems - problem + 1);
            int firstProblem = problem;
            int lastProblem = problem + problemsOnThisPage - 1;

            if (page >= firstProblem && page <= lastProblem) {
                specialPages++;
            }

            problem += problemsOnThisPage;
            page++;
        }
    }

    return specialPages;
}
