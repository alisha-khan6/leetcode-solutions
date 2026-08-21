class Solution {
private :
    // long long fact(int a) {
    //     long long f = 1;
    //     for (int i = 1; i <= a; i++) {
    //         f *= i;
    //     }
    //     return f;
    // }

    int ncr(int n, int r) {
        // Use symmetry: C(n,r) = C(n,n-r)
        r = min(r, n-r);

        long long numerator = 1;
        long long denominator = 1;

        for (int i = 1; i <= r; i++) {
            numerator *= (n - i + 1);
            denominator *= i;
        }

        return numerator / denominator;
    }
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> a ;
        for(int i = 0 ; i < numRows ; i++){
            vector<int> row ;
            for(int j = 0 ; j <= i ; j++)
                row.push_back(ncr(i,j));
                
                a.push_back(row); 
        }
        return a ;
    }
};
