class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        // Initialize a 2D vector with 'rows' number of rows and 'cols' number of columns
        vector<vector<int>> arr2D(m, vector<int>(n));

        // Check if the total elements in the 1D array match the required elements in the 2D array
        if (m * n != original.size()) {
            return {};  // Return an empty vector if the dimensions don't match
        }

        // Fill the 2D array with elements from the 1D array
        for (int i = 0; i < m; i++) {        
            for (int j = 0; j < n; j++) {    
                // Calculate the correct index in the 1D array and assign the value to the 2D array
                arr2D[i][j] = original[i * n + j];
            }
        }

        
        return arr2D;
    }
};