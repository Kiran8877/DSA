class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int moves = 0;

        while (target > 1) {
            if (maxDoubles == 0) {
                moves += target - 1;   
                break;
            }

            if (target % 2 == 0 && maxDoubles > 0) {
                target = target / 2;
                maxDoubles--;
            } else {
                target = target - 1;
            }
            moves++;
        }
        return moves;
    }
};
