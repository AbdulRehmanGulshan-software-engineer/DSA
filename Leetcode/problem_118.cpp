// 118. Pascal's Triangle

// solved Using previous elements

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        // 2D vector to return
        vector<vector<int>> pascal;

        // loop for rows
        for (int i = 0; i < numRows; i++)
        {
            vector<int> group(i + 1, 1); // create row of size (i+1) with all 1s elements

            // fill middle elements
            for (int j = 1; j < i; j++)
            {
                group[j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
            }

            // add row to pascal
            pascal.push_back(group);
        }
        return pascal;
    }
};

// solved just using 2d vector and resizing concept

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        // 2D vector to return
        vector<vector<int>> pascal(numRows);

        // loop for rows
        for (int i = 0; i < numRows; i++)
        {
            pascal[i].resize(i + 1); // resizing inner vectors to 1,2,3,4,5 size
                                     // for n = 5 example
            pascal[i][0] = 1;        // making boundry elements 1
            pascal[i][i] = 1;

            // fill middle elements using previous elements
            for (int j = 1; j < i; j++)
            {
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
            }
        }
        return pascal;
    }
};
