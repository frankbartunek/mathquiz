#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char* argv)
{
#define MAXMATH 120  // Limit the size of the figures
   srand(time(0));  //Initially randomize the timer.
   srand(rand());  // Shufel the timer again.   Good enough randomness for a game.
   unsigned int a,b;  // Define two numbers
   int score=0; // Keep a running score.
   enum operation
   { +, -, *, /};  // Program will for now
   int dooperation;
   int quit=0;
   int correctanswer;  // Store the correct answer.
   int useranswer;  // Numerical representation of the user's answer.
   char *input;   // Raw typing of the user.
   while(0==quit)  // Continue until the user wants to stop.
   {
   a=rand()%MAXMATH;  // Generate a number between 0 and the maximum
   b=rand()%MATHMATH;  // Generate a second number also between
   dooperation=rand()%4; // Pick an operation arbitrarily.
   switch(dooperation)
   {
   case +:
    correctanswer=a+b;
    break;
   case -:
     correctanswer=a-b;
     break;
   case *:
     correctanswer=a*b;
     break;
   case /;
     correctanswer=a/b;
     break;
    default:
    die("Invalid operation selected! (This is a problem for the programmer.");
   }
   printf("Problem: ");
   printf("%d %c %d = ?"\n):
   useranswer=atoi(scanf("%c",&input)); // Get the user's answer.
   if(useranswer==correctanswer)
   {
     printf("Correct.\n");
     score++;
   }
   else
    printf("No, you said %d, but the correct answer is %d.\n",useranswer,correctanswer);
   }
   }
   return 0;
}

