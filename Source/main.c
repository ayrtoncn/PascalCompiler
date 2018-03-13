#include "mesinkata.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "stackt.h"
#define max 285

boolean IsStringSame (char* A, char* B)
{
    return !strcasecmp(A,B);
}

char  Tokenizer(Kata KATA)
{
    char S;
    if(IsStringSame(KATA.TabKata, "\n"))
    {
        S = '\n';
    }
    else
    if(IsStringSame(KATA.TabKata, "program"))
    {
        S = 'P';
    }
    else
    if(IsStringSame(KATA.TabKata, "var"))
    {
        S = 'V';
    }
    else
    if(IsStringSame(KATA.TabKata, "("))
    {
        S = '(';
    }
    else
    if(IsStringSame(KATA.TabKata, ")"))
    {
        S = ')';
    }
    else
    if(IsStringSame(KATA.TabKata, ":"))
    {
        S = ':';
    }
    else
    if(IsStringSame(KATA.TabKata, "begin"))
    {
        S = 'B';
    }
    else
    if(IsStringSame(KATA.TabKata, "end"))
    {
        S = 'E';
    }
    else
    if(IsStringSame(KATA.TabKata, "real"))
    {
        S = 'R';
    }
    else
    if(IsStringSame(KATA.TabKata, "integer"))
    {
        S = 'N';
    }
    else
    if(IsStringSame(KATA.TabKata, "char"))
    {
        S = 'C';
    }
    else
    if(IsStringSame(KATA.TabKata, "array"))
    {
        S = 'Y';
    }
    else
    if(IsStringSame(KATA.TabKata, "of"))
    {
        S = 'F';
    }
    else
    if(IsStringSame(KATA.TabKata, "="))
    {
        S = '=';
    }
    else
    if(IsStringSame(KATA.TabKata, "and"))
    {
        S = 'A';
    }
    else
    if(IsStringSame(KATA.TabKata, "or"))
    {
        S = 'O';
    }
    else
    if(IsStringSame(KATA.TabKata, ">"))
    {
        S = '>';
    }
    else
    if(IsStringSame(KATA.TabKata, "<"))
    {
        S = '<';
    }
    else
    if(IsStringSame(KATA.TabKata, "+"))
    {
        S = '+';
    }
    else
    if(IsStringSame(KATA.TabKata, "-"))
    {
        S = '-';
    }
    else
    if(IsStringSame(KATA.TabKata, "*"))
    {
        S = '*';
    }
    else
    if(IsStringSame(KATA.TabKata, ";"))
    {
        S = ';';
    }
    else
    if(IsStringSame(KATA.TabKata, "div"))
    {
        S = '%';
    }
    else
    if(IsStringSame(KATA.TabKata, "mod"))
    {
        S = 'M';
    }
    else
    if(IsStringSame(KATA.TabKata, "if"))
    {
        S = 'I';
    }
    else
    if(IsStringSame(KATA.TabKata, "then"))
    {
        S = 'H';
    }
    else
    if(IsStringSame(KATA.TabKata, "else"))
    {
        S = 'L';
    }
    else
    if(IsStringSame(KATA.TabKata, "repeat"))
    {
        S = 'T';
    }
    else
    if(IsStringSame(KATA.TabKata, "until"))
    {
        S = 'U';
    }
    else
    if(IsStringSame(KATA.TabKata, "for"))
    {
        S = 'J';
    }
    else
    if(IsStringSame(KATA.TabKata, "to"))
    {
        S = '^';
    }
    else
    if(IsStringSame(KATA.TabKata, "downto"))
    {
        S = 'Q';
    }
    else
    if(IsStringSame(KATA.TabKata, "do"))
    {
        S = 'D';
    }
    else
    if(IsStringSame(KATA.TabKata, "while"))
    {
        S = 'W';
    }
    else
    if(IsStringSame(KATA.TabKata, "step"))
    {
        S = '#';
    }
    else
    if(IsStringSame(KATA.TabKata, "."))
    {
        S = '.';
    }
    else
    if(IsStringSame(KATA.TabKata, "["))
    {
        S = '[';
    }
    else
    if(IsStringSame(KATA.TabKata, "output"))
    {
        S = 'Z';
    }
    else
    if(IsStringSame(KATA.TabKata, "input"))
    {
        S = '!';
    }
    else
    if(IsStringSame(KATA.TabKata, "]"))
    {
        S = ']';
    }
    else if(IsStringSame(KATA.TabKata, ","))
    {
        S = ',';
    }
    else
    {
        S = 'S';
    }
    return S;


}
int converter_action(char C){
    if(C==';'){
        return 0;
    }else if(C=='V'){
        return 1;
    }else if(C=='B'){
        return 2;
    }else if(C=='E'){
        return 3;
    }else if(C=='.'){
        return 4;
    }else if(C=='P'){
        return 5;
    }else if(C==':'){
        return 6;
    }else if(C==','){
        return 7;
    }else if(C=='@'){
        return 8;
    }else if(C=='Y'){
        return 9;
    }else if(C=='F'){
        return 10;
    }else if(C=='R'){
        return 11;
    }else if(C=='N'){
        return 12;
    }else if(C=='C'){
        return 13;
    }else if(C=='['){
        return 14;
    }else if(C=='_'){
        return 15;
    }else if(C==']'){
        return 16;
    }else if(C=='S'){
        return 17;
    }else if(C=='('){
        return 18;
    }else if(C==')'){
        return 19;
    }else if(C=='+'){
        return 20;
    }else if(C=='-'){
        return 21;
    }else if(C=='*'){
        return 22;
    }else if(C=='%'){
        return 23;
    }else if(C=='M'){
        return 24;
    }else if(C=='A'){
        return 25;
    }else if(C=='O'){
        return 26;
    }else if(C=='>'){
        return 27;
    }else if(C=='<'){
        return 29;
    }else if(C=='='){
        return 31;
    }else if(C=='<'){
        return 32;
    }else if(C=='I'){
        return 33;
    }else if(C=='H'){
        return 34;
    }else if(C=='L'){
        return 35;
    }else if(C=='T'){
        return 36;
    }else if(C=='U'){
        return 37;
    }else if(C=='W'){
        return 38;
    }else if(C=='D'){
        return 39;
    }else if(C=='J'){
        return 40;
    }else if(C=='^'){
        return 41;
    }else if(C=='#'){
        return 42;
    }else if(C=='Q'){
        return 43;
    }else if(C=='!'){
        return 44;
    }else if(C=='Z'){
        return 45;
    }else if(C=='$'){
        return 46;
    }
}
int converter_rule(int x){
    if(x==0){
        return 0;
    }else if(x==1){
        return 1;
    }else if(x>=2 && x<=3){
        return 2;
    }else if(x>=4 && x<=5){
        return 3;
    }else if(x>=6 && x<=12){
        return 4;
    }else if(x>=13 && x<=14){
        return 5;
    }else if(x>=15 && x <=16){
        return 6;
    }else if(x>=17 && x<= 19){
        return 7;
    }else if(x==20){
        return 8;
    }else if(x==21){
        return 9;
    }else if(x==22){
        return 10;
    }else if(x>=23 && x<=24){
        return 11;
    }else if(x>=25 && x<=26){
        return 12;
    }else if(x>=27 && x<=39){
        return 13;
    }else if(x>=40 && x<=42){
        return 14;
    }else if(x==43){
        return 15;
    }else if(x==44){
        return 16;
    }else if(x>=45 && x<=48){
        return 17;
    }else if(x>=49 && x<=50){
        return 18;
    }
}
int main()
{
    Stack S;
    Stack Derivation;
    int i = 0;
    CKata.TabKata = (char *) malloc ((NMax+1) * sizeof(char));
    char inp[1000];
    int j=0;
    char temp='0';
    char read;
    int neff=0;
    int ACTION[max][50];
	int GOTO[max][25];
    int LineError = 1;
	
	for (i=0;i<max;i++) {
		for (j=0;j<50;j++) {
			ACTION[i][j] = -999;
		}
	}
	
	for (i=0;i<max;i++) {
		for (j=0;j<25;j++) {
			GOTO[i][j] = -999;
		}
	}
	ACTION[0][5] = 2;
	ACTION[1][17] = 4;
	ACTION[2][17] = -1;
	ACTION[3][0] = 5;
	ACTION[4][0] = -21;
	ACTION[5][1] = 6;
	ACTION[6][2] = -3;
	ACTION[6][17] = 10;
	ACTION[7][2] = 11;
	ACTION[8][6] = 12;
	ACTION[9][6] = -4;
	ACTION[9][7] = 13;
	ACTION[10][6] = -21;
	ACTION[10][7] = -21;
	ACTION[11][3] = -12;
	ACTION[11][17] = 21;
	ACTION[11][33] = 22;
	ACTION[11][36] = 23;
	ACTION[11][38] = 24;
	ACTION[11][40] = 25;
	ACTION[11][44] = 26;
	ACTION[11][45] = 27;
	ACTION[12][9] = 30;
	ACTION[12][11] = 31;
	ACTION[12][12] = 32;
	ACTION[12][13] = 33;
	ACTION[13][17] = 10;
	ACTION[14][3] = 35;
	ACTION[15][8] = 36;
	ACTION[16][3] = -12;
	ACTION[16][17] = 21;
	ACTION[16][33] = 22;
	ACTION[16][36] = 23;
	ACTION[16][38] = 24;
	ACTION[16][40] = 25;
	ACTION[16][44] = 26;
	ACTION[16][45] = 27;
	ACTION[17][3] = -12;
	ACTION[17][17] = 21;
	ACTION[17][33] = 22;
	ACTION[17][36] = 23;
	ACTION[17][38] = 24;
	ACTION[17][40] = 25;
	ACTION[17][44] = 26;
	ACTION[17][45] = 27;
	ACTION[18][3] = -12;
	ACTION[18][17] = 21;
	ACTION[18][33] = 22;
	ACTION[18][36] = 23;
	ACTION[18][38] = 24;
	ACTION[18][40] = 25;
	ACTION[18][44] = 26;
	ACTION[18][45] = 27;
	ACTION[19][3] = -12;
	ACTION[19][17] = 21;
	ACTION[19][33] = 22;
	ACTION[19][36] = 23;
	ACTION[19][38] = 24;
	ACTION[19][40] = 25;
	ACTION[19][44] = 26;
	ACTION[19][45] = 27;
	ACTION[20][3] = -12;
	ACTION[20][17] = 21;
	ACTION[20][33] = 22;
	ACTION[20][36] = 23;
	ACTION[20][38] = 24;
	ACTION[20][40] = 25;
	ACTION[20][44] = 26;
	ACTION[20][45] = 27;
	ACTION[21][8] = -21;
	ACTION[22][17] = 46;
	ACTION[22][18] = 44;
	ACTION[23][17] = 21;
	ACTION[23][33] = 54;
	ACTION[23][36] = 55;
	ACTION[23][37] = -12;
	ACTION[23][38] = 56;
	ACTION[23][40] = 57;
	ACTION[23][44] = 58;
	ACTION[23][45] = 59;
	ACTION[24][17] = 64;
	ACTION[24][18] = 62;
	ACTION[25][17] = 21;
	ACTION[26][18] = 66;
	ACTION[27][18] = 67;
	ACTION[28][0] = 68;
	ACTION[29][0] = -13;
	ACTION[30][14] = 70;
	ACTION[31][0] = -17;
	ACTION[32][0] = -18;
	ACTION[33][0] = -19;
	ACTION[34][6] = -5;
	ACTION[35][4] = 71;
	ACTION[36][17] = 76;
	ACTION[36][18] = 74;
	ACTION[37][3] = -7;
	ACTION[38][3] = -8;
	ACTION[39][3] = -9;
	ACTION[40][3] = -10;
	ACTION[41][3] = -11;
	ACTION[42][34] = 77;
	ACTION[42][35] = 78;
	ACTION[43][20] = 81;
	ACTION[43][21] = 82;
	ACTION[43][22] = 83;
	ACTION[43][23] = 84;
	ACTION[43][24] = 85;
	ACTION[43][25] = 86;
	ACTION[43][26] = 87;
	ACTION[43][27] = 88;
	ACTION[43][28] = 89;
	ACTION[43][29] = 90;
	ACTION[43][30] = 91;
	ACTION[43][31] = 92;
	ACTION[43][32] = 93;
	ACTION[43][34] = -24;
	ACTION[43][35] = -24;
	ACTION[44][17] = 97;
	ACTION[44][18] = 95;
	ACTION[45][20] = -26;
	ACTION[45][21] = -26;
	ACTION[45][22] = -26;
	ACTION[45][23] = -26;
	ACTION[45][24] = -26;
	ACTION[45][25] = -26;
	ACTION[45][26] = -26;
	ACTION[45][27] = -26;
	ACTION[45][28] = -26;
	ACTION[45][29] = -26;
	ACTION[45][30] = -26;
	ACTION[45][31] = -26;
	ACTION[45][32] = -26;
	ACTION[45][34] = -26;
	ACTION[45][35] = -26;
	ACTION[46][20] = -21;
	ACTION[46][21] = -21;
	ACTION[46][22] = -21;
	ACTION[46][23] = -21;
	ACTION[46][24] = -21;
	ACTION[46][25] = -21;
	ACTION[46][26] = -21;
	ACTION[46][27] = -21;
	ACTION[46][28] = -21;
	ACTION[46][29] = -21;
	ACTION[46][30] = -21;
	ACTION[46][31] = -21;
	ACTION[46][32] = -21;
	ACTION[46][34] = -21;
	ACTION[46][35] = -21;
	ACTION[47][37] = 98;
	ACTION[48][8] = 99;
	ACTION[49][17] = 21;
	ACTION[49][33] = 54;
	ACTION[49][36] = 55;
	ACTION[49][37] = -12;
	ACTION[49][38] = 56;
	ACTION[49][40] = 57;
	ACTION[49][44] = 58;
	ACTION[49][45] = 59;
	ACTION[50][17] = 21;
	ACTION[50][33] = 54;
	ACTION[50][36] = 55;
	ACTION[50][37] = -12;
	ACTION[50][38] = 56;
	ACTION[50][40] = 57;
	ACTION[50][44] = 58;
	ACTION[50][45] = 59;
	ACTION[51][17] = 21;
	ACTION[51][33] = 54;
	ACTION[51][36] = 55;
	ACTION[51][37] = -12;
	ACTION[51][38] = 56;
	ACTION[51][40] = 57;
	ACTION[51][44] = 58;
	ACTION[51][45] = 59;
	ACTION[52][17] = 21;
	ACTION[52][33] = 54;
	ACTION[52][36] = 55;
	ACTION[52][37] = -12;
	ACTION[52][38] = 56;
	ACTION[52][40] = 57;
	ACTION[52][44] = 58;
	ACTION[52][45] = 59;
	ACTION[53][17] = 21;
	ACTION[53][33] = 54;
	ACTION[53][36] = 55;
	ACTION[53][37] = -12;
	ACTION[53][38] = 56;
	ACTION[53][40] = 57;
	ACTION[53][44] = 58;
	ACTION[53][45] = 59;
	ACTION[54][17] = 46;
	ACTION[54][18] = 44;
	ACTION[55][17] = 21;
	ACTION[55][33] = 54;
	ACTION[55][36] = 55;
	ACTION[55][37] = -12;
	ACTION[55][38] = 56;
	ACTION[55][40] = 57;
	ACTION[55][44] = 58;
	ACTION[55][45] = 59;
	ACTION[56][17] = 64;
	ACTION[56][18] = 62;
	ACTION[57][17] = 21;
	ACTION[58][18] = 109;
	ACTION[59][18] = 110;
	ACTION[60][39] = 111;
	ACTION[61][20] = 81;
	ACTION[61][21] = 82;
	ACTION[61][22] = 83;
	ACTION[61][23] = 84;
	ACTION[61][24] = 85;
	ACTION[61][25] = 86;
	ACTION[61][26] = 87;
	ACTION[61][27] = 88;
	ACTION[61][28] = 89;
	ACTION[61][29] = 90;
	ACTION[61][30] = 91;
	ACTION[61][31] = 92;
	ACTION[61][32] = 93;
	ACTION[61][39] = -24;
	ACTION[62][17] = 97;
	ACTION[62][18] = 95;
	ACTION[63][20] = -26;
	ACTION[63][21] = -26;
	ACTION[63][22] = -26;
	ACTION[63][23] = -26;
	ACTION[63][24] = -26;
	ACTION[63][25] = -26;
	ACTION[63][26] = -26;
	ACTION[63][27] = -26;
	ACTION[63][28] = -26;
	ACTION[63][29] = -26;
	ACTION[63][30] = -26;
	ACTION[63][31] = -26;
	ACTION[63][32] = -26;
	ACTION[63][39] = -26;
	ACTION[64][20] = -21;
	ACTION[64][21] = -21;
	ACTION[64][22] = -21;
	ACTION[64][23] = -21;
	ACTION[64][24] = -21;
	ACTION[64][25] = -21;
	ACTION[64][26] = -21;
	ACTION[64][27] = -21;
	ACTION[64][28] = -21;
	ACTION[64][29] = -21;
	ACTION[64][30] = -21;
	ACTION[64][31] = -21;
	ACTION[64][32] = -21;
	ACTION[64][39] = -21;
	ACTION[65][8] = 115;
	ACTION[66][17] = 120;
	ACTION[66][18] = 118;
	ACTION[67][17] = 120;
	ACTION[67][18] = 118;
	ACTION[68][2] = -3;
	ACTION[68][17] = 10;
	ACTION[69][10] = 123;
	ACTION[70][17] = 125;
	ACTION[71][46] = 999;
	ACTION[72][0] = 126;
	ACTION[73][0] = -24;
	ACTION[73][20] = 81;
	ACTION[73][21] = 82;
	ACTION[73][22] = 83;
	ACTION[73][23] = 84;
	ACTION[73][24] = 85;
	ACTION[73][25] = 86;
	ACTION[73][26] = 87;
	ACTION[73][27] = 88;
	ACTION[73][28] = 89;
	ACTION[73][29] = 90;
	ACTION[73][30] = 91;
	ACTION[73][31] = 92;
	ACTION[73][32] = 93;
	ACTION[74][17] = 97;
	ACTION[74][18] = 95;
	ACTION[75][0] = -26;
	ACTION[75][20] = -26;
	ACTION[75][21] = -26;
	ACTION[75][22] = -26;
	ACTION[75][23] = -26;
	ACTION[75][24] = -26;
	ACTION[75][25] = -26;
	ACTION[75][26] = -26;
	ACTION[75][27] = -26;
	ACTION[75][28] = -26;
	ACTION[75][29] = -26;
	ACTION[75][30] = -26;
	ACTION[75][31] = -26;
	ACTION[75][32] = -26;
	ACTION[76][0] = -21;
	ACTION[76][20] = -21;
	ACTION[76][21] = -21;
	ACTION[76][22] = -21;
	ACTION[76][23] = -21;
	ACTION[76][24] = -21;
	ACTION[76][25] = -21;
	ACTION[76][26] = -21;
	ACTION[76][27] = -21;
	ACTION[76][28] = -21;
	ACTION[76][29] = -21;
	ACTION[76][30] = -21;
	ACTION[76][31] = -21;
	ACTION[76][32] = -21;
	ACTION[77][2] = 130;
	ACTION[78][33] = 22;
	ACTION[79][34] = -22;
	ACTION[79][35] = -22;
	ACTION[80][17] = 46;
	ACTION[80][18] = 44;
	ACTION[81][17] = -27;
	ACTION[81][18] = -27;
	ACTION[82][17] = -28;
	ACTION[82][18] = -28;
	ACTION[83][17] = -29;
	ACTION[83][18] = -29;
	ACTION[84][17] = -30;
	ACTION[84][18] = -30;
	ACTION[85][17] = -31;
	ACTION[85][18] = -31;
	ACTION[86][17] = -32;
	ACTION[86][18] = -32;
	ACTION[87][17] = -33;
	ACTION[87][18] = -33;
	ACTION[88][17] = -34;
	ACTION[88][18] = -34;
	ACTION[89][17] = -35;
	ACTION[89][18] = -35;
	ACTION[90][17] = -36;
	ACTION[90][18] = -36;
	ACTION[91][17] = -37;
	ACTION[91][18] = -37;
	ACTION[92][17] = -38;
	ACTION[92][18] = -38;
	ACTION[93][17] = -39;
	ACTION[93][18] = -39;
	ACTION[94][20] = 81;
	ACTION[94][21] = 82;
	ACTION[94][22] = 83;
	ACTION[94][23] = 84;
	ACTION[94][24] = 85;
	ACTION[94][25] = 86;
	ACTION[94][26] = 87;
	ACTION[94][27] = 88;
	ACTION[94][28] = 89;
	ACTION[94][29] = 90;
	ACTION[94][30] = 91;
	ACTION[94][31] = 92;
	ACTION[94][32] = 93;
	ACTION[95][17] = 97;
	ACTION[95][18] = 95;
	ACTION[96][20] = -26;
	ACTION[96][21] = -26;
	ACTION[96][22] = -26;
	ACTION[96][23] = -26;
	ACTION[96][24] = -26;
	ACTION[96][25] = -26;
	ACTION[96][26] = -26;
	ACTION[96][27] = -26;
	ACTION[96][28] = -26;
	ACTION[96][29] = -26;
	ACTION[96][30] = -26;
	ACTION[96][31] = -26;
	ACTION[96][32] = -26;
	ACTION[97][20] = -21;
	ACTION[97][21] = -21;
	ACTION[97][22] = -21;
	ACTION[97][23] = -21;
	ACTION[97][24] = -21;
	ACTION[97][25] = -21;
	ACTION[97][26] = -21;
	ACTION[97][27] = -21;
	ACTION[97][28] = -21;
	ACTION[97][29] = -21;
	ACTION[97][30] = -21;
	ACTION[97][31] = -21;
	ACTION[97][32] = -21;
	ACTION[98][17] = 76;
	ACTION[98][18] = 74;
	ACTION[99][17] = 76;
	ACTION[99][18] = 74;
	ACTION[100][37] = -7;
	ACTION[101][37] = -8;
	ACTION[102][37] = -9;
	ACTION[103][37] = -10;
	ACTION[104][37] = -11;
	ACTION[105][34] = 137;
	ACTION[105][35] = 138;
	ACTION[106][37] = 139;
	ACTION[107][39] = 140;
	ACTION[108][8] = 141;
	ACTION[109][17] = 120;
	ACTION[109][18] = 118;
	ACTION[110][17] = 120;
	ACTION[110][18] = 118;
	ACTION[111][2] = 144;
	ACTION[112][39] = -22;
	ACTION[113][17] = 64;
	ACTION[113][18] = 62;
	ACTION[114][20] = 81;
	ACTION[114][21] = 82;
	ACTION[114][22] = 83;
	ACTION[114][23] = 84;
	ACTION[114][24] = 85;
	ACTION[114][25] = 86;
	ACTION[114][26] = 87;
	ACTION[114][27] = 88;
	ACTION[114][28] = 89;
	ACTION[114][29] = 90;
	ACTION[114][30] = 91;
	ACTION[114][31] = 92;
	ACTION[114][32] = 93;
	ACTION[115][17] = 148;
	ACTION[116][19] = 149;
	ACTION[117][19] = -24;
	ACTION[117][20] = 81;
	ACTION[117][21] = 82;
	ACTION[117][22] = 83;
	ACTION[117][23] = 84;
	ACTION[117][24] = 85;
	ACTION[117][25] = 86;
	ACTION[117][26] = 87;
	ACTION[117][27] = 88;
	ACTION[117][28] = 89;
	ACTION[117][29] = 90;
	ACTION[117][30] = 91;
	ACTION[117][31] = 92;
	ACTION[117][32] = 93;
	ACTION[118][17] = 97;
	ACTION[118][18] = 95;
	ACTION[119][19] = -26;
	ACTION[119][20] = -26;
	ACTION[119][21] = -26;
	ACTION[119][22] = -26;
	ACTION[119][23] = -26;
	ACTION[119][24] = -26;
	ACTION[119][25] = -26;
	ACTION[119][26] = -26;
	ACTION[119][27] = -26;
	ACTION[119][28] = -26;
	ACTION[119][29] = -26;
	ACTION[119][30] = -26;
	ACTION[119][31] = -26;
	ACTION[119][32] = -26;
	ACTION[120][19] = -21;
	ACTION[120][20] = -21;
	ACTION[120][21] = -21;
	ACTION[120][22] = -21;
	ACTION[120][23] = -21;
	ACTION[120][24] = -21;
	ACTION[120][25] = -21;
	ACTION[120][26] = -21;
	ACTION[120][27] = -21;
	ACTION[120][28] = -21;
	ACTION[120][29] = -21;
	ACTION[120][30] = -21;
	ACTION[120][31] = -21;
	ACTION[120][32] = -21;
	ACTION[121][19] = 153;
	ACTION[122][2] = -2;
	ACTION[123][9] = 156;
	ACTION[123][11] = 31;
	ACTION[123][12] = 32;
	ACTION[123][13] = 33;
	ACTION[124][15] = 157;
	ACTION[125][15] = -21;
	ACTION[126][3] = -12;
	ACTION[126][17] = 21;
	ACTION[126][33] = 22;
	ACTION[126][36] = 23;
	ACTION[126][38] = 24;
	ACTION[126][40] = 25;
	ACTION[126][44] = 26;
	ACTION[126][45] = 27;
	ACTION[127][0] = -22;
	ACTION[128][17] = 76;
	ACTION[128][18] = 74;
	ACTION[129][20] = 81;
	ACTION[129][21] = 82;
	ACTION[129][22] = 83;
	ACTION[129][23] = 84;
	ACTION[129][24] = 85;
	ACTION[129][25] = 86;
	ACTION[129][26] = 87;
	ACTION[129][27] = 88;
	ACTION[129][28] = 89;
	ACTION[129][29] = 90;
	ACTION[129][30] = 91;
	ACTION[129][31] = 92;
	ACTION[129][32] = 93;
	ACTION[130][3] = -12;
	ACTION[130][17] = 21;
	ACTION[130][33] = 22;
	ACTION[130][36] = 23;
	ACTION[130][38] = 24;
	ACTION[130][40] = 25;
	ACTION[130][44] = 26;
	ACTION[130][45] = 27;
	ACTION[131][3] = -42;
	ACTION[131][17] = -42;
	ACTION[131][33] = -42;
	ACTION[131][36] = -42;
	ACTION[131][38] = -42;
	ACTION[131][40] = -42;
	ACTION[131][44] = -42;
	ACTION[131][45] = -42;
	ACTION[132][20] = 81;
	ACTION[132][21] = 82;
	ACTION[132][22] = 83;
	ACTION[132][23] = 84;
	ACTION[132][24] = 85;
	ACTION[132][25] = 86;
	ACTION[132][26] = 87;
	ACTION[132][27] = 88;
	ACTION[132][28] = 89;
	ACTION[132][29] = 90;
	ACTION[132][30] = 91;
	ACTION[132][31] = 92;
	ACTION[132][32] = 93;
	ACTION[132][34] = -24;
	ACTION[132][35] = -24;
	ACTION[133][17] = 120;
	ACTION[133][18] = 118;
	ACTION[134][20] = 81;
	ACTION[134][21] = 82;
	ACTION[134][22] = 83;
	ACTION[134][23] = 84;
	ACTION[134][24] = 85;
	ACTION[134][25] = 86;
	ACTION[134][26] = 87;
	ACTION[134][27] = 88;
	ACTION[134][28] = 89;
	ACTION[134][29] = 90;
	ACTION[134][30] = 91;
	ACTION[134][31] = 92;
	ACTION[134][32] = 93;
	ACTION[135][0] = 165;
	ACTION[136][0] = 166;
	ACTION[137][2] = 167;
	ACTION[138][33] = 54;
	ACTION[139][17] = 76;
	ACTION[139][18] = 74;
	ACTION[140][2] = 170;
	ACTION[141][17] = 148;
	ACTION[142][19] = 172;
	ACTION[143][19] = 173;
	ACTION[144][3] = -12;
	ACTION[144][17] = 21;
	ACTION[144][33] = 22;
	ACTION[144][36] = 23;
	ACTION[144][38] = 24;
	ACTION[144][40] = 25;
	ACTION[144][44] = 26;
	ACTION[144][45] = 27;
	ACTION[145][20] = 81;
	ACTION[145][21] = 82;
	ACTION[145][22] = 83;
	ACTION[145][23] = 84;
	ACTION[145][24] = 85;
	ACTION[145][25] = 86;
	ACTION[145][26] = 87;
	ACTION[145][27] = 88;
	ACTION[145][28] = 89;
	ACTION[145][29] = 90;
	ACTION[145][30] = 91;
	ACTION[145][31] = 92;
	ACTION[145][32] = 93;
	ACTION[145][39] = -24;
	ACTION[146][17] = 120;
	ACTION[146][18] = 118;
	ACTION[147][41] = 177;
	ACTION[147][43] = 178;
	ACTION[148][41] = -21;
	ACTION[148][43] = -21;
	ACTION[149][0] = 179;
	ACTION[150][19] = -22;
	ACTION[151][17] = 120;
	ACTION[151][18] = 118;
	ACTION[152][20] = 81;
	ACTION[152][21] = 82;
	ACTION[152][22] = 83;
	ACTION[152][23] = 84;
	ACTION[152][24] = 85;
	ACTION[152][25] = 86;
	ACTION[152][26] = 87;
	ACTION[152][27] = 88;
	ACTION[152][28] = 89;
	ACTION[152][29] = 90;
	ACTION[152][30] = 91;
	ACTION[152][31] = 92;
	ACTION[152][32] = 93;
	ACTION[153][0] = 182;
	ACTION[154][0] = -14;
	ACTION[155][0] = -15;
	ACTION[156][14] = 70;
	ACTION[157][17] = 185;
	ACTION[158][3] = -6;
	ACTION[159][0] = -24;
	ACTION[159][20] = 81;
	ACTION[159][21] = 82;
	ACTION[159][22] = 83;
	ACTION[159][23] = 84;
	ACTION[159][24] = 85;
	ACTION[159][25] = 86;
	ACTION[159][26] = 87;
	ACTION[159][27] = 88;
	ACTION[159][28] = 89;
	ACTION[159][29] = 90;
	ACTION[159][30] = 91;
	ACTION[159][31] = 92;
	ACTION[159][32] = 93;
	ACTION[160][17] = 120;
	ACTION[160][18] = 118;
	ACTION[161][3] = 188;
	ACTION[162][34] = -23;
	ACTION[162][35] = -23;
	ACTION[163][19] = 189;
	ACTION[164][17] = 120;
	ACTION[164][18] = 118;
	ACTION[165][3] = -43;
	ACTION[165][17] = -43;
	ACTION[165][33] = -43;
	ACTION[165][36] = -43;
	ACTION[165][38] = -43;
	ACTION[165][40] = -43;
	ACTION[165][44] = -43;
	ACTION[165][45] = -43;
	ACTION[166][17] = 21;
	ACTION[166][33] = 54;
	ACTION[166][36] = 55;
	ACTION[166][37] = -12;
	ACTION[166][38] = 56;
	ACTION[166][40] = 57;
	ACTION[166][44] = 58;
	ACTION[166][45] = 59;
	ACTION[167][3] = -12;
	ACTION[167][17] = 21;
	ACTION[167][33] = 22;
	ACTION[167][36] = 23;
	ACTION[167][38] = 24;
	ACTION[167][40] = 25;
	ACTION[167][44] = 26;
	ACTION[167][45] = 27;
	ACTION[168][17] = -42;
	ACTION[168][33] = -42;
	ACTION[168][36] = -42;
	ACTION[168][37] = -42;
	ACTION[168][38] = -42;
	ACTION[168][40] = -42;
	ACTION[168][44] = -42;
	ACTION[168][45] = -42;
	ACTION[169][0] = 193;
	ACTION[170][3] = -12;
	ACTION[170][17] = 21;
	ACTION[170][33] = 22;
	ACTION[170][36] = 23;
	ACTION[170][38] = 24;
	ACTION[170][40] = 25;
	ACTION[170][44] = 26;
	ACTION[170][45] = 27;
	ACTION[171][41] = 195;
	ACTION[171][43] = 196;
	ACTION[172][0] = 197;
	ACTION[173][0] = 198;
	ACTION[174][3] = 199;
	ACTION[175][39] = -23;
	ACTION[176][19] = 200;
	ACTION[177][17] = 202;
	ACTION[178][17] = 202;
	ACTION[179][3] = -49;
	ACTION[179][17] = -49;
	ACTION[179][33] = -49;
	ACTION[179][36] = -49;
	ACTION[179][38] = -49;
	ACTION[179][40] = -49;
	ACTION[179][44] = -49;
	ACTION[179][45] = -49;
	ACTION[180][19] = -24;
	ACTION[180][20] = 81;
	ACTION[180][21] = 82;
	ACTION[180][22] = 83;
	ACTION[180][23] = 84;
	ACTION[180][24] = 85;
	ACTION[180][25] = 86;
	ACTION[180][26] = 87;
	ACTION[180][27] = 88;
	ACTION[180][28] = 89;
	ACTION[180][29] = 90;
	ACTION[180][30] = 91;
	ACTION[180][31] = 92;
	ACTION[180][32] = 93;
	ACTION[181][17] = 120;
	ACTION[181][18] = 118;
	ACTION[182][3] = -50;
	ACTION[182][17] = -50;
	ACTION[182][33] = -50;
	ACTION[182][36] = -50;
	ACTION[182][38] = -50;
	ACTION[182][40] = -50;
	ACTION[182][44] = -50;
	ACTION[182][45] = -50;
	ACTION[183][10] = 206;
	ACTION[184][16] = 207;
	ACTION[185][16] = -21;
	ACTION[186][0] = -23;
	ACTION[187][19] = 208;
	ACTION[188][0] = 209;
	ACTION[188][35] = 210;
	ACTION[189][20] = -25;
	ACTION[189][21] = -25;
	ACTION[189][22] = -25;
	ACTION[189][23] = -25;
	ACTION[189][24] = -25;
	ACTION[189][25] = -25;
	ACTION[189][26] = -25;
	ACTION[189][27] = -25;
	ACTION[189][28] = -25;
	ACTION[189][29] = -25;
	ACTION[189][30] = -25;
	ACTION[189][31] = -25;
	ACTION[189][32] = -25;
	ACTION[189][34] = -25;
	ACTION[189][35] = -25;
	ACTION[190][19] = 211;
	ACTION[191][37] = -6;
	ACTION[192][3] = 212;
	ACTION[193][17] = -43;
	ACTION[193][33] = -43;
	ACTION[193][36] = -43;
	ACTION[193][37] = -43;
	ACTION[193][38] = -43;
	ACTION[193][40] = -43;
	ACTION[193][44] = -43;
	ACTION[193][45] = -43;
	ACTION[194][3] = 213;
	ACTION[195][17] = 202;
	ACTION[196][17] = 202;
	ACTION[197][17] = -49;
	ACTION[197][33] = -49;
	ACTION[197][36] = -49;
	ACTION[197][37] = -49;
	ACTION[197][38] = -49;
	ACTION[197][40] = -49;
	ACTION[197][44] = -49;
	ACTION[197][45] = -49;
	ACTION[198][17] = -50;
	ACTION[198][33] = -50;
	ACTION[198][36] = -50;
	ACTION[198][37] = -50;
	ACTION[198][38] = -50;
	ACTION[198][40] = -50;
	ACTION[198][44] = -50;
	ACTION[198][45] = -50;
	ACTION[199][0] = 216;
	ACTION[200][20] = -25;
	ACTION[200][21] = -25;
	ACTION[200][22] = -25;
	ACTION[200][23] = -25;
	ACTION[200][24] = -25;
	ACTION[200][25] = -25;
	ACTION[200][26] = -25;
	ACTION[200][27] = -25;
	ACTION[200][28] = -25;
	ACTION[200][29] = -25;
	ACTION[200][30] = -25;
	ACTION[200][31] = -25;
	ACTION[200][32] = -25;
	ACTION[200][39] = -25;
	ACTION[201][39] = 218;
	ACTION[201][42] = 217;
	ACTION[202][39] = -21;
	ACTION[202][42] = -21;
	ACTION[203][39] = 220;
	ACTION[203][42] = 219;
	ACTION[204][19] = -23;
	ACTION[205][19] = 221;
	ACTION[206][11] = 31;
	ACTION[206][12] = 32;
	ACTION[206][13] = 33;
	ACTION[207][10] = -20;
	ACTION[208][0] = -25;
	ACTION[208][20] = -25;
	ACTION[208][21] = -25;
	ACTION[208][22] = -25;
	ACTION[208][23] = -25;
	ACTION[208][24] = -25;
	ACTION[208][25] = -25;
	ACTION[208][26] = -25;
	ACTION[208][27] = -25;
	ACTION[208][28] = -25;
	ACTION[208][29] = -25;
	ACTION[208][30] = -25;
	ACTION[208][31] = -25;
	ACTION[208][32] = -25;
	ACTION[209][3] = -40;
	ACTION[209][17] = -40;
	ACTION[209][33] = -40;
	ACTION[209][36] = -40;
	ACTION[209][38] = -40;
	ACTION[209][40] = -40;
	ACTION[209][44] = -40;
	ACTION[209][45] = -40;
	ACTION[210][2] = 223;
	ACTION[211][20] = -25;
	ACTION[211][21] = -25;
	ACTION[211][22] = -25;
	ACTION[211][23] = -25;
	ACTION[211][24] = -25;
	ACTION[211][25] = -25;
	ACTION[211][26] = -25;
	ACTION[211][27] = -25;
	ACTION[211][28] = -25;
	ACTION[211][29] = -25;
	ACTION[211][30] = -25;
	ACTION[211][31] = -25;
	ACTION[211][32] = -25;
	ACTION[212][0] = 224;
	ACTION[212][35] = 225;
	ACTION[213][0] = 226;
	ACTION[214][39] = 228;
	ACTION[214][42] = 227;
	ACTION[215][39] = 230;
	ACTION[215][42] = 229;
	ACTION[216][3] = -44;
	ACTION[216][17] = -44;
	ACTION[216][33] = -44;
	ACTION[216][36] = -44;
	ACTION[216][38] = -44;
	ACTION[216][40] = -44;
	ACTION[216][44] = -44;
	ACTION[216][45] = -44;
	ACTION[217][17] = 232;
	ACTION[218][2] = 233;
	ACTION[219][17] = 232;
	ACTION[220][2] = 235;
	ACTION[221][19] = -25;
	ACTION[221][20] = -25;
	ACTION[221][21] = -25;
	ACTION[221][22] = -25;
	ACTION[221][23] = -25;
	ACTION[221][24] = -25;
	ACTION[221][25] = -25;
	ACTION[221][26] = -25;
	ACTION[221][27] = -25;
	ACTION[221][28] = -25;
	ACTION[221][29] = -25;
	ACTION[221][30] = -25;
	ACTION[221][31] = -25;
	ACTION[221][32] = -25;
	ACTION[222][0] = -16;
	ACTION[223][3] = -12;
	ACTION[223][17] = 21;
	ACTION[223][33] = 22;
	ACTION[223][36] = 23;
	ACTION[223][38] = 24;
	ACTION[223][40] = 25;
	ACTION[223][44] = 26;
	ACTION[223][45] = 27;
	ACTION[224][17] = -40;
	ACTION[224][33] = -40;
	ACTION[224][36] = -40;
	ACTION[224][37] = -40;
	ACTION[224][38] = -40;
	ACTION[224][40] = -40;
	ACTION[224][44] = -40;
	ACTION[224][45] = -40;
	ACTION[225][2] = 237;
	ACTION[226][17] = -44;
	ACTION[226][33] = -44;
	ACTION[226][36] = -44;
	ACTION[226][37] = -44;
	ACTION[226][38] = -44;
	ACTION[226][40] = -44;
	ACTION[226][44] = -44;
	ACTION[226][45] = -44;
	ACTION[227][17] = 232;
	ACTION[228][2] = 239;
	ACTION[229][17] = 232;
	ACTION[230][2] = 241;
	ACTION[231][39] = 242;
	ACTION[232][39] = -21;
	ACTION[233][3] = -12;
	ACTION[233][17] = 21;
	ACTION[233][33] = 22;
	ACTION[233][36] = 23;
	ACTION[233][38] = 24;
	ACTION[233][40] = 25;
	ACTION[233][44] = 26;
	ACTION[233][45] = 27;
	ACTION[234][39] = 244;
	ACTION[235][3] = -12;
	ACTION[235][17] = 21;
	ACTION[235][33] = 22;
	ACTION[235][36] = 23;
	ACTION[235][38] = 24;
	ACTION[235][40] = 25;
	ACTION[235][44] = 26;
	ACTION[235][45] = 27;
	ACTION[236][3] = 246;
	ACTION[237][3] = -12;
	ACTION[237][17] = 21;
	ACTION[237][33] = 22;
	ACTION[237][36] = 23;
	ACTION[237][38] = 24;
	ACTION[237][40] = 25;
	ACTION[237][44] = 26;
	ACTION[237][45] = 27;
	ACTION[238][39] = 248;
	ACTION[239][3] = -12;
	ACTION[239][17] = 21;
	ACTION[239][33] = 22;
	ACTION[239][36] = 23;
	ACTION[239][38] = 24;
	ACTION[239][40] = 25;
	ACTION[239][44] = 26;
	ACTION[239][45] = 27;
	ACTION[240][39] = 250;
	ACTION[241][3] = -12;
	ACTION[241][17] = 21;
	ACTION[241][33] = 22;
	ACTION[241][36] = 23;
	ACTION[241][38] = 24;
	ACTION[241][40] = 25;
	ACTION[241][44] = 26;
	ACTION[241][45] = 27;
	ACTION[242][2] = 252;
	ACTION[243][3] = 253;
	ACTION[244][2] = 254;
	ACTION[245][3] = 255;
	ACTION[246][0] = 256;
	ACTION[247][3] = 257;
	ACTION[248][2] = 258;
	ACTION[249][3] = 259;
	ACTION[250][2] = 260;
	ACTION[251][3] = 261;
	ACTION[252][3] = -12;
	ACTION[252][17] = 21;
	ACTION[252][33] = 22;
	ACTION[252][36] = 23;
	ACTION[252][38] = 24;
	ACTION[252][40] = 25;
	ACTION[252][44] = 26;
	ACTION[252][45] = 27;
	ACTION[253][0] = 263;
	ACTION[254][3] = -12;
	ACTION[254][17] = 21;
	ACTION[254][33] = 22;
	ACTION[254][36] = 23;
	ACTION[254][38] = 24;
	ACTION[254][40] = 25;
	ACTION[254][44] = 26;
	ACTION[254][45] = 27;
	ACTION[255][0] = 265;
	ACTION[256][3] = -41;
	ACTION[256][17] = -41;
	ACTION[256][33] = -41;
	ACTION[256][36] = -41;
	ACTION[256][38] = -41;
	ACTION[256][40] = -41;
	ACTION[256][44] = -41;
	ACTION[256][45] = -41;
	ACTION[257][0] = 266;
	ACTION[258][3] = -12;
	ACTION[258][17] = 21;
	ACTION[258][33] = 22;
	ACTION[258][36] = 23;
	ACTION[258][38] = 24;
	ACTION[258][40] = 25;
	ACTION[258][44] = 26;
	ACTION[258][45] = 27;
	ACTION[259][0] = 268;
	ACTION[260][3] = -12;
	ACTION[260][17] = 21;
	ACTION[260][33] = 22;
	ACTION[260][36] = 23;
	ACTION[260][38] = 24;
	ACTION[260][40] = 25;
	ACTION[260][44] = 26;
	ACTION[260][45] = 27;
	ACTION[261][0] = 270;
	ACTION[262][3] = 271;
	ACTION[263][3] = -46;
	ACTION[263][17] = -46;
	ACTION[263][33] = -46;
	ACTION[263][36] = -46;
	ACTION[263][38] = -46;
	ACTION[263][40] = -46;
	ACTION[263][44] = -46;
	ACTION[263][45] = -46;
	ACTION[264][3] = 272;
	ACTION[265][3] = -48;
	ACTION[265][17] = -48;
	ACTION[265][33] = -48;
	ACTION[265][36] = -48;
	ACTION[265][38] = -48;
	ACTION[265][40] = -48;
	ACTION[265][44] = -48;
	ACTION[265][45] = -48;
	ACTION[266][17] = -41;
	ACTION[266][33] = -41;
	ACTION[266][36] = -41;
	ACTION[266][37] = -41;
	ACTION[266][38] = -41;
	ACTION[266][40] = -41;
	ACTION[266][44] = -41;
	ACTION[266][45] = -41;
	ACTION[267][3] = 273;
	ACTION[268][17] = -46;
	ACTION[268][33] = -46;
	ACTION[268][36] = -46;
	ACTION[268][37] = -46;
	ACTION[268][38] = -46;
	ACTION[268][40] = -46;
	ACTION[268][44] = -46;
	ACTION[268][45] = -46;
	ACTION[269][3] = 274;
	ACTION[270][17] = -48;
	ACTION[270][33] = -48;
	ACTION[270][36] = -48;
	ACTION[270][37] = -48;
	ACTION[270][38] = -48;
	ACTION[270][40] = -48;
	ACTION[270][44] = -48;
	ACTION[270][45] = -48;
	ACTION[271][0] = 275;
	ACTION[272][0] = 276;
	ACTION[273][0] = 277;
	ACTION[274][0] = 278;
	ACTION[275][3] = -45;
	ACTION[275][17] = -45;
	ACTION[275][33] = -45;
	ACTION[275][36] = -45;
	ACTION[275][38] = -45;
	ACTION[275][40] = -45;
	ACTION[275][44] = -45;
	ACTION[275][45] = -45;
	ACTION[276][3] = -47;
	ACTION[276][17] = -47;
	ACTION[276][33] = -47;
	ACTION[276][36] = -47;
	ACTION[276][38] = -47;
	ACTION[276][40] = -47;
	ACTION[276][44] = -47;
	ACTION[276][45] = -47;
	ACTION[277][17] = -45;
	ACTION[277][33] = -45;
	ACTION[277][36] = -45;
	ACTION[277][37] = -45;
	ACTION[277][38] = -45;
	ACTION[277][40] = -45;
	ACTION[277][44] = -45;
	ACTION[277][45] = -45;
	ACTION[278][17] = -47;
	ACTION[278][33] = -47;
	ACTION[278][36] = -47;
	ACTION[278][37] = -47;
	ACTION[278][38] = -47;
	ACTION[278][40] = -47;
	ACTION[278][44] = -47;
	ACTION[278][45] = -47;
	
	GOTO[0][1] = 1;
	GOTO[1][9] = 3;
	GOTO[6][2] = 7;
	GOTO[6][3] = 8;
	GOTO[6][9] = 9;
	GOTO[11][4] = 14;
	GOTO[11][9] = 15;
	GOTO[11][14] = 16;
	GOTO[11][15] = 17;
	GOTO[11][16] = 18;
	GOTO[11][17] = 19;
	GOTO[11][18] = 20;
	GOTO[12][5] = 28;
	GOTO[12][7] = 29;
	GOTO[13][3] = 34;
	GOTO[13][9] = 9;
	GOTO[16][4] = 37;
	GOTO[16][9] = 15;
	GOTO[16][14] = 16;
	GOTO[16][15] = 17;
	GOTO[16][16] = 18;
	GOTO[16][17] = 19;
	GOTO[16][18] = 20;
	GOTO[17][4] = 38;
	GOTO[17][9] = 15;
	GOTO[17][14] = 16;
	GOTO[17][15] = 17;
	GOTO[17][16] = 18;
	GOTO[17][17] = 19;
	GOTO[17][18] = 20;
	GOTO[18][4] = 39;
	GOTO[18][9] = 15;
	GOTO[18][14] = 16;
	GOTO[18][15] = 17;
	GOTO[18][16] = 18;
	GOTO[18][17] = 19;
	GOTO[18][18] = 20;
	GOTO[19][4] = 40;
	GOTO[19][9] = 15;
	GOTO[19][14] = 16;
	GOTO[19][15] = 17;
	GOTO[19][16] = 18;
	GOTO[19][17] = 19;
	GOTO[19][18] = 20;
	GOTO[20][4] = 41;
	GOTO[20][9] = 15;
	GOTO[20][14] = 16;
	GOTO[20][15] = 17;
	GOTO[20][16] = 18;
	GOTO[20][17] = 19;
	GOTO[20][18] = 20;
	GOTO[22][9] = 45;
	GOTO[22][10] = 42;
	GOTO[22][12] = 43;
	GOTO[23][4] = 47;
	GOTO[23][9] = 48;
	GOTO[23][14] = 49;
	GOTO[23][15] = 50;
	GOTO[23][16] = 51;
	GOTO[23][17] = 52;
	GOTO[23][18] = 53;
	GOTO[24][9] = 63;
	GOTO[24][10] = 60;
	GOTO[24][12] = 61;
	GOTO[25][9] = 65;
	GOTO[30][8] = 69;
	GOTO[36][9] = 75;
	GOTO[36][10] = 72;
	GOTO[36][12] = 73;
	GOTO[43][11] = 79;
	GOTO[43][13] = 80;
	GOTO[44][9] = 96;
	GOTO[44][12] = 94;
	GOTO[49][4] = 100;
	GOTO[49][9] = 48;
	GOTO[49][14] = 49;
	GOTO[49][15] = 50;
	GOTO[49][16] = 51;
	GOTO[49][17] = 52;
	GOTO[49][18] = 53;
	GOTO[50][4] = 101;
	GOTO[50][9] = 48;
	GOTO[50][14] = 49;
	GOTO[50][15] = 50;
	GOTO[50][16] = 51;
	GOTO[50][17] = 52;
	GOTO[50][18] = 53;
	GOTO[51][4] = 102;
	GOTO[51][9] = 48;
	GOTO[51][14] = 49;
	GOTO[51][15] = 50;
	GOTO[51][16] = 51;
	GOTO[51][17] = 52;
	GOTO[51][18] = 53;
	GOTO[52][4] = 103;
	GOTO[52][9] = 48;
	GOTO[52][14] = 49;
	GOTO[52][15] = 50;
	GOTO[52][16] = 51;
	GOTO[52][17] = 52;
	GOTO[52][18] = 53;
	GOTO[53][4] = 104;
	GOTO[53][9] = 48;
	GOTO[53][14] = 49;
	GOTO[53][15] = 50;
	GOTO[53][16] = 51;
	GOTO[53][17] = 52;
	GOTO[53][18] = 53;
	GOTO[54][9] = 45;
	GOTO[54][10] = 105;
	GOTO[54][12] = 43;
	GOTO[55][4] = 106;
	GOTO[55][9] = 48;
	GOTO[55][14] = 49;
	GOTO[55][15] = 50;
	GOTO[55][16] = 51;
	GOTO[55][17] = 52;
	GOTO[55][18] = 53;
	GOTO[56][9] = 63;
	GOTO[56][10] = 107;
	GOTO[56][12] = 61;
	GOTO[57][9] = 108;
	GOTO[61][11] = 112;
	GOTO[61][13] = 113;
	GOTO[62][9] = 96;
	GOTO[62][12] = 114;
	GOTO[66][9] = 119;
	GOTO[66][10] = 116;
	GOTO[66][12] = 117;
	GOTO[67][9] = 119;
	GOTO[67][10] = 121;
	GOTO[67][12] = 117;
	GOTO[68][2] = 122;
	GOTO[68][3] = 8;
	GOTO[68][9] = 9;
	GOTO[70][9] = 124;
	GOTO[73][11] = 127;
	GOTO[73][13] = 128;
	GOTO[74][9] = 96;
	GOTO[74][12] = 129;
	GOTO[78][14] = 131;
	GOTO[80][9] = 45;
	GOTO[80][12] = 132;
	GOTO[94][13] = 133;
	GOTO[95][9] = 96;
	GOTO[95][12] = 134;
	GOTO[98][9] = 75;
	GOTO[98][10] = 135;
	GOTO[98][12] = 73;
	GOTO[99][9] = 75;
	GOTO[99][10] = 136;
	GOTO[99][12] = 73;
	GOTO[109][9] = 119;
	GOTO[109][10] = 142;
	GOTO[109][12] = 117;
	GOTO[110][9] = 119;
	GOTO[110][10] = 143;
	GOTO[110][12] = 117;
	GOTO[113][9] = 63;
	GOTO[113][12] = 145;
	GOTO[114][13] = 146;
	GOTO[115][9] = 147;
	GOTO[117][11] = 150;
	GOTO[117][13] = 151;
	GOTO[118][9] = 96;
	GOTO[118][12] = 152;
	GOTO[123][6] = 154;
	GOTO[123][7] = 155;
	GOTO[126][4] = 158;
	GOTO[126][9] = 15;
	GOTO[126][14] = 16;
	GOTO[126][15] = 17;
	GOTO[126][16] = 18;
	GOTO[126][17] = 19;
	GOTO[126][18] = 20;
	GOTO[128][9] = 75;
	GOTO[128][12] = 159;
	GOTO[129][13] = 160;
	GOTO[130][4] = 161;
	GOTO[130][9] = 15;
	GOTO[130][14] = 16;
	GOTO[130][15] = 17;
	GOTO[130][16] = 18;
	GOTO[130][17] = 19;
	GOTO[130][18] = 20;
	GOTO[132][11] = 162;
	GOTO[132][13] = 80;
	GOTO[133][9] = 119;
	GOTO[133][10] = 163;
	GOTO[133][12] = 117;
	GOTO[134][13] = 164;
	GOTO[138][14] = 168;
	GOTO[139][9] = 75;
	GOTO[139][10] = 169;
	GOTO[139][12] = 73;
	GOTO[141][9] = 171;
	GOTO[144][4] = 174;
	GOTO[144][9] = 15;
	GOTO[144][14] = 16;
	GOTO[144][15] = 17;
	GOTO[144][16] = 18;
	GOTO[144][17] = 19;
	GOTO[144][18] = 20;
	GOTO[145][11] = 175;
	GOTO[145][13] = 113;
	GOTO[146][9] = 119;
	GOTO[146][10] = 176;
	GOTO[146][12] = 117;
	GOTO[151][9] = 119;
	GOTO[151][12] = 180;
	GOTO[152][13] = 181;
	GOTO[156][8] = 183;
	GOTO[157][9] = 184;
	GOTO[159][11] = 186;
	GOTO[159][13] = 128;
	GOTO[160][9] = 119;
	GOTO[160][10] = 187;
	GOTO[160][12] = 117;
	GOTO[164][9] = 119;
	GOTO[164][10] = 190;
	GOTO[164][12] = 117;
	GOTO[166][4] = 191;
	GOTO[166][9] = 48;
	GOTO[166][14] = 49;
	GOTO[166][15] = 50;
	GOTO[166][16] = 51;
	GOTO[166][17] = 52;
	GOTO[166][18] = 53;
	GOTO[167][4] = 192;
	GOTO[167][9] = 15;
	GOTO[167][14] = 16;
	GOTO[167][15] = 17;
	GOTO[167][16] = 18;
	GOTO[167][17] = 19;
	GOTO[167][18] = 20;
	GOTO[170][4] = 194;
	GOTO[170][9] = 15;
	GOTO[170][14] = 16;
	GOTO[170][15] = 17;
	GOTO[170][16] = 18;
	GOTO[170][17] = 19;
	GOTO[170][18] = 20;
	GOTO[177][9] = 201;
	GOTO[178][9] = 203;
	GOTO[180][11] = 204;
	GOTO[180][13] = 151;
	GOTO[181][9] = 119;
	GOTO[181][10] = 205;
	GOTO[181][12] = 117;
	GOTO[195][9] = 214;
	GOTO[196][9] = 215;
	GOTO[206][7] = 222;
	GOTO[217][9] = 231;
	GOTO[219][9] = 234;
	GOTO[223][4] = 236;
	GOTO[223][9] = 15;
	GOTO[223][14] = 16;
	GOTO[223][15] = 17;
	GOTO[223][16] = 18;
	GOTO[223][17] = 19;
	GOTO[223][18] = 20;
	GOTO[227][9] = 238;
	GOTO[229][9] = 240;
	GOTO[233][4] = 243;
	GOTO[233][9] = 15;
	GOTO[233][14] = 16;
	GOTO[233][15] = 17;
	GOTO[233][16] = 18;
	GOTO[233][17] = 19;
	GOTO[233][18] = 20;
	GOTO[235][4] = 245;
	GOTO[235][9] = 15;
	GOTO[235][14] = 16;
	GOTO[235][15] = 17;
	GOTO[235][16] = 18;
	GOTO[235][17] = 19;
	GOTO[235][18] = 20;
	GOTO[237][4] = 247;
	GOTO[237][9] = 15;
	GOTO[237][14] = 16;
	GOTO[237][15] = 17;
	GOTO[237][16] = 18;
	GOTO[237][17] = 19;
	GOTO[237][18] = 20;
	GOTO[239][4] = 249;
	GOTO[239][9] = 15;
	GOTO[239][14] = 16;
	GOTO[239][15] = 17;
	GOTO[239][16] = 18;
	GOTO[239][17] = 19;
	GOTO[239][18] = 20;
	GOTO[241][4] = 251;
	GOTO[241][9] = 15;
	GOTO[241][14] = 16;
	GOTO[241][15] = 17;
	GOTO[241][16] = 18;
	GOTO[241][17] = 19;
	GOTO[241][18] = 20;
	GOTO[252][4] = 262;
	GOTO[252][9] = 15;
	GOTO[252][14] = 16;
	GOTO[252][15] = 17;
	GOTO[252][16] = 18;
	GOTO[252][17] = 19;
	GOTO[252][18] = 20;
	GOTO[254][4] = 264;
	GOTO[254][9] = 15;
	GOTO[254][14] = 16;
	GOTO[254][15] = 17;
	GOTO[254][16] = 18;
	GOTO[254][17] = 19;
	GOTO[254][18] = 20;
	GOTO[258][4] = 267;
	GOTO[258][9] = 15;
	GOTO[258][14] = 16;
	GOTO[258][15] = 17;
	GOTO[258][16] = 18;
	GOTO[258][17] = 19;
	GOTO[258][18] = 20;
	GOTO[260][4] = 269;
	GOTO[260][9] = 15;
	GOTO[260][14] = 16;
	GOTO[260][15] = 17;
	GOTO[260][16] = 18;
	GOTO[260][17] = 19;
	GOTO[260][18] = 20;
	
		
	
	
    STARTKATA();
    CreateEmpty(&S);
    CreateEmpty(&Derivation);
    Push(&S,0);
    i=0;
    j=0;
    while(!EndKata)
    {
        read=Tokenizer(CKata);
        if(temp=='0'){
            if(read=='>' || read=='<' || read==':'|| read=='.'){
                temp=read;
            }else{
                temp='0';
                inp[j]=read;
                j++;
                
            }
        }else{
            if((temp == '<' && read=='>') ||(temp == '>' && read=='=')|(temp == '<' && read=='=') ||(temp == ':' && read=='=')){
                if(temp == ':' && read=='='){
                    inp[j]='@';
                    j++;
                }else {
                    inp[j]=temp;
                    j++;
                }
            }else if(temp == '.' && read=='.'){
                inp[j]='_';
                j++;
                temp='0';
            }else{

                inp[j]=temp;
                j++;
                inp[j]=read;
                j++;

                
            }
            temp='0';
        }
        
        
        memset(CKata.TabKata,0,strlen(CKata.TabKata));
        ADVKATA();
    
    }
    neff=j;
    inp[neff]='.';
    neff=j+1;
	inp[neff]='$';
	printf("Your code : \n");
    for(i=0;i<neff;i++){
        if(inp[i] != '\n')
        {
            printf("'%c' ",inp[i]);
        }
     
    }
    int k=0;
    int RULE[51] = {
				9,	        	        		// START 0
				1,                  			// P 1
				5,0,                			// VAR 2
				1,3,							// VARNAME 3
				5,2,2,2,2,2,0,      			// M 4
				1,4,                			// TYPE 5
				1,4,                			// TYPEARR 6
				1,1,1,              			// TYPEM 7 
				5,                  			// SIZE 8 
				1,                  			// S 9
				2,								// EXPR 10
				3,0,		    				// EXPR_F 11
				5,1,		    				// EXPR_A 12
				1,1,1,1,1,1,1,1,1,1,1,1,1,		// OP 13
				7,10,4,             			// IFTH 14
				5,                  			// RU 15
				7,                  			// WD 16
				13,11,13,11,        			// FT 17
				5,5                 			// IO 18
			};
	char RULEPREDIKAT[19][10]= {
			"START",	        	        // START 0
			"P",                  			// P 1
			"VAR",                			// VAR 2
			"VARNAME",						// VARNAME 3
			"M",      						// M 4
			"TYPE",                			// TYPE 5
			"TYPEARR",                		// TYPEARR 6
			"TYPEM",              			// TYPEM 7 
			"SIZE",                  		// SIZE 8 
			"S",                  			// S 9
			"EXPR",							// EXPR 10
			"EXPR_F",		    			// EXPR_F 11
			"EXPR_A",		    			// EXPR_A 12
			"OP",							// OP 13
			"IFTH",             			// IFTH 14
			"RU",                  			// RU 15
			"WD",                  			// WD 16
			"FT",        					// FT 17
			"IO"                 			// IO 18
			};
    int t;
    i=InfoTop(S);
    j=converter_action(inp[k]);
    int x;
	int pos;
	char HASIL[1000];
	int T=0,W=0;
	k=0;
	int y;
	//printf("%s\n",RULEPREDIKAT[18]);
	printf("\n");
	printf("derivation :\n");
    while(k<=neff){
            if(ACTION[i][j]==999 ||ACTION[i][j]==-999){
                if(inp[k-1] == '\n')
                {
                    LineError--;
                }
                break;
            }else if(ACTION[i][j]>0){
				Push(&S,ACTION[i][j]);	
				T++;
				HASIL[T]=-k;			
				k++;
                while(inp[k] == '\n')
                {
                    k++;
                    LineError++;
				}
                //printf("s %d\n",ACTION[i][j]);
                j=converter_action(inp[k]);
				i=InfoTop(S);
                
            }else{
				pos = abs(ACTION[i][j]);
				
				for(x=1;x<=RULE[pos];x++){
					Pop(&S,&t);
					T--;
				}	
                j=converter_rule(pos);
				i=InfoTop(S);
				T++;
				HASIL[T]=j;
				for(W=0;W<=T;W++){
					if(HASIL[W]>0 && HASIL[W]<=18){
						printf("%s ",RULEPREDIKAT[HASIL[W]]);
					}else if(HASIL[W]<0){
						printf("'%c' ",inp[(HASIL[W]*(-1))]);
					}
				}
				if(k!=neff-2){
					for(y=k;y<neff;y++){
						if(inp[y] != '\n')
						{
							printf("'%c' ",inp[y]);
						}
					 
					}
				}
				printf("\n");
                Push(&S,GOTO[i][j]);
                i=GOTO[i][j];
                j=converter_action(inp[k]);            
			}
       
	}
	for(W=0;W<=T;W++){
		if(HASIL[W]>0 && HASIL[W]<=18){
			printf("%s ",RULEPREDIKAT[HASIL[W]]);
		}else if(HASIL[W]<0){
			printf("'%c' ",inp[(HASIL[W]*(-1))]);
		}
	}

    printf("\n");
    if(ACTION[i][j]==999){
		printf("START\n");
		printf("\n");
        printf("Accepted\n");
    }else{
        printf("Compile error\n");
        printf("Error on line: %d\n", LineError);

    }


}
