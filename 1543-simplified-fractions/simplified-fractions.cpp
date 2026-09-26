class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string> ans;

        for(int deno=2;deno<=n;deno++){
            for(int numi=1;numi<deno;numi++){
                if(gcd(numi,deno) == 1){
                    string fraction = to_string(numi) + "/" + to_string(deno);
                    ans.push_back(fraction);
                }
            }
        }
        return ans;
    }
};