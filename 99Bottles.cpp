#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int bottle;
for(bottle=99;bottle>=2;bottle--)
{
  cout<<endl<<bottle<<" bottles of beer on the wall "<<bottle<<" bottles of beer.\nTake one down and pass it around, ";
  cout<<(bottle-1)<<" bottles of beer on the wall.";
}
  cout<<"\n1 bottle of beer on the wall, 1 bottle of beer. Take one down and pass it around, no more bottles of beer on the wall.";
  cout<<"\nNo more bottles of beer on the wall, no more bottles of beer. Go to the store and buy some more, 99 bottles of beer on the wall.";
getch();
}
