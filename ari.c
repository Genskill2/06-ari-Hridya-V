#include<ctype.h>

string ari(string *s)
{
int a,letters=0,words=0,sen=0,ar;
for(int i=0;i<strlen(s);++)
{
if(isalnum(s[i]))
letters++;
if(s[i]==' ')
words++;
if(s[i]=='.'||s[i]=='!'||s[i]=='?')
sen++;
}
a=4.71*(letters/words)+0.5*(words/sen)-21.43;
ar=a+1;
if(ar==1)
return ("Kindergarten");
if(ar==2)
return ("First/Second Grade");
if(ar==3)
return ("Third Grade");
if(ar==4)
return ("Fourth Grade");
if(ar==5)
return ("Fifth Grade");
if(ar==6)
return ("Sixth Grade");
if(ar==7)
return ("Seventh Grade");
if(ar==8)
return ("Eighth Grade");
if(ar==9)
return ("Ninth Grade");
if(ar==10)
return ("Tenth Grade");
if(ar==11)
return ("Eleventh Grade");
if(ar==12)
return ("Twelfth Grade");
if(ar==13)
return ("College student");
if(ar==14)
return ("Professor");
}
