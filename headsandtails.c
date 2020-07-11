#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Heads or Tails Simulation

int main(){
	
	time_t t;
	int i,n,heads=0,tails;
	double p;
	printf("Number of experiments:");
	scanf("%d",&n);
	double r[n];
	
	srand(time(&t));
	
	//If r<0.5,let's say heads.And r>=0.5,Let's say tails.
	for(i=0;i<n;i++){
		r[i]=(double) rand()/RAND_MAX;
		if(r[i]<0.5){
			heads++;
		}
	}
	
	p=(double)heads/n;
	tails=n-heads;
	
	printf("Heads:%d\nTails:%d\nP:%.2f and %.2f",heads,tails,p,1.0-p);
	
	return 0;
}
