#include<iostream>
#include<string>
using namespace std;
class teamsandtoss
{
		
	protected:
		int toss,input;
		string teamnames[2];
	public:
		void Welcome()
		{
			cout<<"WELCOME TO CRICKIT SCOREBOARD"<<endl;
			cout<<"-----------INSTRUCTIONS-----"<<endl;
			cout<<"-------MAKE TWO TEAMS-------"<<endl;
			cout<<"------5 PLAYERS FOR BOTH TEAMS--"<<endl;
			cout<<"------3 OVERS GAME-----------"<<endl;	
		}
		int getinfo()
		{
			int tossinfo;
			for(int i = 0;i<2;i++)
			{
			cout<<"Enter Name of Team : "<<i+1<<endl;
			cin>>teamnames[i];
			}
			cout<<"Which team won toss?"<<endl<<"1."<<teamnames[0]<<endl;
			cout<<"2."<<teamnames[1]<<endl;
			cin>>toss;
			if(toss==1)
			{
				cout<<teamnames[0]<<" decided to "<<endl<<"1. Bat "<<endl;
				cout<<"2. bowl"<<endl;
				cin>>input;
			}
			else if (toss=2)
			{
			cout<<teamnames[1]<<" decided to "<<endl<<"1. Bat "<<endl;
				cout<<"2. bowl"<<endl;
				cin>>input;	
			}
			else
			{cout<<"invalid input"<<endl;
			}
			if (toss==1 && input==1)
            {
            cout<<"TOSS= "<<teamnames[0]<<endl;
            cout<<"descion = BATTING "<<endl;
            tossinfo=1;
            }
            if (toss==1 && input==2)
            {
           cout<<"TOSS= "<<teamnames[0]<<endl;
            cout<<"Descion = BOWLING "<<endl; tossinfo=2;
            }
            if (toss==2 && input==1)
            {
            cout<<"TOSS= "<<teamnames[1]<<endl;
            cout<<"Descion = BATTING "<<endl; tossinfo=2;
            }
            if (toss==2 && input==2)
            {
           cout<<"TOSS= "<<teamnames[1]<<endl;
            cout<<"Descion = BOWLING "<<endl; tossinfo=1;
            }
            return tossinfo;
		}
		
};
class players: public teamsandtoss
{
	protected:
		string team1players[5];
		string team2players[5];
	public:
		void inplayersnames()
		{
				cout<<"Enter Players names of "<<teamnames[0]<<endl;
				for(int j=0;j<5;j++)
				{
					cout<<j+1<<". "<<endl;
					cin>>team1players[j];
				}
				cout<<"Enter Players names of "<<teamnames[1]<<endl;
				for(int j=0;j<5;j++)
				{
					cout<<j+1<<". "<<endl;
					cin>>team2players[j];
				}

			
		}
};
class scoring : public players
{

	
	protected:
		int bat1,bal1,scr;
		
		int bat0score=0; 
		int bpbat0=0;
		
		int bat1score=0;
		int bpbat1=0;
		
		int bat2score=0;
		int bpbat2=0;
		
		
		int bat3score=0;
		int bpbat3=0;
		
		int bat4score=0;
		int bpbat4=0;
		
		int teamscore=0;
		
		
		int bowling0runs=0;
		int bpbol0=0;
		
		int bowling1runs=0;
		int bpbol1=0;
		
		int bowling2runs=0;
		int bpbol2=0;
		
		int bowling3runs=0;
		int bpbol3=0;
		
		int bowling4runs=0;
		int bpbol4=0;
		
		float over=0;
		
		int wicketstaken=0;
		//////////////////////////////////////////////////////
		
			
		
		
		
	public:
		void summary(string batsmanname,  int batsmanscore, int batsmanballs,string bowlername, int bowlerruns, int ballbowled,string teamname, int teamscore,int wickets,double overs)
		{
			cout<<"------------------BATTING SUMMARY----------------------------"<<endl;
	    	cout<<batsmanname<<"  "<<batsmanscore<<"("<<batsmanballs<<")"<<endl;
	    	cout<<bowlername<<"  "<<bowlerruns<<"("<<ballbowled<<")"<<endl;
	    	cout<<"----------TEAM SCORE--------------------"<<endl;
	    	cout<<teamname<<"   "<<teamscore<<" - "<<wickets<<endl;
	    	cout<<"overs= "<<overs<<endl;
		}
	void batsmanstats1()
    {
    	cout<<"Which batsman is batting?"<<endl;
    	cout<<" 0.  "<<team1players[0];
    	cout<<" 1.  "<<team1players[1];
    	cout<<" 2.  "<<team1players[2];
    	cout<<" 3.  "<<team1players[3];
    	cout<<" 4.  "<<team1players[4]<<endl;
    	cin>>bat1;
    }
    void bowlerstats1()
    {
    	cout<<"Which bowler is bowling?"<<endl;
    	cout<<" 0.  "<<team2players[0];
    	cout<<" 1.  "<<team2players[1];
    	cout<<" 2.  "<<team2players[2];
    	cout<<" 3.  "<<team2players[3];
    	cout<<" 4.  "<<team2players[4]<<endl;
    	cin>>bal1;
    }
    void score()
    {
    	cout<<"Status"<<endl;
    	cout<<"1. 1 run"<<endl;
    	cout<<"2. 2 run"<<endl;
    	cout<<"3. 3 run"<<endl;
    	cout<<"4. 4 run"<<endl;
    	cout<<"5. 6 run"<<endl;
    	cout<<"6. out "<<endl;
    	cout<<"7. dot"<<endl;
    	cin>>scr;
	}
		
		void BFI()
		{
		
		
			while(over<3&&wicketstaken<4){
			
				over=(over+0.1);
				if(over>=0.6)
				{
					over=1;
				}
				else if(over>=1.6)
				{
					over=2;
				}
				else if(over>=2.6)
				{
				 over = 3;
				}
		batsmanstats1();
	    bowlerstats1();	
	    score();
	    
	    if (bat1==0&&bal1==0&&scr==1)
	    {
	    	bat0score=bat0score+1;
	    	bpbat0=bpbat0+1;
	    	bowling0runs=bowling0runs+1;
	    	bpbol0=bpbol0+1;
	    	teamscore=teamscore+1;
	    	wicketstaken= wicketstaken+0;
	    	summary(team1players[0], bat0score, bpbat0, team2players[0], bowling0runs, bpbol0, teamnames[0],teamscore,wicketstaken,over);
	    	
		}
		else if (bat1==1&&bal1==0&&scr==1)
		{
		  bat1score=bat1score+1;
	    	bpbat1=bpbat1+1;
	    	bowling0runs=bowling0runs+1;
	    	bpbol0=bpbol0+1;
	    	teamscore=teamscore+1;
	    	wicketstaken= wicketstaken+0;
	    	summary(team1players[1], bat1score, bpbat1, team2players[0], bowling0runs, bpbol0, teamnames[0],teamscore,wicketstaken ,over);
		}
		else if (bat1==2&&bal1==0&&scr==1)
		{
		   bat2score=bat2score+1;
	    	bpbat2=bpbat2+1;
	    	bowling0runs=bowling0runs+1;
	    	bpbol0=bpbol0+1;
	    	teamscore=teamscore+1;
	    	
	    	wicketstaken= wicketstaken+0;
	    	summary(team1players[2], bat2score, bpbat2, team2players[0], bowling0runs, bpbol0, teamnames[0],teamscore,wicketstaken ,over);
		}
		else if (bat1==3&&bal1==0&&scr==1)
		{
		   bat3score=bat3score+1;
	    	bpbat3=bpbat3+1;
	    	bowling0runs=bowling0runs+1;
	    	bpbol0=bpbol0+1;
	    	teamscore=teamscore+1;
	    	
	    	
	    	wicketstaken= wicketstaken+0;
	    	summary(team1players[3], bat3score, bpbat3, team2players[0], bowling0runs, bpbol0, teamnames[0],teamscore,wicketstaken,over);
		}
		
	    else if (bat1==4&&bal1==0&&scr==1)
		{
		 bat4score=bat4score+1;
	    	bpbat4=bpbat4+1;
	    	bowling0runs=bowling0runs+1;
	    	bpbol0=bpbol0+1;
	    	teamscore=teamscore+1;
	     
	    	
	    	wicketstaken= wicketstaken+0;
	    	summary(team1players[4], bat4score, bpbat4, team2players[0], bowling0runs, bpbol0, teamnames[0],teamscore,wicketstaken,over);
		}
		
//		if (bat1==0&&bal1==0&&scr==2)
//{
//	    	bat0score=bat0score+2;
//	    	bpbat0=bpbat0+1;
//	    	bowling0runs=bowling0runs+2;
//	    	bpbol0=bpbol0+1;
//	    	teamscore=teamscore+2;
//	    	cout<<team1players[0]<<bat0score<<bpbat0<<endl;
//	    	cout<<team2players[0]<<bowling0runs<<bpbol0<<endl;
//	    	cout<<teamnames[0]<<teamscore<<endl;
//	    	
//		}

//		if (bat1==1&&bal1==0&&scr==2)
//		if (bat1==2&&bal1==0&&scr==2)
//		if (bat1==3&&bal1==0&&scr==2)
//		if (bat1==4&&bal1==0&&scr==2)
//		
//		
//		if (bat1==0&&bal1==0&&scr==3)
//		if (bat1==1&&bal1==0&&scr==3)
//		if (bat1==2&&bal1==0&&scr==3)
//		if (bat1==3&&bal1==0&&scr==3)
//		if (bat1==4&&bal1==0&&scr==3)
//		
//		if (bat1==0&&bal1==0&&scr==4)
//		if (bat1==1&&bal1==0&&scr==4)
//		if (bat1==2&&bal1==0&&scr==4)
//		if (bat1==3&&bal1==0&&scr==4)
//		if (bat1==4&&bal1==0&&scr==4)
//		
//		if (bat1==0&&bal1==0&&scr==5)
//		if (bat1==1&&bal1==0&&scr==5)
//		if (bat1==2&&bal1==0&&scr==5)
//		if (bat1==3&&bal1==0&&scr==5)
//		if (bat1==4&&bal1==0&&scr==5)
//		
		if (bat1==0&&bal1==0&&scr==6)
{
	    	wicketstaken = wicketstaken+1;
	    	bowling0runs=bowling0runs+0;
	    	bpbol0=bpbol0+1;
	    	teamscore=teamscore+0;
	    	summary(team1players[0], bat0score, bpbat0, team2players[0], bowling0runs, bpbol0, teamnames[0],teamscore,wicketstaken,over);
		}
//		if (bat1==1&&bal1==0&&scr==6)
//		if (bat1==2&&bal1==0&&scr==6)
//		if (bat1==3&&bal1==0&&scr==6)
//		if (bat1==4&&bal1==0&&scr==6)

		if (bat1==0&&bal1==0&&scr==7)
{
	    	bat0score=bat0score+0;
	    	bpbat0=bpbat0+1;
	    	bowling0runs=bowling0runs+0;
	    	bpbol0=bpbol0+1;
	    	teamscore=teamscore+0;
	    	cout<<team1players[0]<<bat0score<<bpbat0<<endl;
	    	cout<<team2players[0]<<bowling0runs<<bpbol0<<endl;
	    	cout<<teamnames[0]<<teamscore<<endl;
	    	
	    	wicketstaken= wicketstaken+0;
	    	summary(team1players[0], bat0score, bpbat0, team2players[0], bowling0runs, bpbol0, teamnames[0],teamscore,wicketstaken,over);
	    	
		}
//		if (bat1==1&&bal1==0&&scr==7)
//		if (bat1==2&&bal1==0&&scr==7)
//		if (bat1==3&&bal1==0&&scr==7)
//	if (bat1==4&&bal1==0&&scr==7)

//if(over==0.6||(over=1.6)||(over==0.6))
//        {
//        	over = over+1;
//		}
		


}
cout<<"------------------FIRST INNING ENDED---------------------";
 
		}
		
		
};
class secondinn: public scoring
{
	protected:
		int bat2;
		int bal2;
		int I2bat0score=0; 
		int I2bpbat0=0;
		
		int I2bat1score=0;
		int I2bpbat1=0;
		
		int I2bat2score=0;
		int I2bpbat2=0;
		
		
		int I2bat3score=0;
		int I2bpbat3=0;
		
		int I2bat4score=0;
		int I2bpbat4=0;
		
		int I2teamscore=0;
		
		
		int I2bowling0runs=0;
		int I2bpbol0=0;
		
		int I2bowling1runs=0;
		int I2bpbol1=0;
		
		int I2bowling2runs=0;
		int I2bpbol2=0;
		
		int I2bowling3runs=0;
		int I2bpbol3=0;
		
		int I2bowling4runs=0;
		int I2bpbol4=0;
		
		float I2over=0.0;
		
		int I2wicketstaken=0;
		
	public:
			void batsmanstats2()
    {
    	cout<<"Which batsman is batting?"<<endl;
    	cout<<" 0.  "<<team2players[0];
    	cout<<" 1.  "<<team2players[1];
    	cout<<" 2.  "<<team2players[2];
    	cout<<" 3.  "<<team2players[3];
    	cout<<" 4.  "<<team2players[4]<<endl;
    	cin>>bat2;
    }
    void bowlerstats2()
    {
    	cout<<"Which bowler is bowling?"<<endl;
    	cout<<" 0.  "<<team1players[0];
    	cout<<" 1.  "<<team1players[1];
    	cout<<" 2.  "<<team1players[2];
    	cout<<" 3.  "<<team1players[3];
    	cout<<" 4.  "<<team1players[4]<<endl;
    	cin>>bal2;
    }
		
		void result()
		{
			cout<<" --------------------------------MATCH REUSULT-------------------------------"<<endl;
			if(I2teamscore>teamscore)
			{
				cout<<teamnames[1]<<" WON BY "<<(I2teamscore-teamscore)<<endl;
			}
			else if (I2teamscore<teamscore)
			{
			cout<<teamnames[0]<<" WON BY "<<(teamscore-I2teamscore)<<endl;
			}
			else if(I2teamscore=teamscore)
			{
				cout<<"------Match Drawn-----------"<<endl;
			}
		}
			void BSI()
		{
		
			while(I2over<=3.0&&I2wicketstaken<4)
			{
			
				I2over=(I2over+0.1);
				if(I2over>=0.6)
				{
					I2over=1;
				}
				else if(I2over>=1.6)
				{
					I2over=2;
				}
				else if(I2over>=2.6)
				{
				 I2over = 3;
				}
			
		batsmanstats2();
	    bowlerstats2();	
	    score();
	    
	    if (bat2==0&&bal2==0&&scr==1)
	    {
	    	I2bat0score=I2bat0score+1;
	    	I2bpbat0=I2bpbat0+1;
	    	I2bowling0runs=I2bowling0runs+1;
	    	I2bpbol0=I2bpbol0+1;
	    	I2teamscore=I2teamscore+1;
	    	
	    	
	    		I2wicketstaken= I2wicketstaken+0;
	    	summary(team2players[0], I2bat0score, I2bpbat0, team1players[0], I2bowling0runs, I2bpbol0, teamnames[1],I2teamscore,I2wicketstaken,I2over);
	    	
		}
		else if (bat2==1&&bal2==0&&scr==1)
		{
		  I2bat1score=I2bat1score+1;
	    	I2bpbat1=I2bpbat1+1;
	    	I2bowling0runs=I2bowling0runs+1;
	    	I2bpbol0=I2bpbol0+1;
	    	I2teamscore=I2teamscore+1;
	    	cout<<team2players[1]<<I2bat1score<<I2bpbat1<<endl;
	    	cout<<team1players[0]<<I2bowling0runs<<I2bpbol0<<endl;
	    	cout<<teamnames[1]<<I2teamscore<<endl;
	    	I2wicketstaken= I2wicketstaken+0;
	    	summary(team2players[1], I2bat1score, I2bpbat1, team1players[0], I2bowling0runs, I2bpbol0, teamnames[1],I2teamscore,I2wicketstaken,I2over);
		}
		else if (bat2==2&&bal2==0&&scr==1)
		{
		   I2bat2score=I2bat2score+1;
	    	I2bpbat2=I2bpbat2+1;
	    	I2bowling0runs=I2bowling0runs+1;
	    	I2bpbol0=I2bpbol0+1;
	    	I2teamscore=I2teamscore+1;
	    	
	    	I2wicketstaken= I2wicketstaken+0;
	    	summary(team2players[2], I2bat2score, I2bpbat2, team1players[0], I2bowling0runs, I2bpbol0, teamnames[1],I2teamscore,I2wicketstaken,I2over);
		}
		else if (bat2==3&&bal2==0&&scr==1)
		{
		   I2bat3score=I2bat3score+1;
	    	I2bpbat3=I2bpbat3+1;
	    	I2bowling0runs=I2bowling0runs+1;
	    	I2bpbol0=I2bpbol0+1;
	    	I2teamscore=I2teamscore+1;
	    
	    	
	    	I2wicketstaken= I2wicketstaken+1;
	    	summary(team2players[3], I2bat3score, I2bpbat3, team1players[0], I2bowling0runs, I2bpbol0, teamnames[1],I2teamscore,I2wicketstaken,I2over);
		}
	    else if (bat2==4&&bal2==0&&scr==1)
		{
		 I2bat4score=I2bat4score+1;
	    	I2bpbat4=I2bpbat4+1;
	    	I2bowling0runs=I2bowling0runs+1;
	    	I2bpbol0=I2bpbol0+1;
	    	I2teamscore=I2teamscore+1;
	    	
	    	I2wicketstaken= I2wicketstaken+0;
	    	summary(team2players[4], I2bat4score, I2bpbat4, team1players[0], I2bowling0runs, I2bpbol0, teamnames[1],I2teamscore,I2wicketstaken,I2over);
		}
		
//		if (bat2==0&&bal2==0&&scr==2)
//{
//	    	bat0score=bat0score+2;
//	    	bpbat0=bpbat0+1;
//	    	bowling0runs=bowling0runs+2;
//	    	bpbol0=bpbol0+1;
//	    	teamscore=teamscore+2;
//	    	cout<<team1players[0]<<bat0score<<bpbat0<<endl;
//	    	cout<<team2players[0]<<bowling0runs<<bpbol0<<endl;
//	    	cout<<teamnames[0]<<teamscore<<endl;
//	    	
//		}

//		if (bat2==1&&bal2==0&&scr==2)
//		if (bat2==2&&bal2==0&&scr==2)
//		if (bat2==3&&bal2==0&&scr==2)
//		if (bat2==4&&bal2==0&&scr==2)
//		
//		
//		if (bat1==0&&bal1==0&&scr==3)
//		if (bat1==1&&bal1==0&&scr==3)
//		if (bat1==2&&bal1==0&&scr==3)
//		if (bat1==3&&bal1==0&&scr==3)
//		if (bat1==4&&bal1==0&&scr==3)
//		
//		if (bat1==0&&bal1==0&&scr==4)
//		if (bat1==1&&bal1==0&&scr==4)
//		if (bat1==2&&bal1==0&&scr==4)
//		if (bat1==3&&bal1==0&&scr==4)
//		if (bat1==4&&bal1==0&&scr==4)
//		
//		if (bat1==0&&bal1==0&&scr==5)
//		if (bat1==1&&bal1==0&&scr==5)
//		if (bat1==2&&bal1==0&&scr==5)
//		if (bat1==3&&bal1==0&&scr==5)
//		if (bat1==4&&bal1==0&&scr==5)
//		
		if (bat1==0&&bal1==0&&scr==6)
{
	    	I2wicketstaken = I2wicketstaken+1;
	    	bowling0runs=bowling0runs+0;
	    	bpbol0=bpbol0+1;
	    	teamscore=teamscore+0;
	    	cout<<team1players[0]<<bat0score<<bpbat0<<endl;
	    	cout<<team2players[0]<<bowling0runs<<bpbol0<<endl;
	    	cout<<teamnames[0]<<teamscore<<endl;
	    	summary(team2players[0], I2bat0score, I2bpbat0, team1players[0], I2bowling0runs, I2bpbol0, teamnames[1],I2teamscore,I2wicketstaken,I2over);
	    	
		}
//		if (bat1==1&&bal1==0&&scr==6)
//		if (bat1==2&&bal1==0&&scr==6)
//		if (bat1==3&&bal1==0&&scr==6)
//		if (bat1==4&&bal1==0&&scr==6)

		if (bat1==0&&bal1==0&&scr==7)
{
	    	bat0score=bat0score+0;
	    	bpbat0=bpbat0+1;
	    	bowling0runs=bowling0runs+0;
	    	bpbol0=bpbol0+1;
	    	teamscore=teamscore+0;
	    	cout<<team1players[0]<<bat0score<<bpbat0<<endl;
	    	cout<<team2players[0]<<bowling0runs<<bpbol0<<endl;
	    	cout<<teamnames[0]<<teamscore<<endl;
	    	I2wicketstaken= I2wicketstaken+0;
	    	summary(team2players[0], I2bat0score, I2bpbat0, team1players[0], I2bowling0runs, I2bpbol0, teamnames[1],I2teamscore,I2wicketstaken,I2over);
	    	
		}
//		if (bat1==1&&bal1==0&&scr==7)
//		if (bat1==2&&bal1==0&&scr==7)
//		if (bat1==3&&bal1==0&&scr==7)
//		if (bat1==4&&bal1==0&&scr==7)




        if(over==0.6||(over==1.6)||(over==0.6))
        {
        	over = over+1;
		}
		over=over+0.1;
		
		}
		cout<<"---------------------2ND INNINGS ENDED----------------------";
	}
	
};

int main()
{
	int scerio;
	secondinn obj;
	
	obj.Welcome();
	scerio = obj.getinfo();
	obj.inplayersnames();
	if(scerio==1)
	{
	obj.BFI();
	obj.BSI();
	}
   else	if(scerio==2)
	{
	obj.BFI();
	obj.BSI();
	}
	obj.result();
	return 0;
}
