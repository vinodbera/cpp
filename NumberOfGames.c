#include <stdio.h>
int main()
{
    int p, d, m, s;
    scanf("%d %d %d %d", &p, &d, &m, &s);
    int numToys = 0, cost = p, remBal = s, spent = 0;
    if(p>s){
        printf("%d",0);
    }
    else{
        while(cost>m){
            numToys++;
            spent+=cost;
            cost-=d;
        }
        remBal = s - spent;
        numToys+=(remBal/m);
        printf("%d",numToys);
    }
    return 0;
}