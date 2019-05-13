/* #################################TIC TAC TOE################################## */
/* DATE CREATED : 05/13/19 ###################################################### */
/* ############################################################################## */


#include<iostream>
#include<string>
using namespace std;
char square[10] = {'o','1','2','3','4','5','6','7','8','9'};
int choice;
int player = 1;
string name[2];



void draw()
{  
    system("clear");
    cout<<"\t___TIC TAC TOE___"<<endl;
    cout<<"\t     |     |"<<endl;
    cout<<"\t__"<<square[1]<<"__|"<<"__"<<square[2]<<"__|"<<"__"<<square[3]<<"__"<<endl;
    cout<<"\t     |     |"<<endl;
    cout<<"\t__"<<square[4]<<"__|"<<"__"<<square[5]<<"__|"<<"__"<<square[6]<<"__"<<endl;
    cout<<"\t     |     |"<<endl;
    cout<<"\t__"<<square[7]<<"__|"<<"__"<<square[8]<<"__|"<<"__"<<square[9]<<"__"<<endl;
    cout<<"\t     |     |"<<endl<<endl;

}

void move()
{   
    char mark;
    

    player=(player%2) ? 1 : 2 ;
    cout<<name[player]<<"'s turn : ";
    cin>>choice;
    mark=(player==1) ? 'X' : 'O';

    if(choice==1)
    {square[1]=mark;}
    else if(choice==2)
    {square[2]=mark;}
    else if(choice==3)
    {square[3]=mark;}
    else if(choice==4)
    {square[4]=mark;}
    else if(choice==5)
    {square[5]=mark;}
    else if(choice==6)
    {square[6]=mark;}
    else if(choice==7)
    {square[7]=mark;}
    else if(choice==8)
    {square[8]=mark;}
    else if(choice==9)
    {square[9]=mark;}

    player++;
  


}

int checkwin()
{   
    


      if(square[1]==square[2]&&square[2]==square[3])
      return 1 ;
      else if(square[4]==square[5]&&square[5]==square[6])
      return 1 ;
      else if(square[7]==square[8]&&square[8]==square[9])
      return 1 ;
      else if(square[1]==square[4]&&square[4]==square[7])
      return 1 ;
      else if(square[2]==square[5]&&square[5]==square[8])
      return 1 ;
      else if(square[3]==square[6]&&square[8]==square[9])
      return 1 ;

      else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' 
      && square[7] != '7' && square[8] != '8' && square[9] != '9')
      return 2;
}

int main()
{  
    
    int a;
    int results;

     draw();
     cout<<endl<<"PLAYER 1 ENTER NAME: ";
     cin>>name[1];
     cout<<endl<<"PLAYER 2 ENTER NAME: ";
     cin>>name[2];
     

     results=-1;



    while(results == -1)
    {
      draw();
      move();
      draw();

     a=checkwin();
     if (a==1)
       {
         player--;
         cout<<name[player]<<"  "<<"WIN";
         results=1;
       }
      else if(a==2)
      {
        cout<<"NO WINNER"<<endl;;
        results=2;
      }
  }
   
}
