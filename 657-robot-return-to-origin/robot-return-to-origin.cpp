class Solution {
public:
    bool judgeCircle(string moves) {
        int horz = 0;
        int vert = 0;
        for(auto i : moves)
        {
            if(i == 'L')
            {
                horz++;
            }
            else if(i == 'R')
            {
                horz--;
            }
            else if(i == 'U')
            {
                vert++;
            }
            else
            {
                vert--;
            }
        }

        return vert == 0 && horz == 0;
    }
};