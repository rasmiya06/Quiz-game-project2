#include<stdio.h>
int main() {
    int i;
    int ans1,ans2,ans3,ans4,ans5;
    int point1,point2,point3,point4,point5;
 
    int total,e;
    printf("-----------------------------------------------------Quiz Game--------------------------------------------------------\n");
    printf("press 7 to continue the quiz game\n");
    printf("press 0 to quit the quiz game\n");
    printf("Enter your choice:");
    scanf("%d",&i);
    if(i==7){
        printf("Welcome to quiz game :)\n");
    }
    else if(i==0){
        printf("quiz game is ended :(\n");
        return 0;
    }
    else {
        printf("Invalid choice\n");
        return 0;
    }
    if(i==7){-
        printf("----------------------------------------------Ques 1-------------------------------------------\n");
        printf("Which symbol is used to end a statement in C?\n");
        printf("1):\n");
        printf("2);\n");
        printf("3),\n");
        printf("4).\n");
    }
    printf("Enter your choice:");
    scanf("%d",&ans1);
    if(ans1==2){
        printf("--------------------------------------------------------\n");
        printf("yeah,it's correct\n");
        point1=5;
        printf("you scored %d points\n",point1);
    }
    else{
    	printf("--------------------------------------------------------\n");
        printf("Wrong ans\n");
        point1=0;
        printf("you scored %d points\n",point1);
    }
   
     if(i==7){
         printf("----------------------------------------------Ques 2-------------------------------------------\n");
        printf("Which of the following is a correct variable in C?\n");
        printf("1)1num\n");
        printf("2)num_1\n");
        printf("3)float\n");
        printf("4)num-1\n");
    }
    printf("Enter your choice:\n");
    scanf("%d",&ans2);
    if(ans2==2){
        printf("--------------------------------------------------------\n");
        printf("yeah,it's correct\n");
        point2=5;
        printf("you scored %d points\n",point2);
    }
    else{
    	printf("--------------------------------------------------------\n");
        printf("Wrong ans\n");
        point2=0;
        printf("you scored %d points\n",point2);
    }
   
     if(i==7){
       printf("----------------------------------------------Ques 3-------------------------------------------\n");
        printf("What is the size of char in most C compilers ?\n");
        printf("1)1 byte\n");
        printf("2)2 bytes\n");
        printf("3)4 bytes\n");
        printf("4)8 bytes\n");
    }
    printf("Enter your choice:\n");
    scanf("%d",&ans3);
    if(ans3==1){
        printf("--------------------------------------------------------\n");
        printf("yeah,it's correct\n");
        point3=5;
        printf("you scored %d points\n",point3);
    }
    else{
    	printf("--------------------------------------------------------\n");
        printf("Wrong ans\n");
        point3=0;
        printf("you scored %d points\n",point3);
    }
    
     if(i==7){
        printf("----------------------------------------------Ques 4-------------------------------------------\n");
        printf("Which function is used to print output in C?\n");
        printf("1)print()\n");
        printf("2)write()\n");
        printf("3)printf\n");
        printf("4)output()\n");
    }
    printf("Enter your choice:\n");
    scanf("%d",&ans4);
    if(ans4==3){
        printf("--------------------------------------------------------\n");
        printf("yeah,it's correct\n");
        point4=5;
        printf("you scored %d points\n",point4);
    }
    else{
    	printf("--------------------------------------------------------\n");
        printf("Wrong ans\n");
        point4=0;
        printf("you scored %d points\n",point4);
    }
    
     if(i==7){
        printf("----------------------------------------------Ques 5-------------------------------------------\n");
        printf("Which operator is used for addition  in C?\n");
        printf("1)-\n");
        printf("2)*\n");
        printf("3)/\n");
        printf("4)+\n");
    }
    printf("Enter your choice:\n");
    scanf("%d",&ans5);
    if(ans5==4){
        printf("--------------------------------------------------------\n");
        printf("yeah,it's correct\n");
        point5=5;
        printf("you scored %d points\n",point5);
    }
    else{
    	printf("--------------------------------------------------------\n");
        printf("Wrong ans\n");
        point5=0;
        printf("you scored %d points\n",point5);
    }
    printf("****************************************************\n");
    printf("Are u excited to see your total?\n");
    printf("press 1-");
    scanf("%d",&e);
    if(e==1){
        total=point1+point2+point3+point4+point5;
        printf("Hurray!!!, your score is %d",total);
    }
    else{
        printf("Invalid choice");
    }



    return 0;
}
