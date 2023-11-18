int betrag(int num)
{
    if (num < 0)
    {
        return -num;
    }
    else
    {
        return num;
    }
}

int threeSumClosest(int* nums, int numsSize, int target) 
{
    int result = 5000; 
    int diff = 50000; 

    for(int i = 0; i < numsSize - 2; i++)
    {
        for(int j = i + 1; j < numsSize - 1; j++)
        {
            for(int k = j + 1; k < numsSize; k++)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if (betrag(sum - target) < diff)
                {
                    result = sum;
                    diff = betrag(sum - target);
                }
            }
        }
    }

    return result;
}
