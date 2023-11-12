import java.util.ArrayList;
import java.util.List;

class Solution {
    public int removeDuplicates(int[] nums) 
    {
        int counter = 1;
        List<Integer> solution = new ArrayList<>();

        for (int i = 1; i < nums.length; i++) 
        {
            if (nums[i] != nums[i - 1]) 
            {
                counter++;
                solution.add(nums[i - 1]);
            }
        }
        if (nums.length > 0) 
        {
            solution.add(nums[nums.length - 1]); 
        }
        for (int i = 0; i < solution.size(); i++) 
        {
            nums[i] = solution.get(i);
        }

        return counter;
    }
}
