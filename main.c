#include<stdio.h>
#include<ctype.h>

int main(){
  //variable of type char to hold a letter
char letter;
//ask the user for input (enter lower or uppercase letter)
//A-Z/a-z
puts("Type a letter to check ");
scanf("%c", &letter);

//check using if statement and islower function 
if (islower(letter)){
printf("%c is a lowercase letter\n", letter);
}
else{
printf("%c is an uppercase letter\n", letter);
}

return 0;
}