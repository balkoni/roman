#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main (int argc, string argv[])
{
if (argc!=2) {printf("Try again"); return 1;}

string key; key=argv[1];

if (key==NULL) {printf("Try again."); return 1;}  //checking the arguments
 

for (int i=0; i<strlen(key); i++)					
    {   
		//checking if symbol is letter
        if (!isalpha(key[i]))
        {printf("Try again."); return 1;} 
		//make all letters BIG in key
		else 
         key[i]=toupper(key[i]);
    }    
    
   string text=GetString(); int txtlength=strlen(text);
   
if (text==NULL)  //review if text is empty
   {
     printf("Try again.");
     return 1;
   }


    //scripting of text:

for (int i=0,kountofkey=0; i<=txtlength; i++)
{
   if (isalpha(text[i]))
   {
      if (isupper(text[i])) //if letter is big
         text[i] = (((text[i]-'A') + (key[(kountofkey++)%strlen(key)]-'A')) % 26) + 'A'; 

      if (islower(text[i]))  //if letter is small
         text[i] = ((text[i]-'a') + (key[(kountofkey++)%strlen(key)]-'A')) % 26 + 'a';
   }
}

printf("%s\n",text);
}