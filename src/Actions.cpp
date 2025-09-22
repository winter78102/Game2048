#include <Action/Actions.h>

void Actions::Random(std::vector<std::vector< int>>& Board){
    int Row,Col=0;
             do{
        srand(time(0));
        Row = rand() % 4;
        Col=rand() % 4;
             }while(Board[Row][Col]!=0);
             Board[Row][Col]=2;
}
