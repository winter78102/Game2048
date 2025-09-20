#include "DownAction.h"

void DownAction::OprateAction(unsigned int (* Board)[4][4]){
    int FirstNum,SecoundNum,Flag=0;
    int Row,Col=0;

    for (int i=3; i>=0;i--){
        for(int j=3; j>=0;j--){
            if(*Board[j][i]!=0 && Flag==0){
                FirstNum=*Board[j][i];
                Row=j;
                Col=i;
                Flag+=1;
            }
            if(*Board[j][i]!=0 && Flag==1){
                SecoundNum=*Board[j][i];
                Flag=0;
                if(SecoundNum==FirstNum){
                *Board[Row][Col]=SecoundNum*2;}
                else{
                    *Board[Row-1][Col]=SecoundNum;
                }
               * Board[j][i]=0;

            }
        }
    }

}
