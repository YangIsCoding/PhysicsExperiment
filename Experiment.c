#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
//#include <windows.h>
#include <math.h>
#include <unistd.h>
#include <time.h>
int main(){
	printf("阿基米德被稱為古典物理之父，他發現了浮力\n現在你回到古代變成他的競爭對手\n你打了個程式\n直接讓科學發展進步200年\n");
	srand(time(NULL));
	printf("press 'a' and 'enter'\n\n");
	char c;
	scanf("%c",&c);
	if(c == 'a'||c=='A'){
		printf("U've pick a brick,.Chose one of the following experiments to perform\n");
		printf("1:Throw vertically ahead. 2:Gently put it into the water. 3:Conduct a flat flow experiment\n");
	
		int a;
		scanf("%d",&a);
		if(a == 1){
			float s = rand()%10+rand()%20*0.01;
			printf("You have thrown the brick with an initially velocity of %.2f m/s^2\n",s);
			printf("Wait...\n");
			sleep(3);
			printf("The highest point:%.2fm\n",pow(s,2)/2*9.8);
			printf("The time been used:%.2fs\n",sqrt(2*pow(s,2)/2*9.8/9.8)*2);	
			printf("U are knocked down by the brick...\n");
		}
		if(a==2){
			float s = rand()%30+rand()%20*0.01;
			float f = rand()%10+rand()%20*0.01;
                        printf("You have gently put the brick in a bucket of the water \n");
			if(rand()%2==0){
				printf("It is sinking...\n");
				sleep(2);
				printf("The water has drained %.2f cm/s^2\n, so the volume of the brick is %.2f\n",s,s);
				printf("The acceleration of the sinking rate is %.2f cm/s^2\n",f);
				printf("so...\n");
				sleep(2);
				printf("The desity of the brick is %.2f\n",9.8/(9.8-f));
				if(9.8/(9.8-f)<1){
					printf("UMM..there is something wrong...\n");
				}
			}
			else{
				float s = rand()%30+rand()%20*0.01;
                        	float f = rand()%10+rand()%20*0.01;

				printf("It is floating...\n");
				sleep(2);
				printf("The water has drained %.2f cm/s^2\n, so the volume of a part if the brick is %.2f\n",s,s);
				printf("Then u press it until it is completely sinked\n...");
				printf("The water has drained %.2f cm/s^2\n",f);
				printf("The total volume of the brick is equal to the total volume of the drained water:%.2f\n",s+f);
				//printf("The desity of the brick is %.2f\n",9.8/(9.8-f));
			}
		}
		if(a==3){
			float s = rand()%30+rand()%20*0.01;
                        float f = rand()%10+rand()%20*0.01;
			printf("You have thrown the brick with an initially velocity of %.2f m/s^2\n",s);
			printf("The hight of the thowing point %.2fm\n",f+1.7);
			printf("Wait...\n");
                        sleep(3);
			printf("The travel time:%.2f s\n",sqrt(2*(f+1.7)/9.8));
                        printf("The farest point:%.2fm\n",s*sqrt(2*(f+1.7)/9.8));
		}
		
	}
}
	

