 #include<stdio.h>
 #include<stdlib.h>
 #include<time.h>

 void main(){
     srand(time(0));
     int n=rand()/100;
     int num,guess;
     printf("Lets Play a game!\n");
     printf("We are gonna take a random number.\n");
     printf("You need to guess the number and the one who uses the least number of guesses, wins the game!\n");
     printf("[NOTE: THERE IS NO TIME LIMIT, YOU CANNOT SEE OR CHANGE THE SOURCE CODE AND YOU CANNOT EXCEED 100 GUESSES!]\n");
     printf("Let the game begin!\n");
     printf("Getting a random number......\n");
     printf("Number taken!\n");
     printf("Now please start guessing.\n");
     printf("Number of Guesses = 0\n");
     for(guess=1; guess<=100; guess++){
         printf("Your choice: ");
         scanf("%d", &num);
         if(num<n){
             printf("Too small! Enter a bigger number next time.\n");
             printf("Number of Guesses +1\n");
         }
         else if(num>n){
             printf("Too big! Enter a smaller number next time.\n");
             printf("Number of Guesses +1\n");
         }
         else{
             printf("CONGRATULATIONS!!!!!\n");
             printf("You won the game, with %d guesses.\n", guess-1);
             break;
         }
     }
     if(guess==101){
         printf("CONGRATULATIONS!!!!!\n");
         printf("You successfully lost this game, with 100 guesses.");
     }
 }