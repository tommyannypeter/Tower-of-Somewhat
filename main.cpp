#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<windows.h>
#define Color SetConsoleTextAttribute
#define cfd GetStdHandle(STD_OUTPUT_HANDLE)

/*要加規則，珠珠數，排行*/ 

int pos[6][5], mark[6][5]={0};
int x=0, y=0;
int homer=0,combo=0,score=0;
float timea;
void gotoxy(int i,int j){
     COORD scrn;
     HANDLE hOutput=GetStdHandle(STD_OUTPUT_HANDLE);
     scrn.X=i;
     scrn.Y=j;
     SetConsoleCursorPosition(hOutput, scrn);
}

void home(){
    system("cls");    
    Color(cfd, 100);
   	printf("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n");
   	printf("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n");
   	printf("ww");
    Color(cfd, 7);
    printf("                             ");
    Color(cfd, 100);
    printf("ww\n");
    printf("ww");
    Color(cfd, 7);
    printf("           ");
    Color(cfd, 118);
    printf("什麼之塔");
    Color(cfd, 7);
    printf("          ");
    Color(cfd, 100);
    printf("ww\n");
   	printf("ww");
    Color(cfd, 7);
    printf("                             ");
    Color(cfd, 100);
    printf("ww\n");
    printf("ww");
    Color(cfd, 7);
    printf("                             ");
    Color(cfd, 100);
    printf("ww\n");
	printf("ww");
    Color(cfd, 7);
    printf("           ");
    Color(cfd, 73);
	if(homer==0){
        Color(cfd, 7);
        printf("\b\b[[");
        Color(cfd, 236);
        printf("開始遊戲");
        Color(cfd, 7);
        printf("]]        ");
    }
    else{
	    printf("開始遊戲");
        Color(cfd, 7);
        printf("          ");
    }
    Color(cfd, 100);
    printf("ww\n");
    printf("ww");
    Color(cfd, 7);
    printf("           ");
    Color(cfd, 73);
    if(homer==1){
        Color(cfd, 7);
        printf("\b\b[[");
        Color(cfd, 236);
        printf("最佳排行");
        Color(cfd, 7);
        printf("]]        ");
    }
    else{
	    printf("最佳排行");
        Color(cfd, 7);
        printf("          ");
    }
    Color(cfd, 100);
    printf("ww\n");
    printf("ww");
    Color(cfd, 7);
    printf("           ");
    Color(cfd, 73);
    if(homer==2){
        Color(cfd, 7);
        printf("\b\b[[");
        Color(cfd, 236);
        printf("離開遊戲");
        Color(cfd, 7);
        printf("]]        ");
    }
    else{
	    printf("離開遊戲");
        Color(cfd, 7);
        printf("          ");
    }
    Color(cfd, 100);
    printf("ww\n");
	printf("ww");
    Color(cfd, 7);
    printf("                             ");
    Color(cfd, 100);
    printf("ww\n");
    printf("ww");
    Color(cfd, 7);
    printf("                             ");
    Color(cfd, 100);
    printf("ww\n");
	printf("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n");
   	printf("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n");
   	Color(cfd, 15);
}

void show(){
	system("cls");
	for(int j=0; j<5; j++){
		for(int i=0; i<6; i++){
			if(pos[i][j]==0)
				printf("　");
			if(pos[i][j]==1 && mark[i][j]==0){
				Color(cfd, 11);
				printf("●");
			}
			if(pos[i][j]==1 && mark[i][j]==1){
				Color(cfd, 11);
				printf("◎");
			}
			if(pos[i][j]==2 && mark[i][j]==0){
				Color(cfd, 12);
				printf("●");
			}
			if(pos[i][j]==2 && mark[i][j]==1){
				Color(cfd, 12);
				printf("◎");
			}
			if(pos[i][j]==3 && mark[i][j]==0){
				Color(cfd, 14);
				printf("●");
			}
			if(pos[i][j]==3 && mark[i][j]==1){
				Color(cfd, 14);
				printf("◎");
			}
			if(pos[i][j]==4 && mark[i][j]==0){
				Color(cfd, 10);
				printf("●");
			}
			if(pos[i][j]==4 && mark[i][j]==1){
				Color(cfd, 10);
				printf("◎");
			}
			if(pos[i][j]==5 && mark[i][j]==0){
				Color(cfd, 8);
				printf("●");
			}
			if(pos[i][j]==5 && mark[i][j]==1){
				Color(cfd, 8);
				printf("◎");
			}
			if(pos[i][j]==6 && mark[i][j]==0){
				Color(cfd, 240);
				printf("ｘ");
			}
			
		}
	printf("\n");
	}
	Color(cfd, 7);
}

void show2(){
	system("cls");
	for(int j=0; j<5; j++){
		for(int i=0; i<6; i++){
			if(pos[i][j]==0)
				printf("　");
			if(pos[i][j]==1){
				Color(cfd, 11);
				printf("●");
			}
			if(pos[i][j]==2){
				Color(cfd, 12);
				printf("●");
			}
			if(pos[i][j]==3){
				Color(cfd, 14);
				printf("●");
			}
			if(pos[i][j]==4){
				Color(cfd, 10);
				printf("●");
			}
			if(pos[i][j]==5){
				Color(cfd, 8);
				printf("●");
			}
			if(pos[i][j]==6 && mark[i][j]==0){
				Color(cfd, 240);
				printf("ｘ");
				Color(cfd, 7);
			}
		}
	printf("\n");
	}
	Color(cfd, 7);
	if(combo!=0)
	printf("%dCOMBO!!!!", combo);
}

void moving(){
	int input, temp;
	double start=time(NULL);
	double end=time(NULL);
	while(end-start<=8){
	    //show();
		if(kbhit()!=0){
			if(getch()==224){
				input=getch();
				if(input==72){		//上 
					if(y!=0 && pos[x][y-1]!=6){
						mark[x][y]=0;
						temp=pos[x][y];
						pos[x][y]=pos[x][y-1];
						pos[x][y-1]=temp;
						y--;
						mark[x][y]=1;
						show();
					}
				}
				if(input==75){		//左
					if(x!=0 && pos[x-1][y]!=6){
						mark[x][y]=0;
						temp=pos[x][y];
						pos[x][y]=pos[x-1][y];
						pos[x-1][y]=temp;
						x--;
						mark[x][y]=1;
						show();
					}
				}
				if(input==77){		//右
					if(x!=5 && pos[x+1][y]!=6){
						mark[x][y]=0;
						temp=pos[x][y];
						pos[x][y]=pos[x+1][y];
						pos[x+1][y]=temp;
						x++;
						mark[x][y]=1;
						show();
					}
				}
				if(input==80){		//下 
					if(y!=4 && pos[x][y+1]!=6){
						mark[x][y]=0;
						temp=pos[x][y];
						pos[x][y]=pos[x][y+1];
						pos[x][y+1]=temp;
						y++;
						mark[x][y]=1;
						show();
					}
				}
			}
		}
		end=time(NULL);
		timea=end-start;
		printf("\n");
		Color(cfd, 170);
		for(float i=16-2*timea;i>=0;i--)
            printf("0");
        Color(cfd, 7);
        printf("                     ");
		gotoxy(0, 5);	
	}
}

void moving2(){
	int input, temp, t, t2=0;
	double start=time(NULL);
	double end=time(NULL);
	while(end-start<=8){
		if(kbhit()!=0){
			if(getch()==224){
				input=getch();
				if(input==80){		//上 
					if(y!=0){
						mark[x][y]=0;
						temp=pos[x][y];
						pos[x][y]=pos[x][y-1];
						pos[x][y-1]=temp;
						y--;
						mark[x][y]=1;
						show();
					}
				}
				if(input==77){		//左
					if(x!=0){
						mark[x][y]=0;
						temp=pos[x][y];
						pos[x][y]=pos[x-1][y];
						pos[x-1][y]=temp;
						x--;
						mark[x][y]=1;
						show();
					}
				}
				if(input==75){		//右
					if(x!=5){
						mark[x][y]=0;
						temp=pos[x][y];
						pos[x][y]=pos[x+1][y];
						pos[x+1][y]=temp;
						x++;
						mark[x][y]=1;
						show();
					}
				}
				if(input==72){		//下 
					if(y!=4){
						mark[x][y]=0;
						temp=pos[x][y];
						pos[x][y]=pos[x][y+1];
						pos[x][y+1]=temp;
						y++;
						mark[x][y]=1;
						show();
					}
				}
			}
		}
		end=time(NULL);
		printf("\n");
		Color(cfd, 170);
		for(float i=16-2*timea;i>=0;i--)
            printf("0");
        Color(cfd, 7);
        printf("                     ");
		gotoxy(0, 5);
	}
}

int erase(){
	int A[6][5]={0};
	int n,t,i,j;
	for(i=0; i<6; i++){
		for(j=0; j<5; j++){
            if(pos[i][j]!=0){
			    if(j!=0 && j!=4){
			     	if(pos[i][j]==pos[i][j-1] && pos[i][j]==pos[i][j+1]){
					   A[i][j]=pos[i][j];
					   A[i][j-1]=pos[i][j-1];
					   A[i][j+1]=pos[i][j+1];
				    }	
			    }
		        if(i!=0 && i!=5){
				    if(pos[i][j]==pos[i-1][j] && pos[i][j]==pos[i+1][j]){
					   A[i][j]=pos[i][j];
					   A[i-1][j]=pos[i-1][j];
					   A[i+1][j]=pos[i+1][j];
				    }
			    }
            }
		}
	}
	for(j=0; j<5; j++){
		for(i=0; i<6; i++){
			if(A[i][j]!=0){
				A[i][j]=100;
				t=pos[i][j];
				break;
			}
		}
		if(A[i][j]==100)
		  break;
	}
	for(n=0;n<5;n++){
	   for(j=0; j<5; j++){
	       for(i=0; i<6; i++){
                if(j!=0){
	               if(A[i][j-1]==100 && A[i][j]==t)
   	        	   A[i][j]=100;
                }
                if(j!=4){
				    if(A[i][j+1]==100 && A[i][j]==t)
				    A[i][j]=100;
			    }
			    if(i!=0){
				    if(A[i-1][j]==100 && A[i][j]==t)
				    A[i][j]=100;
			    }
			    if(i!=5){
				    if(A[i+1][j]==100 && A[i][j]==t)
				    A[i][j]=100;
			    }	
		  }
	   }
	   for(j=4; j>=0; j--){
			for(int i=5; i>=0; i--){
				if(j!=0){
					if(A[i][j-1]==100 && A[i][j]==t)
					A[i][j]=100;
				}
				if(j!=4){
					if(A[i][j+1]==100 && A[i][j]==t)
					A[i][j]=100;
				}
				if(i!=0){
					if(A[i-1][j]==100 && A[i][j]==t)
					A[i][j]=100;
				}
				if(i!=5){
					if(A[i+1][j]==100 && A[i][j]==t)
					A[i][j]=100;
				}	
			}
		}
	}
	int d=0;
	for(i=0; i<6; i++){
		for(j=0; j<5; j++){
			if(A[i][j]==100){
				pos[i][j]=0;
				A[i][j]=0;
				d++;
			}
		}
	}
	if(d==0)
		return 0;
	return d;
}

int fall(){
	int ypos[6];
	int j,t,u=0,zeromax=0;
    do{
		for(int i=0; i<6; i++){
			for(j=0,t=0,ypos[i]=0; j<5; j++){
				if(pos[i][j]==0){
					ypos[i]=j+1;
					t++;
				}
			}
		  	if(t>zeromax)
		  		zeromax=t;    
        }
        if(zeromax==0)
            return 0;
        for(int i=0; i<6; i++){
		    for(int j=ypos[i]-1; j>0; j--)
        		pos[i][j]=pos[i][j-1];
            if(ypos[i]!=0)	
			    pos[i][0]=rand()%5+1;
        }
        show2();	
        Sleep(150);
        u++;
    }while(u<zeromax);
	show2();
	Sleep(200);
	return 1;
}

int fall2(){
	int xpos[5];
	int i,j,t,u=0,zeromax=0;
    do{
		for(j=0; j<5; j++){
			for(i=0,t=0,xpos[j]=0; i<6; i++){
				if(pos[i][j]==0){
					xpos[j]=i+1;
					t++;
				}
			}
		  	if(t>zeromax)
		  		zeromax=t;    
        }
        if(zeromax==0)
            return 0;
        for(j=0; j<5; j++){
		    for(int i=xpos[j]-1; i>0; i--)
        		pos[i][j]=pos[i-1][j];
            if(xpos[j]!=0)	
			    pos[0][j]=rand()%5+1;
        }
        show2();	
        Sleep(150);
        u++;
    }while(u<zeromax);
	show2();
	Sleep(200);
	return 1;
}

int fall3(){
	int ypos[6];
	int j,t,u=0,k=0,zeromax=0;
    do{
		for(int i=0; i<6; i++){
			for(j=0,t=0,ypos[i]=0; j<5; j++){
				if(pos[i][j]==0){
					ypos[i]=j+1;
					t++;
				}
			}
		  	if(t>zeromax)
		  		zeromax=t;    
        }
        if(zeromax==0)
            return 0;
        for(int i=0; i<6; i++){
		    for(int j=ypos[i]-1; j>0; j--)
        		pos[i][j]=pos[i][j-1];
            if(ypos[i]!=0){	
			    pos[i][0]=rand()%6+1;
			    if(pos[i][0]==6)
                    k++;
                if(k>3)
                    pos[i][0]=rand()%5+1;
            }
        }
        show2();	
        Sleep(150);
        u++;
    }while(u<zeromax);
	show2();
	Sleep(200);
	return 1;
}

int reset(){
    FILE* rankw;
    int i;
    rankw=fopen("rank.txt","w");
    for(i=0;i<10;i++){
        fprintf(rankw,"0 ");
    }
    for(i=0;i<10;i++){
        fprintf(rankw,"\nAAA");
    }
    fclose(rankw);
}

int rank(){
    int best[10];
    int i;
    char topname[10][20];
    FILE* rankr;
    
    rankr=fopen("rank.txt","r");
    for(i=0;i<10;i++){
        fscanf(rankr,"%d", &best[i]);
    }
    for(i=0;i<10;i++){
        fscanf(rankr,"%s", &topname[i]);
    }
    fclose(rankr);
    system("cls");
    Color(cfd, 7);
    printf("\t什麼排行榜\n"); 
    for(i=0;i<10;i++){
        printf("%d.\t%s\t\t\t\t\t%d\n",i+1,topname[i],best[i]);
    }
    printf("\n\n<<按任意鍵回到首頁>>\n\n按R可重設排行榜"); 
    if(getch()==114)
        reset();
    return 0;   
}


int scorecount(){
    int best[10];
    int i,j,k;
    char topname[10][20];
    FILE* rankr;
    FILE* rankw;
    
    rankr=fopen("rank.txt","r");
    for(i=0;i<10;i++){
        fscanf(rankr,"%d", &best[i]);
    }
    for(i=0;i<10;i++){
        fscanf(rankr,"%s", &topname[i]);
    }
    fclose(rankr);
    for(i=0;i<10;i++){
        if(score>best[i]){
            for(j=9;j>i;j--){
                best[j]=best[j-1];
                for(k=0;k<20;k++)
                topname[j][k]=topname[j-1][k];
            }
            best[i]=score;
            system("cls");
            Color(cfd, 7);
            printf("\n\n\n\t\t恭喜進入排行榜\n\n\t請輸入大名：");
            scanf("%s",&topname[i]);
            break;
        }
    }
    rankw=fopen("rank.txt","w");
    for(i=0;i<10;i++){
        fprintf(rankw,"%d ", best[i]);
    }
    for(i=0;i<10;i++){
        fprintf(rankw,"\n%s", topname[i]);
    }
    fclose(rankw);
}

int win(){
    system("cls");
    printf("\n\n\tVICTORY!!!");
    Sleep(3000);
    return 0;
}
int stage1(){
    int enter,totalcombo=0,round=0;
    
    system("cls");
    printf("\n\n\n\tSTAGE 1");
    Sleep(2000);
    printf("\n\t<<< 5回合內 累計 15combo >>>\n");
    system("PAUSE");
    for(int i=0; i<6; i++){
		for(int j=0; j<5; j++)
			pos[i][j]=rand()%5+1;
			
	}
	while(1){
		    while(1){
			   if(erase()==0)
				   break;  
		    }
		    if(fall()==0)
		        break;
        }
    show();
    printf("第%d回合",round+1);
	while(round<5){
		if(kbhit()!=0){
            
			enter=getch();
			if(enter==224){
				enter=getch();
				if(enter==72){		//上 
					if(y!=0){
						mark[x][y]=0;
						y--;
						mark[x][y]=1;
						show();
					}
				}
				if(enter==75){		//左
					if(x!=0){
						mark[x][y]=0;
						x--;
						mark[x][y]=1;
						show();
					}
				}
				if(enter==77){		//右
					if(x!=5){
						mark[x][y]=0;
						x++;
						mark[x][y]=1;
						show();
					}
				}
				if(enter==80){		//下 
					if(y!=4){
						mark[x][y]=0;
						y++;
						mark[x][y]=1;
						show();
					}
				}
			}
            if(enter==13){
                round++;
                moving();
		        while(1){
		            while(1){
			            if(erase()==0)
				            break;
				        combo++;
				        totalcombo++; 
				        show2();
				        Sleep(500);  
		            }
		            if(fall()==0)
		                break;
			        show2();
                }
                show();
                combo=0;
                printf("累計combo：%d\n",totalcombo);
                Sleep(1000);
                if(round<5)
                    printf("第%d回合\n",round+1);
                system("PAUSE");
            }
        }
    }
    score=score+totalcombo;
    system("cls");
    printf("\n\n\n累計combo：%d",totalcombo);
    if(totalcombo>=15){
        printf("\nSTAGE CLEAR");
        Sleep(2000);
        score=score+3;
        return 1;
    }
    else{
        printf("\nGAME OVERRRRRRRR");
        Sleep(2000);
        return 0;
    }
}

int stage2(){
    int enter,totalcombo=0,round=0;
    
    system("cls");
    printf("\n\n\n\tSTAGE 2");
    Sleep(2000);
    printf("\n\t<<< 3回合內 累計 15 combo >>>\n");
    system("PAUSE");
    for(int i=0; i<6; i++){
		for(int j=0; j<5; j++)
			pos[i][j]=rand()%5+1;
			
	}
	while(1){
		    while(1){
			   if(erase()==0)
				   break;  
		    }
		    if(fall()==0)
		        break;
        }
    show(); 
    printf("第%d回合",round+1);
	while(round<3){
		if(kbhit()!=0){
			enter=getch();
			if(enter==224){
				enter=getch();
				if(enter==72){		//上 
					if(y!=0){
						mark[x][y]=0;
						y--;
						mark[x][y]=1;
						show();
					}
				}
				if(enter==75){		//左
					if(x!=0){
						mark[x][y]=0;
						x--;
						mark[x][y]=1;
						show();
					}
				}
				if(enter==77){		//右
					if(x!=5){
						mark[x][y]=0;
						x++;
						mark[x][y]=1;
						show();
					}
				}
				if(enter==80){		//下 
					if(y!=4){
						mark[x][y]=0;
						y++;
						mark[x][y]=1;
						show();
					}
				}
			}
            if(enter==13){
                round++;
                moving();
		        while(1){
		            while(1){
			            if(erase()==0)
				            break;
				        combo++;
				        totalcombo++; 
				        show2();
				        Sleep(500);  
		            }
		            if(fall()==0)
		                break;
			        show2();
                }
                show();
                combo=0;
                printf("累計combo：%d\n",totalcombo);
                Sleep(1000);
                if(round<3)
                    printf("第%d回合\n",round+1);
                system("PAUSE");
            }
        }
    }
    score=score+totalcombo;
    system("cls");
    printf("\n\n\n累計combo：%d",totalcombo);
    if(totalcombo>=15){
        printf("\nSTAGE CLEAR");
        Sleep(2000);
        score=score+5;
        return 1;
    }
    else{
        printf("\nGAME OVERRRRRRRR");
        Sleep(2000);
        return 0;
    }
}

int stage3(){
    int enter,totalcombo=0,round=0;
    int d=0,c=0;
    
    system("cls");
    printf("\n\n\n\tSTAGE 3");
    Sleep(2000);
    printf("\n\t<<< 3回合內 累計消除 50顆珠 >>>\n");
    system("PAUSE");
    for(int i=0; i<6; i++){
		for(int j=0; j<5; j++)
			pos[i][j]=rand()%5+1;
			
	}
	while(1){
		    while(1){
			   if(erase()==0)
				   break;  
		    }
		    if(fall()==0)
		        break;
        }
    show(); 
    printf("第%d回合",round+1);
	while(round<3){
		if(kbhit()!=0){
			enter=getch();
			if(enter==224){
				enter=getch();
				if(enter==72){		//上 
					if(y!=0){
						mark[x][y]=0;
						y--;
						mark[x][y]=1;
						show();
					}
				}
				if(enter==75){		//左
					if(x!=0){
						mark[x][y]=0;
						x--;
						mark[x][y]=1;
						show();
					}
				}
				if(enter==77){		//右
					if(x!=5){
						mark[x][y]=0;
						x++;
						mark[x][y]=1;
						show();
					}
				}
				if(enter==80){		//下 
					if(y!=4){
						mark[x][y]=0;
						y++;
						mark[x][y]=1;
						show();
					}
				}
			}
            if(enter==13){
                round++;
                moving();
		        while(1){
		            while(1){
                        c=erase();
                        d=d+c;
			            if(c==0)
				            break;
				        combo++;
				        totalcombo++; 
				        show2();
				        Sleep(500);  
		            }
		            if(fall()==0)
		                break;
			        show2();
                }
                show();
                combo=0;
                printf("累計消除：%d顆珠\n",d);
                Sleep(1000);
                if(round<3)
                    printf("第%d回合\n",round+1);
                system("PAUSE");
            }
        }
    }
    score=score+totalcombo;
    system("cls");
    printf("\n\n\n累計消除：%d顆珠",d);
    if(d>=50){
        printf("\nSTAGE CLEAR");
        Sleep(2000);
        score=score+7;
        return 1;
    }
    else{
        printf("\nGAME OVERRRRRRRR");
        Sleep(2000);
        return 0;
    }
}

int stage4(){
    int enter,totalcombo=0,round=0;
    
    system("cls");
    printf("\n\n\n\tSTAGE 4");
    Sleep(2000);
    printf("\n\t<<< 3回合內 累計 15combo >>>\n");
    system("PAUSE");
    for(int i=0; i<6; i++){
		for(int j=0; j<5; j++)
			pos[i][j]=rand()%5+1;
			
	}
	while(1){
		    while(1){
			   if(erase()==0)
				   break;  
		    }
		    if(fall()==0)
		        break;
        }
    show(); 
    printf("第%d回合",round+1);
	while(round<3){
		if(kbhit()!=0){
			enter=getch();
			if(enter==224){
				enter=getch();
				if(enter==72){		//上 
					if(y!=0){
						mark[x][y]=0;
						y--;
						mark[x][y]=1;
						show();
					}
				}
				if(enter==75){		//左
					if(x!=0){
						mark[x][y]=0;
						x--;
						mark[x][y]=1;
						show();
					}
				}
				if(enter==77){		//右
					if(x!=5){
						mark[x][y]=0;
						x++;
						mark[x][y]=1;
						show();
					}
				}
				if(enter==80){		//下 
					if(y!=4){
						mark[x][y]=0;
						y++;
						mark[x][y]=1;
						show();
					}
				}
			}
            if(enter==13){
                round++;
                moving();
		        while(1){
		            while(1){
			            if(erase()==0)
				            break;
				        combo++;
				        totalcombo++; 
				        show2();
				        Sleep(500);  
		            }
		            if(fall2()==0)
		                break;
			        show2();
                }
                show();
                combo=0;
                printf("累計combo：%d\n",totalcombo);
                Sleep(1000);
                if(round<3)
                    printf("第%d回合\n",round+1);
                system("PAUSE");
            }
        }
    }
    score=score+totalcombo;
    system("cls");
    printf("\n\n\n累計combo：%d",totalcombo);
    if(totalcombo>=15){
        printf("\nSTAGE CLEAR");
        Sleep(2000);
        score=score+8;
        return 1;
    }
    else{
        printf("\nGAME OVERRRRRRRR");
        Sleep(2000);
        return 0;
    }
}


int stage5(){
    int enter,totalcombo=0,round=0,k=0;
    
    system("cls");
    printf("\n\n\n\tSTAGE 5");
    Sleep(2000);
    printf("\n\t<<< 3回合內 累計 15combo >>>\n");
    system("PAUSE");
    for(int i=0; i<6; i++){
		for(int j=0; j<5; j++){
			pos[i][j]=rand()%6+1;
			if(pos[i][j]==6)
                k++;
            if(k>3)
                pos[i][j]=rand()%5+1;
        }
	}
	while(1){
		    while(1){
			   if(erase()==0)
				   break;  
		    }
		    if(fall()==0)
		        break;
        }
    show(); 
    printf("第%d回合",round+1);
	while(round<3){
		if(kbhit()!=0){
			enter=getch();
			if(enter==224){
				enter=getch();
				if(enter==72){		//上 
					if(y!=0 && pos[x][y-1]!=6){
						mark[x][y]=0;
						y--;
						mark[x][y]=1;
						show();
					}
				}
				if(enter==75 && pos[x-1][y]!=6){		//左
					if(x!=0){
						mark[x][y]=0;
						x--;
						mark[x][y]=1;
						show();
					}
				}
				if(enter==77 && pos[x+1][y]!=6){		//右
					if(x!=5){
						mark[x][y]=0;
						x++;
						mark[x][y]=1;
						show();
					}
				}
				if(enter==80 && pos[x][y+1]!=6){		//下 
					if(y!=4){
						mark[x][y]=0;
						y++;
						mark[x][y]=1;
						show();
					}
				}
			}
            if(enter==13){
                round++;
                moving();
		        while(1){
		            while(1){
			            if(erase()==0)
				            break;
				        combo++;
				        totalcombo++; 
				        show2();
				        Sleep(500);  
		            }
		            if(fall3()==0)
		                break;
			        show2();
                }
                show();
                combo=0;
                printf("累計combo：%d\n",totalcombo);
                Sleep(1000);
                if(round<3)
                    printf("第%d回合\n",round+1);
                system("PAUSE");
            }
        }
    }
    score=score+totalcombo;
    system("cls");
    printf("\n\n\n累計combo：%d",totalcombo);
    if(totalcombo>=15){
        printf("\nSTAGE CLEAR");
        Sleep(2000);
        score=score+12;
        return 1;
    }
    else{
        printf("\nGAME OVERRRRRRRR");
        Sleep(2000);
        return 0;
    }
}

int stage6(){
    int enter,totalcombo=0,round=0;
    
    system("cls");
    printf("\n\n\n\tSTAGE 6");
    Sleep(2000);
    printf("\n\t<<< 3回合內 累計 15combo >>>\n");
    system("PAUSE");
    for(int i=0; i<6; i++){
		for(int j=0; j<5; j++)
			pos[i][j]=rand()%5+1;
			
	}
	while(1){
		    while(1){
			   if(erase()==0)
				   break;  
		    }
		    if(fall()==0)
		        break;
        }
    show();
    printf("第%d回合",round+1);
	while(round<3){
		if(kbhit()!=0){
			enter=getch();
			if(enter==224){
				enter=getch();
				if(enter==80){		//上 
					if(y!=0){
						mark[x][y]=0;
						y--;
						mark[x][y]=1;
						show();
					}
				}
				if(enter==77){		//左
					if(x!=0){
						mark[x][y]=0;
						x--;
						mark[x][y]=1;
						show();
					}
				}
				if(enter==75){		//右
					if(x!=5){
						mark[x][y]=0;
						x++;
						mark[x][y]=1;
						show();
					}
				}
				if(enter==72){		//下 
					if(y!=4){
						mark[x][y]=0;
						y++;
						mark[x][y]=1;
						show();
					}
				}
			}
            if(enter==13){
                round++;
                moving2();
		        while(1){
		            while(1){
			            if(erase()==0)
				            break;
				        combo++;
				        totalcombo++; 
				        show2();
				        Sleep(500);  
		            }
		            if(fall()==0)
		                break;
			        show2();
                }
                show();
                combo=0;
                printf("累計combo：%d\n",totalcombo);
                Sleep(1000);
                if(round<3)
                    printf("第%d回合\n",round+1);
                system("PAUSE");
            }
        }
    }
    score=score+totalcombo;
    system("cls");
    printf("\n\n\n累計combo：%d",totalcombo);
    if(totalcombo>=15){
        printf("\nSTAGE CLEAR");
        Sleep(2000);
        score=score+20;
        return 1;
    }
    else{
        printf("\nGAME OVERRRRRRRR");
        Sleep(2000);
        return 0;
    }
}

int main(){
	srand(time(NULL));
	int enter;
	home();
	mark[0][0]=1;
	while(1){
        if(kbhit()!=0){
            enter=getch();
            if(enter==49)
                stage1();
            if(enter==50)
                stage2();
            if(enter==51)
                stage3();
            if(enter==52)
                stage4();
            if(enter==53)
                stage5();
            if(enter==54)
                stage6();
            if(enter==224){
				enter=getch();
				if(enter==72){	//上 
                    if(homer!=0){
                	    homer--;
                    	home();
                	}
                }
				if(enter==80){	//下 
                    if(homer!=2){
            	        homer++;
                	    home();
            		}
				}
            }
            if(enter==13){
                mark[0][0]=1;		//按enter 
                if(homer==0)
                	break;
                if(homer==1){
                	rank();
                	home();
                }
                if(homer==2)
                	exit(1);
            }
        }
    }
    /*規則說明*/
	//按enter 
	score=0;
	if(stage1()==1){
        if(stage2()==1){
            if(stage3()==1){
                if(stage4()==1){
                    if(stage5()==1){
                        if(stage6()==1){
                        win();
                        }
                    }
                }
            }
        }
    }
    scorecount();
	rank();
    main();
	return 0;
}
