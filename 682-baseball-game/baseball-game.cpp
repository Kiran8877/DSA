class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> fin;
        int j = 0;
        while (j < operations.size()) {
            if (operations[j] != "+" && operations[j] != "D" &&
                operations[j] != "C") {
                fin.push_back(stoi(operations[j]));
            }

            else if (operations[j] == "+") {
                if(fin.size()>1){
                    fin.push_back(fin[fin.size()- 2] + fin[fin.size() - 1]);
                }
                
            } else if (operations[j] == "D") {
                if(fin.size()>=1){
                    fin.push_back(2 * fin[fin.size() - 1]);
                }
                
            } else {
                fin.pop_back();
            }
            j++;
        }
        int sum = 0;
        for (int i = 0; i < fin.size(); i++) {
            sum = sum + fin[i];
        }
        return sum;
    }
};