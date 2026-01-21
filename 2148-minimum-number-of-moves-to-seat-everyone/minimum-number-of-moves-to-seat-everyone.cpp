class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int moves=0;
        int temp=0;
        for(int i=0;i<seats.size();i++){
            temp=abs(seats[i]-students[i]);
            moves=moves+temp;
        }
        return moves;
    }
};