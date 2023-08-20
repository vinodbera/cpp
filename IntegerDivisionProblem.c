#include <stdio.h>
#include <string.h>

int main(void)
{
    int T;
    scanf("%d\n", &T);
    int t;
    for (t = 1; t <= T; t++)
    {
        int activities, totalpoints=0, numMonths=0;
        char origin[20];
        scanf("%d %s", &activities, origin);
        int i;
        for(i=0;i<activities;i++){
            char activity[20];
            scanf("%s", activity);
            if(strcmp(activity,"CONTEST_WON")==0){
                int rank;
                scanf("%d", &rank);
                if(rank<20){
                    totalpoints+=300+20-rank;
                }
                else{
                    totalpoints+=300;
                }
            }
            if(strcmp(activity,"TOP_CONTRIBUTOR")==0){
                totalpoints+=300;
            }
            if(strcmp(activity,"BUG_FOUND")==0){
                int severity;
                scanf("%d",&severity);
                totalpoints+=severity;
            }
            if(strcmp(activity,"CONTEST_HOSTED")==0){
                totalpoints+=50;
            }
        }
        if(strcmp(origin,"INDIAN")==0){
            numMonths=totalpoints/200;
        }
        else{
            numMonths=totalpoints/400;
        }
        printf("%d\n",numMonths);
    }
    return 0;
}
