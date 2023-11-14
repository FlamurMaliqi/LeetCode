class Solution {
    public int numberOfSteps(int num) 
    {
        int counter = 0;
        while (num != 0)
        {
            if (num % 2 == 1)
            {
                num = num - 1;
            }
            else
            {
                num = num/2;
            }
            counter++;
        }    
        return counter;
    }
}