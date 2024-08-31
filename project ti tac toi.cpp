#include<iostream> 
using namespace std;

char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char trun ='x';
int row,column,choice;
bool draw=false;
void display_board()
{
	system("cls");
	
	 
	cout<<"\n\t TIC TAC TOI GAME\n";
	cout<<"\n\tplyear1[x]\n\tplyear2[o]\n";
	cout<<"\n\t     |     |     \n";
    cout<<"\n\t  "<<board[0][0]<<"  | "<<board[0][1]<<"   |  "<<board[0][2]<<" \n";
    cout<<"\n\t_____|_____|_____\n";
    cout<<"\n\t     |     |     \n";
    cout<<"\n\t  "<<board[1][0]<<"  | "<<board[1][1]<<"   |  "<<board[1][2]<<" \n";
    cout<<"\n\t_____|_____|_____\n";
    cout<<"\n\t     |     |     \n";
    cout<<"\n\t  "<<board[2][0]<<"  | "<<board[2][1]<<"   |  "<<board[2][2]<<" \n";
    cout<<"\n\t     |     |     \n";
}
    void player_turn()
    {
    
    if(trun=='x')
	{
	
    cout<<"\n\tplayear1[x]trun";
}
     if(trun=='o')
     {
	 
     cout<<"\n\tplayear2[o]trun";
 }
    cin>> choice;
    switch(choice)
    {
    	case 1:
    		row=0;column=0;
    		break;
    		case 2:
    		row= 0;column=1;
    		break;
    		case 3:
    		row=0;column=2;
    		break;
    		
    		case 4:
    		row=1;column=0;
    		break;
    		case 5:
    		row=1;column=1;
    		break;
    		case 6:
    		row=1;column=2;
    		break;
    		case 7:
    		row=2;column=0;
    		break;
    		case 8:
    		row=2;column=1;
    		break;
    		case 9:
    		row=2;column=2;
    		break;
    		
    	default:
    		cout<<"invalid choice"<<endl;
    		 
	}
	if(trun=='x'&&	board[row][column]!='x' && board[row][column]!='o')
	{
		board[row][column]='x';
		trun='o';
	}
	else if(trun=='o'&&board[row][column]!='x' && board[row][column]!='x')
	{
		board[row][column]='o';
		trun='x';
	}
	else
	{
		cout<<"box alreay fill\n plase try again";
	}
	display_board();
	
	
		
		
		
	
    	
	}
	bool gameover()
	{
		//check winer
		for( int i=0;i<3;i++)
		if(board[i][0]==board[i][1]&&board[i][0]==board[i][2]||board[0][i]==board[1][i]&&board[0][i]==board[2][i])
		return false;
		// cheking the both digonal
		if(board[0][0]==board[1][1]&&board[0][0]==board[2][2]||board[0][2]==board[1][1]&&board[0][2]==board[2][0])
		return false;

		 
		
		//any box is not fill
		for( int i=0;i<3;i++)
		for( int j=0;j<3;j++)
		if(board[i][j]!='x'&& board[i][j]!='o')
		return true;
		//draw
		draw=true;
		return false;
		
		
	}
    

 main(){
 	cout<<"TICK TAC GAME";
 	cout<<"plyear1[x]\n\tplyear2[o]";
 

	while(gameover())
	{
	
	
	
	display_board();
	player_turn();
	gameover();
}
	



  if(trun=='x'&&draw==false)
  {
  
     
cout<<"player2[o]wins!!congrlations"; 
}
if(trun=='o'&&draw==false){

cout<<"player1[x]wins!!congrlations";
}
else


cout<<"game draw!!\n";



	
}	
	




