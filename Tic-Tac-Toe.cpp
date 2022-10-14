#include <iostream>
int main()
{
    char token1;
    char token2;
    char grid[3][3];
    int flag = 0;
    std::cout<<"Welcome to TIC-TAC-TOE!\n";
    std::cout << "Player 1 pick X or O:";
    std::cin >> token1;
    if(token1 == 'X'){
        token2 = 'O';
        std::cout << "Player 2 is " << token2 << "\n";
    }else if (token1 == 'O'){
        token2 = 'X';
        std::cout << "Player 2 is " << token2 << "\n";
    }else{
        std::cout<< "Invalid Pick! Player 1, pick again.";
    }
    grid[0][0] = '1';
    grid[0][1] = '2';
    grid[0][2] = '3';
    grid[1][0] = '4';
    grid[1][1] = '5';
    grid[1][2] = '6';
    grid[2][0] = '7';
    grid[2][1] = '8';
    grid[2][2] = '9';
    std::cout << "\n";
    std::cout << "BEHOLD! THE TIC-TAC-TOE BOARD:\n";
    std::cout << " "<<grid[0][0]<<" | "<<grid[0][1]<<" | "<<grid[0][2] << "\n";
    std::cout << " ----------\n";
    std::cout << " "<<grid[1][0]<<" | "<<grid[1][1]<<" | "<<grid[1][2] << "\n";
    std::cout << " ----------\n";
    std::cout << " "<<grid[2][0]<<" | "<<grid[2][1]<<" | "<<grid[2][2] << "\n";
    
    do{
    std::cout << "Pick a number between 1 and 9 to plant your move.\n Player 1:";
    int move1;
    std::cin >> move1;
    switch(move1){
        case 1:
            grid[0][0] = token1;
            break;
        case 2:
            grid[0][1] = token1;
            break;
        case 3:
            grid[0][2] = token1;
            break;
        case 4:
            grid[1][0] = token1;
            break;
        case 5:
            grid[1][1] = token1;
            break;
        case 6:
            grid[1][2] = token1;
            break;
        case 7:
            grid[2][0] = token1;
            break;
        case 8:
            grid[2][1] = token1;
            break;
        case 9:
            grid[2][2] = token1;
            break;
        default:
            std::cout << "Invalid! Pick again\n";
    }
    
    std::cout << "Pick a number between 1 and 9 to plant your move.\n Player 2:";
    int move2;
    std::cin >> move2;
    switch(move2){
        case 1:
            grid[0][0] = token2;
            break;
        case 2:
            grid[0][1] = token2;
            break;
        case 3:
            grid[0][2] = token2;
            break;
        case 4:
            grid[1][0] = token2;
            break;
        case 5:
            grid[1][1] = token2;
            break;
        case 6:
            grid[1][2] = token2;
            break;
        case 7:
            grid[2][0] = token2;
            break;
        case 8:
            grid[2][1] = token2;
            break;
        case 9:
            grid[2][2] = token2;
            break;
        default:
            std::cout << "Invalid! Pick again\n";
    }
    
    std::cout << " "<<grid[0][0]<<" | "<<grid[0][1]<<" | "<<grid[0][2] << "\n";
    std::cout << " ----------\n";
    std::cout << " "<<grid[1][0]<<" | "<<grid[1][1]<<" | "<<grid[1][2] << "\n";
    std::cout << " ----------\n";
    std::cout << " "<<grid[2][0]<<" | "<<grid[2][1]<<" | "<<grid[2][2] << "\n";
    
   if((grid[0][0] == token1 && grid[0][1] == token1 && grid[0][2] == token1) || 
    (grid[0][0] == token1 && grid[1][1] == token1 && grid[2][2] == token1) || 
    (grid[1][0] == token1 && grid[1][1] == token1 && grid[1][2] == token1) ||
    (grid[2][0] == token1 && grid[2][1] == token1 && grid[2][2] == token1) || 
    (grid[0][0] == token1 && grid[1][0] == token1 && grid[2][0] == token1)|| 
    (grid[0][1] == token1 && grid[1][1] == token1 && grid[2][1] == token1) || 
    (grid[0][2] == token1 && grid[1][2] == token1 && grid[2][2] == token1) || 
    (grid[0][2] == token1 && grid[1][1] == token1 && grid[2][0] == token1)){
        flag = 1;
        std::cout<<"Player 1 Wins!";
    }
    
    if((grid[0][0] == token2 && grid[0][1] == token2 && grid[0][2] == token2) || 
    (grid[0][0] == token2 && grid[1][1] == token2 && grid[2][2] == token2) || 
    (grid[1][0] == token2 && grid[1][1] == token2 && grid[1][2] == token2) ||
    (grid[2][0] == token2 && grid[2][1] == token2 && grid[2][2] == token2) || 
    (grid[0][0] == token2 && grid[1][0] == token2 && grid[2][0] == token2) || 
    (grid[0][1] == token2 && grid[1][1] == token2 && grid[2][1] == token2) || 
    (grid[0][2] == token2 && grid[1][2] == token2 && grid[2][2] == token2) || 
    (grid[0][2] == token2 && grid[1][1] == token2 && grid[2][0] == token2)){
        flag = 1;
        std::cout<<"Player 2 Wins!";
    }
    }while(flag != 1);
    
    
    return 0;
}
