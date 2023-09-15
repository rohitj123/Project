#include<stdio.h>
int main() 
{
	int totalp, i, twt=0, ttat=0;
	float awt, atat;
	int BT[4];
	int WT[4];
	int TAT[i];
	i=0;
	WT[i]=0;
	totalp=4;
	printf("Enter The Number of Processes \n");
	scanf("%d", &totalp);
	printf("Enter The Burst Time of Maximum 4 Processes \n");
	for(i=0; i<totalp; i++)
	{
		scanf("%d", &BT[i]);
	}
	i=0;
	printf("Waiting Time for all Processes are as follow \n");
	printf("p[%d]=%d \n", i, WT[i]); 
	for(i=0; i<totalp; i++)
	{
		WT[i]=WT[i-1]+BT[i-1];
		printf("p[%d]=%d \n", i, WT[i]);
	}
	for(i=0; i<totalp; i++)
	{
		twt=twt+WT[i];
	}
	awt=(float)twt/totalp;
	printf("Total Waiting Time=%d \n", twt);
	printf("average Waiting Time=%f \n", awt);
	printf("turmaround Time for all Processes are as follow \n");
	for(i=0; i<totalp; i++)
	{
		TAT[i]=BT[i]+WT[i];
		printf("p[%d]=%d \n", i, TAT[i]);
	}
	for(i=0; i<totalp; i++)
	{
		ttat=ttat+TAT[i];
	}
	atat=ttat/totalp;
	printf("Total Turnaround Time=%d \n", ttat);
	printf("average turnaround time=%f \n", atat);
	return 0;
}
