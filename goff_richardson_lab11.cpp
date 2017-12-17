//Computer vs Computer 3D Tic-Tac-Toe
//Spencer Goff
//Nick Richardson
//November 20, 2014
//Section 02

#include<iostream>
#include<cstring>
#include<ctime>
#include<cstdlib>
using namespace std;

class game{

	protected:
		int nickscore = 0;
		int spencerscore = 0;
		int spencerchoice;
		int nickchoice;
		string matrix[27] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", //board values
							"10", "11", "12", "13", "14", "15", "16", "17", "18",
							"19", "20", "21", "22", "23", "24", "25", "26", "27"};

	public:
		game(){}; //constructor
		~game(){}; //destructor
		void spencersTurn(); //spencersTurn's turn
		bool over(); //determines if game is over or if someone wins
		void score(); //keeps score

};

class nicksGame: public game{

	public:
	void nicksMove();
};

class competition: public nicksGame{
	public:
		int nickTotalScore = 0;
		int spencerTotalScore = 0;
		void drawboard(); //displays tic tac toe boards
		void winner();//determines winner at end of each game
		void overallwinner(); //determines overall winner

};

int main(){
	competition board1; //instance of game called board
	competition board2;
	competition board3;
	competition board4;
	competition board5;
	competition board6;
	competition board7;
	competition board8;
	competition board9;
	competition board10;

	int turn;
	int gameNum;
	string user;
	int count;

	srand(time(0));  //decides who goes first
	turn = rand() %2;

	board1.drawboard();

	count = 0;

	do{

		if(turn==0){
			system("CLS"); //clears screen
			cout<<"Round 1"<<endl<<endl;
			board1.drawboard(); //re-prints boards
			board1.spencersTurn(); //spencers's turn
			board1.score();//keeps score
			turn = 1; //now it's  nick's turn.
			count++;
			}

		else{
			system("CLS"); //clears screen
			cout<<"Round 1"<<endl<<endl;
			board1.drawboard(); //re-prints boards
			board1.nicksMove(); //nick's turn
			board1.score();//keeps score
			turn = 0; //now it's  spencer's turn
			count++;
			}
		board1.winner();

	}while(count < 27);



	system("pause");

	while(count>=27 && count<54){
		if(turn==0){
			system("CLS"); //clears screen
			cout<<"Round 2"<<endl<<endl;
			board2.drawboard(); //re-prints boards
			board2.spencersTurn(); //spencers's turn
			board2.score();//keeps score
			turn = 1; //now it's the nick's turn.
			count++;
			}

		else{
			system("CLS"); //clears screen
			cout<<"Round 2"<<endl<<endl;
			board2.drawboard(); //re-prints boards
			board2.nicksMove(); //nick's turn
			board2.score();//keeps score
			turn = 0; //now it's spencer's turn
			count++;
			}
		board2.winner();

	};

	system("pause");

	while(count>=54 && count<81){
		if(turn==0){
			system("CLS"); //clears screen
			cout<<"Round 3"<<endl<<endl;
			board3.drawboard(); //re-prints boards
			board3.spencersTurn(); //spencers's turn
			board3.score();//keeps score
			turn = 1; //now it's  nick's turn.
			count++;
			}

		else{
			system("CLS"); //clears screen
			cout<<"Round 3"<<endl<<endl;
			board3.drawboard(); //re-prints boards
			board3.nicksMove(); //nick's turn
			board3.score();//keeps score
			turn = 0; //now it's  spencer's turn
			count++;
			}
		board3.winner();

	};

	system("pause");

	while(count>=81 && count<108){
		if(turn==0){
			system("CLS"); //clears screen
			cout<<"Round 4"<<endl<<endl;
			board4.drawboard(); //re-prints boards
			board4.spencersTurn(); //spencers's turn
			board4.score();//keeps score
			turn = 1; //now it's  nick's turn.
			count++;
			}

		else{
			system("CLS"); //clears screen
			cout<<"Round 4"<<endl<<endl;
			board4.drawboard(); //re-prints boards
			board4.nicksMove(); //nick's turn
			board4.score();//keeps score
			turn = 0; //now it's spencer's turn
			count++;
			}
		board4.winner();

	};

	system("pause");

	while(count>=108 && count<135){
		if(turn==0){
			system("CLS"); //clears screen
			cout<<"Round 5"<<endl<<endl;
			board5.drawboard(); //re-prints boards
			board5.spencersTurn(); //spencers's turn
			board5.score();//keeps score
			turn = 1; //now it's the nick's turn.
			count++;
			}

		else{
			system("CLS"); //clears screen
			cout<<"Round 5"<<endl<<endl;
			board5.drawboard(); //re-prints boards
			board5.nicksMove(); //nick's turn
			board5.score();//keeps score
			turn = 0; //now it's the spencer's turn
			count++;
			}
		board5.winner();

	};

	system("pause");

	while(count>=135 && count<162){
		if(turn==0){
			system("CLS"); //clears screen
			cout<<"Round 6"<<endl<<endl;
			board6.drawboard(); //re-prints boards
			board6.spencersTurn(); //spencers's turn
			board6.score();//keeps score
			turn = 1; //now it's the nick's turn.
			count++;
			}

		else{
			system("CLS"); //clears screen
			cout<<"Round 6"<<endl<<endl;
			board6.drawboard(); //re-prints boards
			board6.nicksMove(); //nick's turn
			board6.score();//keeps score
			turn = 0; //now it's the spencer's turn
			count++;
			}
		board6.winner();
	};

	system("pause");

	while(count>=162 && count<189){
		if(turn==0){
			system("CLS"); //clears screen
			cout<<"Round 7"<<endl<<endl;
			board7.drawboard(); //re-prints boards
			board7.spencersTurn(); //spencers's turn
			board7.score();//keeps score
			turn = 1; //now it's the nick's turn.
			count++;
			}

		else{
			system("CLS"); //clears screen
			cout<<"Round 7"<<endl<<endl;
			board7.drawboard(); //re-prints boards
			board7.nicksMove(); //nick's turn
			board7.score();//keeps score
			turn = 0; //now it's the spencer's turn
			count++;
			}
		board7.winner();

	};

	system("pause");

	while(count>=189 && count<216){
		if(turn==0){
			system("CLS"); //clears screen
			cout<<"Round 8"<<endl<<endl;
			board8.drawboard(); //re-prints boards
			board8.spencersTurn(); //spencers's turn
			board8.score();//keeps score
			turn = 1; //now it's the nick's turn.
			count++;
			}

		else{
			system("CLS"); //clears screen
			cout<<"Round 8"<<endl<<endl;
			board8.drawboard(); //re-prints boards
			board8.nicksMove(); //nick's turn
			board8.score();//keeps score
			turn = 0; //now it's the spencer's turn
			count++;
			}
		board8.winner();

	};

	system("pause");

	while(count>=216 && count<243){
		if(turn==0){
			system("CLS"); //clears screen
			cout<<"Round 9"<<endl<<endl;
			board9.drawboard(); //re-prints boards
			board9.spencersTurn(); //spencers's turn
			board9.score();//keeps score
			turn = 1; //now it's the nick's turn.
			count++;
			}

		else{
			system("CLS"); //clears screen
			cout<<"Round 9"<<endl<<endl;
			board9.drawboard(); //re-prints boards
			board9.nicksMove(); //nick's turn
			board9.score();//keeps score
			turn = 0; //now it's the spencer's turn
			count++;
			}
		board9.winner();

	};

	system("pause");

	while(count>=243 && count<270){
		if(turn==0){
			system("CLS"); //clears screen
			cout<<"Round 10"<<endl<<endl;
			board10.drawboard(); //re-prints boards
			board10.spencersTurn(); //spencers's turn
			board10.score();//keeps score
			turn = 1; //now it's the nick's turn.
			count++;
			}

		else{
			system("CLS"); //clears screen
			cout<<"Round 10"<<endl<<endl;
			board10.drawboard(); //re-prints boards
			board10.nicksMove(); //nick's turn
			board10.score();//keeps score
			turn = 0; //now it's the spencer's turn
			count++;
			}
			board10.winner();

	};

	system("pause");

	board1.overallwinner();




	/*if(board1.over()==true){
		board1.createMatrix();
	}*/

	//board1.score(); //keeps score
	//board1.winner(); //disnicksMoves who won

} //end main

void competition::drawboard(){ //disnicksMoves the board
	if(nickchoice > 27 || nickchoice<0 ){
		cout<<"Not possible."<<endl;
		nicksMove();
	}
	else{

		cout << "Board 1 (top layer)"<<endl;
		cout << matrix[0] <<"   "<<matrix[1] <<"   "<<matrix[2] <<endl;
		cout << matrix[3] <<"   "<<matrix[4] <<"   "<<matrix[5] <<endl;
		cout << matrix[6] <<"   "<<matrix[7] <<"   "<<matrix[8] <<endl;
		cout <<"--------"<<endl;

		cout << "Board 2 (middle layer)"<<endl;
		cout << matrix[9] <<"   "<<matrix[10] <<"   "<<matrix[11] <<endl;
		cout << matrix[12] <<"   "<<matrix[13] <<"   "<<matrix[14] <<endl;
		cout << matrix[15] <<"   "<<matrix[16] <<"   "<<matrix[17] <<endl;
		cout <<"--------"<<endl;

		cout << "Board 3 (bottom layer)"<<endl;
		cout << matrix[18] <<"   "<<matrix[19] <<"   "<<matrix[20] <<endl;
		cout << matrix[21] <<"   "<<matrix[22] <<"   "<<matrix[23] <<endl;
		cout << matrix[24] <<"   "<<matrix[25] <<"   "<<matrix[26] <<endl;
		cout <<"--------"<<endl;
	}

}

void nicksGame::nicksMove()
{
	/*int count1;

	for(count1 = 0; count1 < 27; count1++)
	{
		if(matrix[count1] != "o" && matrix[count1] != "x")
		{
			 matrix[count1] = "o";
			 break;
		}
	}*/

	int i = 0;
	do{
		nickchoice = rand() % 27;

		if(matrix[nickchoice] != "x" && matrix[nickchoice] != "o"){
			matrix[nickchoice] = "o"; //replaces the placeholder with an 'x'
			i = 1;
		}
	}while(i==0);

}

/*void game::nicksTurn(){ //user's turn
	cout<<"The boards are numbered 1, 2, and 3, from top to bottom, and are layered "<<endl;
	cout<<"top, middle, and bottom board, respectively."<<endl;
	cout<<"You are o's."<<endl;
	cout<<"Enter The number of the place you would like to occupy."<<endl;
	cin>>nickchoice; //stores user's selection
	nickchoice = nickchoice-1;

	if(nickchoice > 27 || nickchoice<0){
		cout<<"Not possible."<<endl;
		nicksMove();
	}
	else if(matrix[nickchoice]== "x" || matrix[nickchoice]== "o"){
		cout<<"This spot has already been filled. Please select another location."<<endl;
		nicksMove();
	}

	else{
		matrix[nickchoice] = "o";
		drawboard();
	}
	over();

} //end nicksMove function*/



void game::spencersTurn(){ //spencersTurn's turn
	int i = 0;
	do{
		spencerchoice = rand() % 27;

		if(matrix[spencerchoice] != "x" && matrix[spencerchoice] != "o"){
			matrix[spencerchoice] = "x"; //replaces the placeholder with an 'x'
			i = 1;
		}
	}while(i==0);

	//over();
}


void game::score(){

	//possible combinations for user to score: board 1
	if(matrix[0]=="o" && matrix[1]=="o" && matrix[2]=="o"){ //across row 1
		nickscore++;
	}
	if(matrix[3]=="o" && matrix[4]=="o" && matrix[5]=="o"){ //across row 2
		nickscore++ ;
	}
	if(matrix[6]=="o" && matrix[7]=="o" && matrix[8]=="o"){ //across row 3
		nickscore++ ;
	}
	if(matrix[0]=="o" && matrix[3]=="o" && matrix[6]=="o"){ //down column 1
		nickscore++ ;
	}
	if(matrix[1]=="o" && matrix[4]=="o" && matrix[7]=="o"){ //down column 2
		nickscore++ ;
	}
	if(matrix[2]=="o" && matrix[5]=="o" && matrix[8]=="o"){ //down column 3
		nickscore++ ;
	}
	if(matrix[0]=="o" && matrix[4]=="o" && matrix[8]=="o"){ //diagonal down right
		nickscore++ ;
	}
	if(matrix[6]=="o" && matrix[4]=="o" && matrix[2]=="o"){ //diagonal up right
		nickscore++ ;
	}

	//possible combinations for user to score: board 2
	if(matrix[9]=="o" && matrix[10]=="o" && matrix[11]=="o"){ //across row 1
	nickscore++ ;
	}
	if(matrix[12]=="o" && matrix[13]=="o" && matrix[14]=="o"){ //across row 2
		nickscore++ ;
	}
	if(matrix[15]=="o" && matrix[16]=="o" && matrix[17]=="o"){ //across row 3
		nickscore++ ;
	}
	if(matrix[9]=="o" && matrix[12]=="o" && matrix[15]=="o"){ //down column 1
		nickscore++ ;
	}
	if(matrix[10]=="o" && matrix[13]=="o" && matrix[16]=="o"){ //down column 2
		nickscore++ ;
	}
	if(matrix[11]=="o" && matrix[14]=="o" && matrix[17]=="o"){ //down column 3
		nickscore++ ;
	}
	if(matrix[9]=="o" && matrix[13]=="o" && matrix[17]=="o"){ //diagonal down right
		nickscore++ ;
	}
	if(matrix[15]=="o" && matrix[13]=="o" && matrix[11]=="o"){ //diagonal up right
		nickscore++ ;
	}

	//possible combinations for user to score: board 3
	if(matrix[18]=="o" && matrix[19]=="o" && matrix[20]=="o"){ //across row 1
		nickscore++ ;
	}
	if(matrix[21]=="o" && matrix[22]=="o" && matrix[23]=="o"){ //across row 2
		nickscore++ ;
	}
	if(matrix[24]=="o" && matrix[25]=="o" && matrix[26]=="o"){ //across row 3
		nickscore++ ;
	}
	if(matrix[18]=="o" && matrix[21]=="o" && matrix[24]=="o"){ //down column 1
		nickscore++ ;
	}
	if(matrix[19]=="o" && matrix[22]=="o" && matrix[25]=="o"){ //down column 2
		nickscore++ ;
	}
	if(matrix[20]=="o" && matrix[23]=="o" && matrix[26]=="o"){ //down column 3
		nickscore++ ;
	}
	if(matrix[18]=="o" && matrix[22]=="o" && matrix[26]=="o"){ //diagonal down right
		nickscore++ ;
	}
	if(matrix[24]=="o" && matrix[22]=="o" && matrix[20]=="o"){ //diagonal up right
		nickscore++ ;
	}

	//possible combinations for user to score: down all boards
	if (matrix[0]=="o" && matrix[9]=="o" && matrix[18]=="o"){ //top left spot of each board
		nickscore++ ;
	}
	if (matrix[1]=="o" && matrix[10]=="o" && matrix[19]=="o"){//top middle spaces
		nickscore++ ;
	}
	if (matrix[2]=="o" && matrix[11]=="o" && matrix[20]=="o"){//top right spaces
	nickscore++ ;
	}
	if (matrix[3]=="o" && matrix[12]=="o" && matrix[21]=="o"){//middle left spaces
	nickscore++ ;
	}
	if (matrix[4]=="o" && matrix[13]=="o" && matrix[22]=="o"){//middle middle spaces
	nickscore++ ;
	}
	if (matrix[5]=="o" && matrix[14]=="o" && matrix[23]=="o"){//middle right spaces
	nickscore++ ;
	}
	if (matrix[6]=="o" && matrix[15]=="o" && matrix[24]=="o"){//bottom left spaces
	nickscore++ ;
	}
	if (matrix[7]=="o" && matrix[16]=="o" && matrix[25]=="o"){//bottom middle spaces
	nickscore++ ;
	}
	if (matrix[8]=="o" && matrix[17]=="o" && matrix[26]=="o"){//bottom right spaces
	nickscore++ ;
	}

	//possible combinations for spencersTurn to score: board 1
	if(matrix[0]=="x" && matrix[1]=="x" && matrix[2]=="x"){ //across
		spencerscore++ ;
	}
	if(matrix[3]=="x" && matrix[4]=="x" && matrix[5]=="x"){ //across
		spencerscore++ ;
	}
	if(matrix[6]=="x" && matrix[7]=="x" && matrix[8]=="x"){ //across
		spencerscore++ ;
	}
	if(matrix[0]=="x" && matrix[3]=="x" && matrix[6]=="x"){ //down
		spencerscore++ ;
	}
	if(matrix[1]=="x" && matrix[4]=="x" && matrix[7]=="x"){ //down
		spencerscore++ ;
	}
	if(matrix[2]=="x" && matrix[5]=="x" && matrix[8]=="x"){ //down
		spencerscore++ ;
	}
	if(matrix[0]=="x" && matrix[4]=="x" && matrix[8]=="x"){ //diagonal
		spencerscore++ ;
	}
	if(matrix[2]=="x" && matrix[4]=="x" && matrix[6]=="x"){ //diagonal
		spencerscore++ ;
	}


	//possible combinations for spencersTurn to score: board 2
	if(matrix[9]=="x" && matrix[10]=="x" && matrix[11]=="x"){ //across row 1
		spencerscore++ ;
	}
	if(matrix[12]=="x" && matrix[13]=="x" && matrix[14]=="x"){ //across row 2
		spencerscore++ ;
	}
	if(matrix[15]=="x" && matrix[16]=="x" && matrix[17]=="x"){ //across row 3
		spencerscore++ ;
	}
	if(matrix[9]=="x" && matrix[12]=="x" && matrix[15]=="x"){ //down column 1
		spencerscore++ ;
	}
	if(matrix[10]=="x" && matrix[13]=="x" && matrix[16]=="x"){ //down column 2
		spencerscore++ ;
	}
	if(matrix[11]=="x" && matrix[14]=="x" && matrix[17]=="x"){ //down column 3
		spencerscore++ ;
	}
	if(matrix[9]=="x" && matrix[13]=="x" && matrix[17]=="x"){ //diagonal down right
		spencerscore++ ;
	}
	if(matrix[15]=="x" && matrix[13]=="x" && matrix[11]=="x"){ //diagonal up right
		spencerscore++ ;
	}

	//possible combinations for spencersTurn to score: board 3
	if(matrix[18]=="x" && matrix[19]=="x" && matrix[20]=="x"){ //across row 1
		spencerscore++ ;
	}
	if(matrix[21]=="x" && matrix[22]=="x" && matrix[23]=="x"){ //across row 2
		spencerscore++ ;
	}
	if(matrix[24]=="x" && matrix[25]=="x" && matrix[26]=="x"){ //across row 3
		spencerscore++ ;
	}
	if(matrix[18]=="x" && matrix[21]=="x" && matrix[24]=="x"){ //down column 1
		spencerscore++ ;
	}
	if(matrix[19]=="x" && matrix[22]=="x" && matrix[25]=="x"){ //down column 2
		spencerscore++ ;
	}
	if(matrix[20]=="x" && matrix[23]=="x" && matrix[26]=="x"){ //down column 3
		spencerscore++ ;
	}
	if(matrix[18]=="x" && matrix[22]=="x" && matrix[26]=="x"){ //diagonal down right
		spencerscore++ ;
	}
	if(matrix[24]=="x" && matrix[22]=="x" && matrix[20]=="x"){ //diagonal up right
		spencerscore++ ;
	}

	//possible combinations for spencersTurn to score: down all boards
	if (matrix[0]=="x" && matrix[9]=="x" && matrix[18]=="x"){//top left space of each board
		spencerscore++ ;
	}
	if (matrix[1]=="x" && matrix[10]=="x" && matrix[19]=="x"){//top middle spaces
		spencerscore++ ;
	}
	if (matrix[2]=="x" && matrix[11]=="x" && matrix[20]=="x"){//top top right spaces
		spencerscore++ ;
	}
	if (matrix[3]=="x" && matrix[12]=="x" && matrix[21]=="x"){//middle left spaces
		spencerscore++ ;
	}
	if (matrix[4]=="x" && matrix[13]=="x" && matrix[22]=="x"){//middle middle spaces
		spencerscore++ ;
	}
	if (matrix[5]=="x" && matrix[14]=="x" && matrix[23]=="x"){//middle right spaces
		spencerscore++ ;
	}
	if (matrix[6]=="x" && matrix[15]=="x" && matrix[24]=="x"){//bottom left spaces
		spencerscore++ ;
	}
	if (matrix[7]=="x" && matrix[16]=="x" && matrix[25]=="x"){//bottom middle spaces
		spencerscore++ ;
	}
	if (matrix[8]=="x" && matrix[17]=="x" && matrix[26]=="x"){//bottom right spaces
		spencerscore++ ;
	}
}



bool game::over(){

	//conditions for board to be full
	if (matrix[0]!="1" && matrix[1]!="2" && matrix[2]!="3" && matrix[3]!="4" && matrix[4]!="5" && matrix[5]!="6" //tie: board is full
	&& matrix[6]!="7" && matrix[7]!="8" && matrix[8]!="9" &&
	matrix[9]!="10" && matrix[10]!="11" && matrix[11]!="12" && matrix[12]!="13" && matrix[13]!="14" && matrix[14]!="15" //tie: board is full
	&& matrix[15]!="16" && matrix[16]!="17" && matrix[17]!="18" &&
	matrix[18]!="19" && matrix[19]!="20" && matrix[20]!="21" && matrix[21]!="22" && matrix[22]!="23" && matrix[23]!="24" //tie: board is full
	&& matrix[24]!="25" && matrix[25]!="26" && matrix[26]!="27"){

	return true;
	}

	else{
		return false;
	}

}


void competition::winner(){

	cout<<"NICK's score:"<<nickscore<<endl;
	cout<<"SPENCER's score:"<<spencerscore<<endl;

	if(nickscore>spencerscore){
		nickTotalScore++;
	}

	else if(spencerscore>nickscore){
		spencerTotalScore++;
	}

}

void competition::overallwinner(){

	cout<<"NICK's total score:"<<nickTotalScore<<endl;
	cout<<"SPENCER's total score:"<<spencerTotalScore<<endl;

	if(nickTotalScore>spencerTotalScore){
		cout<<"NICK won the game!"<<endl;
	}
	else if(spencerTotalScore>nickTotalScore){
		cout<<"SPENCER won the game!"<<endl;
	}
	else if(spencerTotalScore==nickTotalScore){
		cout<<"TIE! Noboby wins!"<<endl;
	}
}
