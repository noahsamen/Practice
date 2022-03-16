#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int AnswerKey;
  double TopLook;
  int Punishment = 1;
  int Con = 9;
  double Answer2;
  float Answer3;
  double FosterKey = 90.7;
  double Random = 70.6;
  int Dang = 9;
  int Bang = 90;
  printf("Number:\n");
  scanf("%d",&AnswerKey);
 if(AnswerKey>10){
   TopLook = Con+FosterKey/Random;
    printf("The equation answer is %lf\n", TopLook);
 }if(TopLook<20){
   Answer2 = Dang/Bang+Dang%4;
   printf("If the TopLook was fullfilled the second answer is %lf\n", Answer2);
 }if(Answer3<10){
   Answer3=90+Punishment/39%3+FosterKey/Random;
   printf("This answer is equal to %lf\n", Answer3);
 }
 else{
   printf("Don't bother!!!");
 }
  return 0;
}