# include <stdio.h>
int main()
{
    int amt,notes=0;
    printf("Enter the amount: ");
    scanf("%d",&amt)
    notes = notes + amt/500;
    amt = amt % 500;
    notes = notes + amt/200;
    amt = amt % 200;
    notes = notes + amt/100;
    amt = amt % 100;
    notes = notes + amt/50;
    amt = amt % 50;
    notes = notes + amt/20;
    amt = amt % 20;
    notes = notes + amt/10;
    amt = amt % 10;
    notes = notes + amt/5;
    amt = amt % 5;
    notes = notes + amt/2;
    amt = amt % 2;
    notes = notes + amt/1;
    amt = amt % 1;
    printf("Total notes required: %d\n",notes);
}