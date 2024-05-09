class Solution {
    public boolean isHappy(int n) 
    {
        boolean ergebnis = false;
        ArrayList list = new ArrayList();
        while (n != 0)
        {
            if(list.contains(n))
            {
                ergebnis = false;
                break;
            }
            list.add(n);
            n = happynumber(n);
            
            if (n == 1)
            {
                ergebnis = true;
                break;
            }
        }
        return ergebnis;
    }
    public int happynumber(int n)
    {
        int sum = 0;
        while(n > 0)
        {
            int digit = n % 10;
            sum += digit * digit;
            n = n / 10;
        }
        return sum;
    }
}