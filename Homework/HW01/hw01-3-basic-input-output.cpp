/*
    เขียนโปรแกรมรับ "ชื่อ" จากผู้ใช้ และแสดงผลบนหน้าจอดังผลลัพธ์ด้านล่างต่อไปนี้ 
    
    Test case:
        First Name: Aomsin
        Last Name: AomMoney
    Output:
        Aomsin AomMoneys TC, RMUTL, Chiang Mai, Thailand

    Test case:
        First Name: ABC
        Last Name: DEF
    Output:
        ABD DEFs TC, RMUTL, Chiang Mai, Thailand
*/
#include <stdio.h>
int main () {
    int Aomsin, AomMoney ;
    printf( "First Name: " ) ;
    printf( "Last Name: " ) ;
    scanf( "%d", &Aomsin,AomMoney ) ; 
    printf( "Aomsin AomMoneys TC, RMUTL, Chiang Mai, Thailand" ) ;
    
    return 0 ;
}