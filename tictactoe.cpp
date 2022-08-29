#include <iostream> 
#include <string>

int main() {
    bool won = false;
    char* bo[9] = {"?","?","?","?","?","?","?","?","?"} ;
    int bot = rand() % 9;
    int you = 0;
    int spent = 0;

    std::cout<<"Welcome to TickTackToe! You are X's, and your opponent will be O's \n";

    while (won == false){
        //Check for 
        if (spent == 9) {
        
            std::cout<<"You have tied the bot. \nT-I-E-D! \nThe BOT! \nIf you keep working at, maybe you'll be able to do the bare minimum! \nTry again next time.\n";
            won = true;
        } else {

            std::cout<< "Enter Valid Position (0-9): \n";
            std::cin>>you;

            while (bo[you] != "?"){
                std::cout<< "\nInvalid Selection. \nEnter Valid Position (0-9): \n";
                std::cin>>you;
            }

            bo[you] = "X" ;
            spent ++ ;

            if ((bo[0]=="X" && bo[0]==bo[4] && bo[4]==bo[8]) || (bo[2]=="X" && bo[2]==bo[4] && bo[4]==bo[7])) {
                std::cout<<"You Win!\n";
                std::cout<<bo[0]<<bo[1]<<bo[2]<<"\n"<<bo[3]<<bo[4]<<bo[5]<<"\n"<<bo[6]<<bo[7]<<bo[8]<<"\n";
                won = true;
            } else if ((bo[0]=="X" && bo[0]==bo[3] && bo[3]==bo[6]) || (bo[1]=="X" && bo[1]==bo[4] && bo[4]==bo[7]) || (bo[2]=="X" && bo[2]==bo[5] && bo[5]==bo[8])) {
                std::cout<<"You Win!\n";
                std::cout<<bo[0]<<bo[1]<<bo[2]<<"\n"<<bo[3]<<bo[4]<<bo[5]<<"\n"<<bo[6]<<bo[7]<<bo[8]<<"\n";
                won = true;

            }else if ((bo[0]=="X" && bo[0]==bo[1] && bo[1]==bo[2]) || (bo[3]=="X" && bo[3]==bo[4] && bo[4]==bo[5]) || (bo[6]=="X" && bo[6]==bo[7] && bo[7]==bo[8])){
                std::cout<<"You Win!\n";
                std::cout<<bo[0]<<bo[1]<<bo[2]<<"\n"<<bo[3]<<bo[4]<<bo[5]<<"\n"<<bo[6]<<bo[7]<<bo[8]<<"\n";
                won = true;
            
            } else if (spent == 9) {
                std::cout<<"You have tied the bot. \nT-I-E-D! \nThe BOT! \nIf you keep working at, maybe you'll be able to do the bare minimum! \nTry again next time.\n";
                won = true;
            

            } else if (won != true) {
                int attempt = 0;
                for (int val = 0; val<3; ++val){
                    attempt = 0;
                    if ( won != true && attempt == 0) {

                        if (bo[(val * 3)]== "O" && bo[(val * 3) + 1]== "?" && bo[(val * 3) + 2]=="O" ) {
                            bo[(val * 3) + 1]= "O";
                            std::cout<<"You Lost ... To a Bot!\nCongratulations on not Meeting the Bare Minimum!\n";
                            std::cout<<bo[0]<<bo[1]<<bo[2]<<"\n"<<bo[3]<<bo[4]<<bo[5]<<"\n"<<bo[6]<<bo[7]<<bo[8]<<"\n";
                            won = true;
                            attempt++;
                        } else if   (bo[(val * 3)]== "?" && bo[(val * 3) + 1]== "O" && bo[(val * 3) + 2]=="O" ) {
                            bo[(val * 3)]= "O";
                            std::cout<<"You Lost ... To a Bot!\nCongratulations on not Meeting the Bare Minimum!\n";
                            std::cout<<bo[0]<<bo[1]<<bo[2]<<"\n"<<bo[3]<<bo[4]<<bo[5]<<"\n"<<bo[6]<<bo[7]<<bo[8]<<"\n";
                            won = true;
                            attempt++;
                        } else if   (bo[(val * 3)]== "O" && bo[(val * 3) + 1]== "O" && bo[(val * 3) + 2]=="?" ) {
                            bo[(val * 3) + 2]="O";
                            std::cout<<"You Lost ... To a Bot!\nCongratulations on not Meeting the Bare Minimum!\n";
                            std::cout<<bo[0]<<bo[1]<<bo[2]<<"\n"<<bo[3]<<bo[4]<<bo[5]<<"\n"<<bo[6]<<bo[7]<<bo[8]<<"\n";
                            won = true;
                            attempt++;
                        } else if   (bo[6+val]== "O" && bo[3+val]== "?" && bo[val]=="O" ) {
                            bo[3+val] = "O";
                            std::cout<<"You Lost ... To a Bot!\nCongratulations on not Meeting the Bare Minimum!\n";
                            std::cout<<bo[0]<<bo[1]<<bo[2]<<"\n"<<bo[3]<<bo[4]<<bo[5]<<"\n"<<bo[6]<<bo[7]<<bo[8]<<"\n";
                            won = true;
                            attempt++;
                        } else if   (bo[6+val]== "?" && bo[3+val]== "O" && bo[val]=="O" ) {
                            bo[6+val] = "O";
                            std::cout<<"You Lost ... To a Bot!\nCongratulations on not Meeting the Bare Minimum!\n";
                            std::cout<<bo[0]<<bo[1]<<bo[2]<<"\n"<<bo[3]<<bo[4]<<bo[5]<<"\n"<<bo[6]<<bo[7]<<bo[8]<<"\n";
                            won = true;
                            attempt++;
                        } else if   (bo[6+val]== "O" && bo[3+val]== "O" && bo[val]=="?" ) {
                            bo[val] = "O";
                            std::cout<<"You Lost ... To a Bot!\nCongratulations on not Meeting the Bare Minimum!\n";
                            std::cout<<bo[0]<<bo[1]<<bo[2]<<"\n"<<bo[3]<<bo[4]<<bo[5]<<"\n"<<bo[6]<<bo[7]<<bo[8]<<"\n";
                            won = true;
                            attempt++;
                        }
                    }

                }
                while (bo[bot] != "?"){
                    bot = rand() % 9;
                }
                bo[bot] = "O";
                spent ++;
                std::cout<<"Bot Chooses Position "<<bot<<"\n";
                if (spent==9) {
                    won = true;
                }

                if (won != true) {
 
                    if (bo[0] == "O" && bo[4] == "?" && bo[8]=="O") {
                        bo[4] = "O";
                        std::cout<<"You Lost ... To a Bot!\nCongratulations on not Meeting the Bare Minimum!\n";
                        std::cout<<bo[0]<<bo[1]<<bo[2]<<"\n"<<bo[3]<<bo[4]<<bo[5]<<"\n"<<bo[6]<<bo[7]<<bo[8]<<"\n";
                        won = true;
                    } else if (bo[0] == "?" && bo[4] == "O" && bo[8]=="O") {
                        bo[0] = "O";
                        std::cout<<"You Lost ... To a Bot!\nCongratulations on not Meeting the Bare Minimum!\n";
                        std::cout<<bo[0]<<bo[1]<<bo[2]<<"\n"<<bo[3]<<bo[4]<<bo[5]<<"\n"<<bo[6]<<bo[7]<<bo[8]<<"\n";
                        won = true;
                    } else if (bo[0] == "O" && bo[4] == "O" && bo[8]=="?") {
                        bo[8] = "O";
                        std::cout<<"You Lost ... To a Bot!\nCongratulations on not Meeting the Bare Minimum!\n";
                        std::cout<<bo[0]<<bo[1]<<bo[2]<<"\n"<<bo[3]<<bo[4]<<bo[5]<<"\n"<<bo[6]<<bo[7]<<bo[8]<<"\n";
                        won = true;
                    } else if (bo[2] == "O" && bo[4] == "?" && bo[6]=="O") {
                        bo[4] = "O";
                        std::cout<<"You Lost ... To a Bot!\nCongratulations on not Meeting the Bare Minimum!\n";
                        std::cout<<bo[0]<<bo[1]<<bo[2]<<"\n"<<bo[3]<<bo[4]<<bo[5]<<"\n"<<bo[6]<<bo[7]<<bo[8]<<"\n";
                        won = true;
                    } else if (bo[2] == "?" && bo[4] == "O" && bo[6]=="O") {
                        bo[2] = "O";
                        std::cout<<"You Lost ... To a Bot!\nCongratulations on not Meeting the Bare Minimum!\n";
                        std::cout<<bo[0]<<bo[1]<<bo[2]<<"\n"<<bo[3]<<bo[4]<<bo[5]<<"\n"<<bo[6]<<bo[7]<<bo[8]<<"\n";
                        won = true;
                    } else if (bo[2] == "O" && bo[4] == "O" && bo[6]=="?") {
                        bo[6] = "O";
                        std::cout<<"You Lost ... To a Bot!\nCongratulations on not Meeting the Bare Minimum!\n";
                        std::cout<<bo[0]<<bo[1]<<bo[2]<<"\n"<<bo[3]<<bo[4]<<bo[5]<<"\n"<<bo[6]<<bo[7]<<bo[8]<<"\n";
                        won = true;
                    } else {
                        std::cout<<bo[0]<<bo[1]<<bo[2]<<"\n"<<bo[3]<<bo[4]<<bo[5]<<"\n"<<bo[6]<<bo[7]<<bo[8]<<"\n";
                    }
                }

            } 
            
            
        }

    
    }
return 0;
}
