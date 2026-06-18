class Solution {
public:
   
    double angleClock(int hour, int minutes) {
        double minute_angle = minutes * 6;
        double hour_angle = 30 * (hour%12) + 0.5 * minutes;
        return min(abs(hour_angle-minute_angle) , 360 - abs((hour_angle-minute_angle)));

    }
};