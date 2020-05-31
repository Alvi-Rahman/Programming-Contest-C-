#include<bits/stdc++.h>
int main()
{
    int n, s;
    while (scanf("%d %d", &n, &s) ==2)
    {
    	int num[n];
        int i;
        for (i = 0; i < n; i++)
            scanf("%d", &num[i]);
        int sum = 0, tail = 0, min = 100000;
        for (i = 0; i < n; i++)
        {
            sum += num[i];
            while (sum >= s)
            {
                min = (i-tail+1) < min ? (i - tail + 1) : min;
                sum -= num[tail++];
            }
        }
        printf("%d\n", min == 100000 ? 0 : min);
    }
    return 0;
}
