class Solution 
{
    public int distanceTraveled(int mainTank, int additionalTank) 
    {
        int totalConsumption = 0;
        while(mainTank > 0)
        {
            for(int i = 0; i < 5; i ++)
            {
                if(mainTank > 0)
                {
                    mainTank = mainTank - 1;
                    totalConsumption = totalConsumption + 1;
                }
                else
                {
                    return totalConsumption*10;
                }
            }
            if(additionalTank>0)
            {
                mainTank = mainTank + 1;
            }
            additionalTank = additionalTank - 1;
            
        }
        return totalConsumption*10;
    }
}