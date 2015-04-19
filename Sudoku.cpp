#include"Sudoku.h"
int Sudoku::GiveQuestion()
{
srand((unsigned int)(time(NULL)));
int nn=rand()%2+1;
int n=rand()%4+1;
int i=0;
int j=0;
int o=0;
int p=0;
int question[12][12]=
{
{4 ,2 ,6 ,8 ,7 ,3 ,9 ,5 ,1 ,-1,-1,-1},
{0 ,0 ,3 ,9 ,5 ,0 ,6 ,0 ,4 ,-1,-1,-1},
{9 ,0 ,1 ,6 ,2 ,4 ,8 ,0 ,0 ,-1,-1,-1},
{-1,-1,-1,1 ,3 ,2 ,0 ,8 ,7 ,9 ,5 ,6},
{-1,-1,-1,0 ,8 ,0 ,1 ,9 ,0 ,4 ,2 ,0},
{-1,-1,-1,4 ,9 ,6 ,2 ,3 ,0 ,8 ,7 ,1},
{1 ,0 ,0 ,0 ,4 ,0 ,-1,-1,-1,6 ,9 ,5},
{0 ,0 ,4 ,0 ,6 ,0 ,-1,-1,-1,1 ,3 ,7},
{6 ,9 ,5 ,0 ,1 ,7 ,-1,-1,-1,2 ,8 ,4},
{3 ,1 ,2 ,-1,-1,-1,7 ,4 ,0 ,5 ,0 ,9},
{7 ,4 ,8 ,-1,-1,-1,0 ,6 ,9 ,3 ,0 ,2},
{0 ,6 ,0 ,-1,-1,-1,3 ,1 ,0 ,7 ,0 ,8}
};
int question2[12][12]=
{
{0 ,0 ,0 ,6 ,0 ,2 ,9 ,0 ,7 ,-1,-1,-1},
{9 ,0 ,7 ,3 ,1 ,0 ,0 ,8 ,2 ,-1,-1,-1},
{6 ,8 ,0 ,0 ,5 ,0 ,0 ,0 ,4 ,-1,-1,-1},
{4 ,3 ,0 ,0 ,6 ,8 ,-1,-1,-1,0 ,0 ,0},
{0 ,9 ,5 ,4 ,0 ,1 ,-1,-1,-1,2 ,6 ,0},
{0 ,0 ,8 ,7 ,9 ,0 ,-1,-1,-1,0 ,3 ,1},
{1 ,4 ,0 ,-1,-1,-1,8 ,0 ,6 ,0 ,0 ,9},
{5 ,7 ,0 ,-1,-1,-1,0 ,0 ,3 ,8 ,0 ,0},
{0 ,2 ,6 ,-1,-1,-1,5 ,7 ,0 ,3 ,0 ,4},
{-1,-1,-1,0 ,0 ,0 ,0 ,3 ,1 ,0 ,5 ,7},
{-1,-1,-1,0 ,4 ,3 ,0 ,9 ,0 ,0 ,8 ,2},
{-1,-1,-1,5 ,7 ,9 ,2 ,6 ,0 ,1 ,4 ,0}
};
int r[12][12];
for(i=0;i<12;i++)
        {
        for(j=0;j<12;j++)
                {
                 r[11-j][i]=question2[i][j];

                }
        }
int t[12][12];
for(i=0;i<12;i++)
        {
        for(j=0;j<12;j++)
                {
                 t[11-j][i]=r[i][j];

                }
        }
int y[12][12];
for(i=0;i<12;i++)
        {
        for(j=0;j<12;j++)
                {
                 y[11-j][i]=t[i][j];

                }
        }
int q[12][12];
for(i=0;i<12;i++)
        {
        for(j=0;j<12;j++)
                {
                 q[11-j][i]=question[i][j];

                }
        }
int w[12][12];
for(i=0;i<12;i++)
        {
        for(j=0;j<12;j++)
                {
                 w[11-j][i]=q[i][j];

                }
        }
int e[12][12];
for(i=0;i<12;i++)
        {
        for(j=0;j<12;j++)
                {
                 e[11-j][i]=w[i][j];

                }
	}
if(nn==1)
{
	if(n==1)
	{
		for(o=0;o<12;o++)
		{
			for(p=0;p<12;p++)
			{
			cout<<q[o][p]<<" ";
			}
		cout<<endl;
		}		
	}
	else if(n==2)
	{
		for(o=0;o<12;o++)
		{
			for(p=0;p<12;p++)
			{
			cout<<w[o][p]<<" ";
			}
		cout<<endl;
		}
	}
	else if(n==3)
	{
		for(o=0;o<12;o++)
		{
			for(p=0;p<12;p++)
			{	
			cout<<e[o][p]<<" ";
			}
		cout<<endl;
		}
	}
	else if(n==4)
	{
		for(o=0;o<12;o++)
		{
			for(p=0;p<12;p++)
			{
			cout<<question[o][p]<<" ";
			}
		cout<<endl;
		}		
	}
}
//n=1以上
//n=2以下
if(nn==2)
{
        if(n==1)
        {
                for(o=0;o<12;o++)
                {
                        for(p=0;p<12;p++)
                        {
                        cout<<r[o][p]<<" ";
                        }
                cout<<endl;
                }
        }
        else if(n==2)
        {
                for(o=0;o<12;o++)
                {
                        for(p=0;p<12;p++)
                        {
                        cout<<t[o][p]<<" ";
                        }
                cout<<endl;
                }
        }
        else if(n==3)
        {
                for(o=0;o<12;o++)
                {
                        for(p=0;p<12;p++)
                        {
                        cout<<y[o][p]<<" ";
                        }
                cout<<endl;
                }
        }

        else if(n==4)
        {
                for(o=0;o<12;o++)
                {
                        for(p=0;p<12;p++)
                        {
                        cout<<question2[o][p]<<" ";
                        }
                cout<<endl;
                }
        }
}

}


int Sudoku::ReadIn()
{
int i,j;
int array[12][12];
cout<<"請一列一列的將題目輸入，每個數以空白鍵隔開，空格以0表示，一列輸入完，直接接著輸入下一列，"<<endl<<"ex:0 4 2 7.........，輸入完成請按Enter鍵:"<<endl;
for(i=0;i<12;i++)
{
for(j=0;j<12;j++)
{
cin>>array[i][j];
}
}
for(i=0;i<12;i++)
{
for(j=0;j<12;j++)
{
//cout<<array[i][j]<<" ";
solve[i][j]=array[i][j];
}

cout<<endl;
}
}


int Sudoku::Solve()
{
/*已知答案*/
	int     a2D[12][12][1];
        int     a3D[12][12][10]={0};/*可能答案*/
	int     a1Dr[9]={0};
	int	a1Dl[9]={0};
        int i,j  ,k,l,m  ,n,p,q  ,known,times,sum=0,negative=0,noanswer=0,sure=0,many=0,judge=0,zero=0;
        /*把1到9的數字填滿於可能的答案中 之後再把不可能的一一刪去(填0)*/
for(i=0;i<12;i++)
{
  for(j=0;j<12;j++)
  {	
	 a2D[i][j][0]=solve[i][j];
  }
}       

	 for(k=0;k<=11;k++)
        {
                for(l=0;l<=11;l++)
                {
                        for(m=0;m<=8;m++)
                        {
                        a3D[k][l][m]=m+1;
                        }
                }
        }
        for(k=0;k<=11;k++)
        {
                for(l=0;l<=11;l++)
                {

                   if(a2D[k][l][0]==(-1))
                   {	
                        for(m=0;m<9;m++)
                        {
                        a3D[k][l][m]=0;
                        }
                        a3D[k][l][9]=(-1);
                   }
                }
        }
//判斷無解
//找出所有的-1


 for(i=0;i<12;i++)
{
	for(j=0;j<12;j++)
	{
		if(a2D[i][j][0]==(-1))
		{
		negative++;
		}	
	}
}
if(negative!=36)
{
	printf("0\n");
	sum=504;
	judge=2;
}
else if(negative==36)
{
	for(k=0;k<12;k++)
	{
		noanswer=0;
			for(l=0;l<12;l++)
			{	
			if(a2D[k][l][0]==(-1))
			{noanswer++;}
			}	

		if(noanswer!=3)
		{
		 sure=1;
		}
	}
	if(sure!=1)
	{
		for(l=0;l<12;l++)
		{	noanswer=0;
			for(k=0;k<12;k++)
			{
				if(a2D[k][l][0]==(-1))
				{
				noanswer++;
				}
			}
		}
		if(noanswer!=3)
		{
		sure=1;
		}
	}
	
	if(sure==1)
	{
	cout<<"0"<<endl;
	sum=504;
	judge=2;
	}
}
int pp=0;
int ppp=0;
if(sure!=1)
{
for(k=0;k<12;k++)
{
	for(l=0;l<12;l++)
	{
		
		if(a2D[k][l][0]!=0 && a2D[k][l][0]!=(-1))
		{
		a1Dr[a2D[k][l][0]-1]++;
		}
	}

	pp=0;
	for(m=0;m<9;m++)
	{
		if(a1Dr[m]==0 || a1Dr[m]==1)
		{pp++;}
	}
        for(m=0;m<9;m++)
        {
        a1Dr[m]=0;
        }

	if(pp!=9)
	{sum=504;sure=1;}
}
if(sure!=1)
{
	pp=0;
	for(l=0;l<12;l++)
	{
        	for(k=0;k<12;k++)
        	{	
				
                	if(a2D[k][l][0]!=0 && a2D[k][l][0]!=(-1))
                	{
                	a1Dl[a2D[k][l][0]-1]++;
                	}
        	}
		pp=0;
		for(m=0;m<9;m++)
        	{
                if(a1Dl[m]==0 || a1Dl[m]==1)
                {pp++;}
        	}
      		for(m=0;m<9;m++)
        	{
        	a1Dl[m]=0;
        	}

        	if(pp!=9)
        	{sum=504;sure=1;}
	}

}
	if(sure==1)
	{
	cout<<"0"<<endl;
	sum=504;
	judge=2;
	}
}      
 /*當9*9宮格中的數加起來不等於504 即表示有空格為0 繼續跑下一輪*/
int ro=0,cl=0;
        while(sum!=504)
        {
//cout<<"aaa"<<endl;
        for(k=0;k<=11;k++)
        {
                for(l=0;l<=11;l++)
                {

                  if(a2D[k][l][0]!=0 && a2D[k][l][0]!=(-1))

                   {
                        known=a2D[k][l][0];
                        for(p=0;p<12;p++)//將同列的消除
                        {//1
                         a3D[k][p][known-1]=0;
                        }//1
                        for(q=0;q<12;q++)//將同行的消除
                        {//2
                         a3D[q][l][known-1]=0;
                        }//2

			ro=(k/3);
			cl=(l/3);
			int xx=0,yy=0,zz=0,ww=0;
			xx=ro*3;yy=cl*3;zz=ro*3+3;ww=cl*3+3;
			for(xx=ro*3;xx<zz;xx++)
                                        {//4for
                                                for(yy=cl*3;yy<ww;yy++)
                                                {//5for
                                                        a3D[xx][yy][known-1]=0;
                                                }//5for
                                        }//4for

                        a3D[k][l][known-1]=known;

                        }//1 if 有非0答案 

                }
        }
	for(k=0;k<=11;k++)
        {
                for(l=0;l<=11;l++)
                {
                if(a2D[k][l][0]!=0 && a2D[k][l][0]!=(-1))
                      {  for(m=0;m<=9;m++)
                        {
                        a3D[k][l][m]=0;
                        }
                        a3D[k][l][a2D[k][l][0]-1]=a2D[k][l][0];
                      }
                }
        }

many=0;
        /*判斷是否有唯一解*/
        for(k=0;k<=11;k++)
        {//1層for
                for(l=0;l<=11;l++)
                {//2層for
                        times=0;
                        for(m=0;m<=9;m++)
                        {//3層for
//			printf("%d ",a3D[k][l][m]);
                                /*累計不為0的數字個數 */
                                if(a3D[k][l][m]!=0)
                                {
                                    times+=1;
                                }
                        }//3層for
                        /*若偵測到不為0的數字只有一個 即表示答案已唯一*/
                        if(times==1)
                                {
				 	many++;//計算只剩唯一可能的是否=140
                                        for(m=0;m<=9;m++)
                                        {
                                                /*判斷此答案的值*/
                                                if(a3D[k][l][m]!=0)
                                                {
                                                        a2D[k][l][0]=a3D[k][l][m];
                                                }
                                        }
                                }
//		cout<<endl;
                }//2層for
//printf("%d %d",k,l);
//cout<<endl;
//cout<<endl;

        }//1層for

int aaa=0;
int bbb=0;
int row[4];
int column[4];
int r=0,s=0;
judge=0;
int sq[4];
	if(many==140)//判斷多組解
	{//if0
//	cout<<"b";
		for(k=0;k<11;k++)
		{//1for
			for(l=0;l<11;l++)
			{//2for
//			 cout<<"c";
			 aaa=0;
				for(m=0;m<=9;m++)
				{//3for
				
                                if(a3D[k][l][m]!=0)
                                {//if1
                                 aaa++;
                                }//if1

				}//3for
			 if(aaa==2)
			 {//if2
			  bbb++;
			  row[r]=k;
			  column[s]=l;
			  r++;
			  s++;
			 }//if2
			}//2for
		}//1for
		
		if(bbb==4)
		{//if3	
//			cout<<"fuck";
			if(row[0]==row[1]&&row[2]==row[3])//判斷是否同列
			{judge=1;}	
			else
			{judge=0;}
			

			if(judge==1)//判斷是否同列
			{
				if(column[0]==column[2] && column[3]==column[1])
				{
					judge=1;
				}
				else{judge=0;}
			}
			
		if(judge==1)//判斷是否同九宮格
		{//判斷九宮格if
			k=0;
			l=0;
		 for(r=0;r<4;r++)
		 {//1for
//			cout<<"d";
			k=row[r];
			l=column[r];		
                        if(k>=0 && k<=2 && l>=0 &&l<=2)
                        {//2 if判斷是否屬於第1九宮格
                         sq[r]=1;               
                        }//2 if判斷是否屬於第1九宮格
                        if(k>=0 && k<=2 && l>=3 &&l<=5)
                        {//2 if判斷是否屬於第2九宮格        
                         sq[r]=2;                                                                                                                            }//2 if判斷是否屬於第2九宮格
                        if(k>=0 && k<=2 && l>=6 &&l<=8)
                        {//2 if判斷是否屬於第3九宮格
                         sq[r]=3;                                                                                                                               
                        }//2 if判斷是否屬於第3九宮格
                        if(k>=0 && k<=2 && l>=9 &&l<=11)
                        {//2 if判斷是否屬於第4九宮格
                         sq[r]=4;
                        }//2 if判斷是否屬於第4九宮格
                                if(k>=3 && k<=5 && l>=0 &&l<=2)
                                {//2 if判斷是否屬於第5九宮格
                                 sq[r]=5;
                                }//2 if判斷是否屬於第5九宮格
                                if(k>=3 && k<=5 && l>=3 &&l<=5)
                                {//2 if判斷是否屬於第6九宮格
                                 sq[r]=6;                                                                                   
                                }//2 if判斷是否屬於第6九宮格

                                if(k>=3 && k<=5 && l>=6 &&l<=8)
                                {//2 if判斷是否屬於第7九宮格
                                 sq[r]=7;       
                                }//2 if判斷是否屬於第7九宮格

                                if(k>=3 && k<=5 && l>=9 &&l<=11)
                                {//2 if判斷是否屬於第8九宮格
				 sq[r]=8;	                                       
                                }//2 if判斷是否屬於第8九宮格
                                if(k>=6 && k<=8 && l>=0 &&l<=2)
                                {//2 if判斷是否屬於第9九宮格
                                 sq[r]=9;      
                                }//2 if判斷是否屬於第9九宮格

                                if(k>=6 && k<=8 && l>=3 &&l<=5)
                                {//2 if判斷是否屬於第10九宮格                                                                                     		      
                                 sq[r]=10;
                                }//2 if判斷是否屬於第10九宮格

                                if(k>=6 && k<=8 && l>=6 &&l<=8)
                                {//2 if判斷是否屬於第11九宮格
				sq[r]=11;
                                }//2 if判斷是否屬於第11九宮格
                                if(k>=6 && k<=8 && l>=9 &&l<=11)
                                {//2 if判斷是否屬於第12九宮格
                                sq[r]=12;
                                }//2 if判斷是否屬於第12九宮格

                                if(k>=9 && k<=11 && l>=0 &&l<=2)
                                {//2 if判斷是否屬於第13九宮格
                                sq[r]=13;
                                }//2 if判斷是否屬於第13九宮格

                                if(k>=9 && k<=11 && l>=3 &&l<=5)
                                {//2 if判斷是否屬於第14九宮格                                                           
				sq[r]=14;
                                }//2 if判斷是否屬於第14九宮格
                                if(k>=9 && k<=11 && l>=6 &&l<=8)
                                {//2 if判斷是否屬於第15九宮格
                      		sq[r]=15;
                                }//2 if判斷是否屬於第15九宮格

                                if(k>=9 && k<=11 && l>=9 &&l<=11)
                                {//2 if判斷是否屬於第16九宮格                                                                          	
				sq[r]=16;
                                }//2 if判斷是否屬於第16九宮格
		 }//1for
			if(sq[0]==sq[1] && sq[2]==sq[3])
			{judge=1;}
			else if(sq[0]==sq[2] && sq[1]==sq[3])
			{judge=1;}
			else{judge=0;}
		}//判斷九宮格if
		
		
		
		
		
		}//if3
	}//if0
	
                sum=0;
		if(judge==1)
		{sum=504;}
		else
		{
                for(k=0;k<=11;k++)
                {
                    for(l=0;l<=11;l++)
                        {
                            sum+=a2D[k][l][0];
                        }
                }
//      }	
		}

       }
if(judge==1)
{
	cout<<"2"<<endl;
}
else if(judge==0)
{
	printf("1\n");
	for(i=0;i<12;i++)
	{
	 for(j=0;j<12;j++)
	 {
 	 printf("%-2d ",a2D[i][j][0]);
 	 }
	printf("\n");
	}
}

}
