int QuerSumme(int n)
{
    int summe = 0;
    summe = n%10;
    while(n/10 > 0)
    {
        n = n/10;
        summe += n%10;

    }
    return summe;
}

int addDigits(int num) 
{
    int summe = QuerSumme(num);
    while (summe/10 > 0)
    {
        summe = QuerSumme(summe);
    }
    return summe;
}