#include <stdio.h>

int main() {
    int MARKS[20][5];
    float subAvg[5]={0}, stuAvg[20]={0};
    int i,j,countBelow50=0;

    printf("Enter marks of 20 students in 5 subjects:\n");
    for(i=0;i<20;i++){
        for(j=0;j<5;j++){
            scanf("%d",&MARKS[i][j]);
        }
    }

    for(j=0;j<5;j++){
        for(i=0;i<20;i++){
            subAvg[j]+=MARKS[i][j];
        }
        subAvg[j]/=20;
    }

    for(i=0;i<20;i++){
        for(j=0;j<5;j++){
            stuAvg[i]+=MARKS[i][j];
        }
        stuAvg[i]/=5;
        if(stuAvg[i]<50)
            countBelow50++;
    }

    printf("\nMarks of each student:\n");
    for(i=0;i<20;i++){
        printf("Student %d: ",i+1);
        for(j=0;j<5;j++){
            printf("%d ",MARKS[i][j]);
        }
        printf("\n");
    }

    printf("\nAverage marks of each subject:\n");
    for(j=0;j<5;j++){
        printf("Subject %d: %.2f\n",j+1,subAvg[j]);
    }

    printf("\nAverage marks of each student:\n");
    for(i=0;i<20;i++){
        printf("Student %d: %.2f\n",i+1,stuAvg[i]);
    }

    printf("\nStudents scoring below 50 average: %d",countBelow50);
    
    return 0;
}

