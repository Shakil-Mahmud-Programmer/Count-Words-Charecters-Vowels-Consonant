#include<stdio.h>

int main()
{
    char lin[500];int word=0,vow=0,ch=0,con=0;
    FILE *data;
    data=fopen("data.txt","r");
    while(fgets(lin,sizeof(lin),data))
    {
        for(int i=0;i<lin[i]!='\0';i++)
        {
            if(lin[i]==' ')
            {
            word++;
            }
            if(lin[i]=='a' || lin[i]=='e' || lin[i]=='i' || lin[i]=='o' || lin[i]=='u' || lin[i]=='A' || lin[i]=='E' || lin[i]=='I' || lin[i]=='O' || lin[i]=='U')
            {
                vow++;
            }

            if(lin[i]=='b' || lin[i]=='c' || lin[i]=='d' || lin[i]=='f' || lin[i]=='g' || lin[i]=='h' || lin[i]=='j' || lin[i]=='k' || lin[i]=='l' || lin[i]=='m' || lin[i]=='n' || lin[i]=='p' || lin[i]=='q' || lin[i]=='r' || lin[i]=='s' || lin[i]=='x' || lin[i]=='z')
            {
                con++;
            }

            if(lin[i]=='B' || lin[i]=='C' || lin[i]=='D' || lin[i]=='F' || lin[i]=='G' || lin[i]=='H' || lin[i]=='J' || lin[i]=='K' || lin[i]=='L' || lin[i]=='M' || lin[i]=='N' || lin[i]=='P' || lin[i]=='Q' || lin[i]=='R' || lin[i]=='s' || lin[i]=='X' || lin[i]=='Z')
            {
                con++;
            }
            if(lin[i]!=' ')
            {
                ch++;
            }



        }
        word++;
        
    }
    printf("Number of words: %d\n",word);
    printf("Number of charecters: %d\n",ch);
    printf("Number of vowels: %d\n",vow);
    printf("Number of consonants: %d\n",con);
    return 0;
}