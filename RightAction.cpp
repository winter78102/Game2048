#include "RightAction.h"

void RightAction::OprateAction(unsigned int (* Board)[4][4]){
    int FirstNum,SecoundNum,Flag=0;
    int Row,Col=0;

    for (int i=0; i<4;i++){
        for(int j=0;j<4;j++){
            if(*Board[i][j]!=0 && Flag==0){
                FirstNum=*Board[i][j];
                Row=i;
                Col=j;
                Flag+=1;
            }
            if(*Board[i][j]!=0 && Flag==1){
                SecoundNum=*Board[i][j];
                Flag=0;
                if(SecoundNum==FirstNum){
                   * Board[Row][Col]=SecoundNum*2;}
                else{
                    *Board[Row][Col+1]=SecoundNum;
                }
                *Board[i][j]=0;
            }
        }
    }

}
