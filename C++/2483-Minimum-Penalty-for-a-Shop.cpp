class Solution {
public:
    int bestClosingTime(string customers) {
        int count = 0, penalty = 0, hour = 0;
        for (int i = 0; i < customers.length(); i++)
        {
            count += (customers[i] == 'Y') ? -1 : 1;
            if (count < penalty)
            {
                penalty = count;
                hour = i+1;
            }
        }
        return hour;
    }
};
