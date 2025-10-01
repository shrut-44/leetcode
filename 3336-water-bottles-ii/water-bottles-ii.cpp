class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int totalBottles = numBottles;
        int fullBottles = 0;
        int emptyBottles = numBottles;
        while(emptyBottles>=numExchange || fullBottles!=0){
            if(emptyBottles<numExchange){
                totalBottles+=fullBottles;
                emptyBottles+=fullBottles;
                fullBottles = 0;
            }
            else{
                emptyBottles-=numExchange;
                fullBottles++;
                numExchange++;
            }
        }
        return totalBottles;
    }
};