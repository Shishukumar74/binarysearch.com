class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n = sandwiches.size();
        vector<int> student_count(2, 0);
        for (auto s : students) student_count[s]++;
       
        for (int i = 0; i < n; i++) {
            student_count[sandwiches[i]]--;
            if (student_count[sandwiches[i]] < 0) return n - i;
        }
        
        return 0;
    }
};