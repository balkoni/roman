#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main (int argc, string argv[])
{
if (argc!=2) {printf("Try again"); return 1;}
string key; key=argv[1];

if (key==NULL) {printf("Try again."); return 1;}

//printf("key=%s\n", key);


    
//printf("word=%s\n", text);


 

 for (int i=0; i<strlen(key); i++)
    {
        if(!isalpha(key[i]))
        {
        printf("Try again."); return 1;} else 
         key[i]=toupper(key[i]);
        
        
   }    
    
    
   string text =GetString();
   int n=strlen(text);
   
   if (text==NULL) 
    {
      printf("Try again.");
      return 1;
    }

    
for (int i=0,k=0; i<=n; i++)
{
if (isalpha(text[i])){
    if (isupper(text[i]))
        text[i] = (((text[i]-'A') + (key[(k++)%strlen(key)]-'A')) % 26) + 'A';
           
                if(islower(text[i]))
                text[i] = ((text[i]-'a') + (key[(k++)%strlen(key)]-'A')) % 26 + 'a';
}
   
}

//printf("new word=%s\n", text);
printf("%s\n",text);


}