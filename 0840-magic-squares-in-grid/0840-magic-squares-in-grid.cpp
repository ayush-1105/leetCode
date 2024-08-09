class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        if(n<3 || m < 3) return 0 ;
        int cnt = 0 ;
        vector<vector<vector<int>>> magicSq = {
            {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
            {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}},
            {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
            {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}},
            {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}},
            {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},
            {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},
            {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}}
        };
        int rStart = 0 , cStart = 0 ;
        for(rStart = 0 ; rStart <= n-3 ; rStart++){
            for(cStart = 0 ; cStart <= m-3 ; cStart++){
                vector<vector<int>> subgrid(3,vector<int>(3));
                for(int i= 0 ; i < 3 ; i++){
                    for(int j = 0 ; j < 3 ; j++){
                        subgrid[i][j] = grid[i+rStart][j+cStart] ;
                    }
                }
                for(int i = 0 ; i <= 7 ; ++i){
                    if(magicSq[i] == subgrid) cnt++;
                }

            }
        }
        return cnt ;
    }
};