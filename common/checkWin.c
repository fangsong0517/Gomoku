/*************************************************************************
	> File Name: checkWin.c
	> Author:fangsong
	> Mail: fangsong517@gmail.com
	> Created Time: 2020年12月04日 星期五 09时02分48秒
 ************************************************************************/

#include "checkWin.h"

int checkWin(int x, int y, char gomoku[N][N], char flagWin) {
    int count1 = 0, count2 = 0;
    for(int i = y + 1; i < N; i++) {
        if(gomoku[x][i] == flagWin) {
            count1 ++;
        } else {
            break;
        }
    }
    for(int i = y - 1; i >= 0; i--) {
        if(gomoku[x][i] == flagWin) {
            count1++;
        } else {
            break;
        }
    }
    if(count1 >= 4) return 1;
    count1 = 0;



    for(int i = x + 1; i < N; i++) {
        if(gomoku[i][y] == flagWin) {
            count1++;
        } else {
            break;
        }
    }
    for(int i = x - 1; i > 0; i--) {
        if(gomoku[i][y] == flagWin) {
            count1++;
        } else {
            break;
        }
    }
    if(count1 >= 4) return 1;
    count1 = 0;



    for(int i = x + 1, j = y + 1; i < N, y < N; i++, y ++) {
        if(gomoku[i][j] == flagWin) {
            count1++;
        } else {
            break;
        }
    }
    for(int i = x - 1, j = y - 1; i > 0, j > 0; i--, j--) {
        if(gomoku[i][j] == flagWin) {
            count1++;
        } else {
            break;
        }
    }
    if(count1 >= 4) return 1;
    count1 = 0;


    for(int i = x - 1, j = y + 1; i > 0, j < N; i--, j++) {
        if(gomoku[i][j] == flagWin) {
            count1++;
        } else {
            break;
        }
    }
    for(int i = x + 1, j = y - 1; i < N, j > 0; i++, j--) {
        if(gomoku[i][j] == flagWin) {
            count1++;
        } else {
            break;
        }
    }
    if(count1 >= 4) return 1;
    return 0;
}
