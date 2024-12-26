#include<iostream>
#include<time.h>
#include<string.h>
using namespace std;
int random()
{
    srand( time(NULL) );
    int dice=5;
    int roll=0;
    roll=rand()%6+1;
    return roll;
}



void quest(int n)
{
    static int count=0,wrong=0;
    static int c=0,k=0 ,v=0,o=0,z=0,p=0;
    char ch;

    switch(n)
        {
           case 1:
              if(c==0)
              {
                 cout<<endl<<"who is PM of India"<<endl;
                 cout<<"a)Amit shah"<<endl<<"b)Narendra Modi"<<endl<<"c)Jaishah"<<endl<<"d)none";
                 cout<<endl<<"enter answer :";
                 cin>>ch;
                 if(ch=='b')
                   {
                       cout<<endl<<ch <<" is correct ans";
                       count++;
                   }
                 else
                   {
                       cout<<endl<<ch <<" is wrong ans here b is right ans";
                       wrong++;
                   }
                   c++;
              }

             else if(c==1)
              {
                 cout<<endl<<"what everyone like the most :"<<endl;
                 cout<<"a)hostel ka khana"<<endl<<"b)ghar ka khana"<<endl<<"c)bahar ka khana"<<endl<<"d)none";
                 cout<<endl<<"enter answer :";
                 cin>>ch;
                 if(ch=='b')
                   {
                       cout<<endl<<ch <<" is correct ans";
                       count++;
                   }
                 else
                   {
                       cout<<endl<<ch <<" is wrong ans here b is right ans";
                       wrong++;
                   }
                   c++;
              }

              else if(c==2)
              {
                 cout<<endl<<"what is the name of your university"<<endl;
                 cout<<"a)HCU"<<endl<<"b)DU"<<endl<<"c)AMU"<<endl<<"d)MANUU";
                 cout<<endl<<"enter answer :";
                 cin>>ch;
                 if(ch=='d')
                   {
                       cout<<endl<<ch <<" is correct ans";
                       count++;
                   }
                 else
                   {
                       cout<<endl<<ch <<" is wrong ans here b is right ans";
                       wrong++;
                   }
                   c++;
              }

              




           break;






           case 2:
           if(k==0)
             {
                 cout<<endl<<"set of program is known as :"<<endl;
                 cout<<"a)intstruction"<<endl<<"b)high level language"<<endl<<"c)structured program"<<endl<<"d)software";
                 cout<<endl<<"enter answer :";
                 cin>>ch;
                 if(ch=='d')
                   {
                       cout<<endl<<ch <<" is correct ans";
                       count++;
                   }
                 else
                   {
                       cout<<endl<<ch <<" is wrong ans here d is right ans";
                       wrong++;
                   }
                   k++;
             }

             else if(k==1)
             {
                 cout<<endl<<"the smallest unit of display is :"<<endl;
                 cout<<"a)pixel"<<endl<<"b)PPI"<<endl<<"c)DPI"<<endl<<"d)none";
                 cout<<endl<<"enter answer :";
                 cin>>ch;
                 if(c=='a')
                   {
                       cout<<endl<<ch <<" is correct ans";
                       count++;
                   }
                 else
                   {
                       cout<<endl<<ch <<" is wrong ans here d is right ans";
                       wrong++;
                   }
                   k++;
             }

             else if(k==2)
             {
                 cout<<endl<<"who developed C programing language :"<<endl;
                 cout<<"a)pixel"<<endl<<"b)PPI"<<endl<<"c)DPI"<<endl<<"d)Dennis Ritchie";
                 cout<<endl<<"enter answer :";
                 cin>>ch;
                 if(c=='a')
                   {
                       cout<<endl<<ch <<" is correct ans";
                       count++;
                   }
                 else
                   {
                       cout<<endl<<ch <<" is wrong ans here d is right ans";
                       wrong++;
                   }
                   k++;
             }




           break;



           case 3:
	if(z==0)
	{
		cout<<endl<<"Which of these EU countries does not use the euro as its currency?"<<endl;
		cout<<"a)poland"<<endl<<"b)Sweden"<<endl<<"c)Denmark"<<endl<<"d)All the above";
		cout<<endl<<"enter answer :";
		cin>>ch;
		if(ch=='d')
		{
			cout<<endl<<ch <<" is correct ans";
			count++;
		}
		else
		{
			cout<<endl<<ch <<" is wrong ans here d is right ans";
			wrong++;
		}
		z++;
	}

	else if(z==1)
	{
		cout<<endl<<"Which animal cannot stick his tongue?:"<<endl;
		cout<<"a)crocodile"<<endl<<"b)Elephant"<<endl<<"c)Mouse"<<endl<<"d)none";
		cout<<endl<<"enter answer :";
		cin>>ch;
		if(ch=='a')
		{
			cout<<endl<<ch <<" is correct ans";
			count++;
		}
		else
		{
			cout<<endl<<ch <<" is wrong ans here a is right ans";
			wrong++;
		}
		z++;
	}

	else if(z==2)
	{
		cout<<endl<<"Samsung is the biggest technology company in which country?:"<<endl;
		cout<<"a)North Korea"<<endl<<"b)South Korea"<<endl<<"c)India"<<endl<<"d)Pakistan";
		cout<<endl<<"enter answer :";
		cin>>ch;
		if(ch=='b')
		{
			cout<<endl<<ch <<" is correct ans";
			count++;
		}
		else
		{
			cout<<endl<<ch <<" is wrong ans here b is right ans";
			wrong++;
		}
		z++;
	}



	break;



    case 4:
           if(o==0)
             {
                 cout<<endl<<"Which country invented ice cream?:"<<endl;
                 cout<<"a)India"<<endl<<"b)America"<<endl<<"c)Bhutan"<<endl<<"d)china";
                 cout<<endl<<"enter answer :";
                 cin>>ch;
                 if(ch=='d')
                   {
                       cout<<endl<<ch <<" is correct ans";
                       count++;
                   }
                 else
                   {
                       cout<<endl<<ch <<" is wrong ans here d is right ans";
                       wrong++;
                   }
                   o++;
             }

             else if(o==1)
             {
                 cout<<endl<<"Which animal has had 3 hearts?"<<endl;
                 cout<<"a)octopus"<<endl<<"b)snake"<<endl<<"c)lion"<<endl<<"d)bird";
                 cout<<endl<<"enter answer :";
                 cin>>ch;
                 if(ch=='a')
                   {
                       cout<<endl<<ch <<" is correct ans";
                       count++;
                   }
                 else
                   {
                       cout<<endl<<ch <<" is wrong ans here d is right ans";
                       wrong++;
                   }
                   o++;
             }

             else if(o==2)
             {
                 cout<<endl<<"Which animal cannot walk backward? :"<<endl;
                 cout<<"a)kangaroo"<<endl<<"b)cheetah"<<endl<<"c)lion"<<endl<<"d)none";
                 cout<<endl<<"enter answer :";
                 cin>>ch;
                 if(ch=='a')
                   {
                       cout<<endl<<ch <<" is correct ans";
                       count++;
                   }
                 else
                   {
                       cout<<endl<<ch <<" is wrong ans here d is right ans";
                       wrong++;
                   }
                   o++;
             }




           break;


           case 5:
           if(v==0)
             {
                 cout<<endl<<"What is coming, but will never arrive?:"<<endl;
                 cout<<"a)Tomorrow"<<endl<<"b)today"<<endl<<"c)yesterday"<<endl<<"d)none";
                 cout<<endl<<"enter answer :";
                 cin>>ch;
                 if(ch=='a')
                   {
                       cout<<endl<<ch <<" is correct ans";
                       count++;
                   }
                 else
                   {
                       cout<<endl<<ch <<" is wrong ans here a is right ans";
                       wrong++;
                   }
                   v++;
             }

             else if(v==1)
             {
                 cout<<endl<<"What has a tail and a head but doesn’t have a body? :"<<endl;
                 cout<<"a)coin"<<endl<<"b)InSect"<<endl<<"c)tiger"<<endl<<"d)none";
                 cout<<endl<<"enter answer :";
                 cin>>ch;
                 if(ch=='a')
                   {
                       cout<<endl<<ch <<" is correct ans";
                       count++;
                   }
                 else
                   {
                       cout<<endl<<ch <<" is wrong ans here d is right ans";
                       wrong++;
                   }
                   v++;
             }

             else if(v==2)
             {
                 cout<<endl<<"Where can we find an ocean, lake, or river without water?:"<<endl;
                 cout<<"a)America"<<endl<<"b)india"<<endl<<"c)map"<<endl<<"d)none";
                 cout<<endl<<"enter answer :";
                 cin>>ch;
                 if(ch=='c')
                   {
                       cout<<endl<<ch <<" is correct ans";
                       count++;
                   }
                 else
                   {
                       cout<<endl<<ch <<" is wrong ans here c is right ans";
                       wrong++;
                   }
                   v++;
             }




           break;



           case 6:
           if(p==0)
             {
                 cout<<endl<<"Who is known as Father of Computer ?:"<<endl;
                 cout<<"a)Albert Einstein"<<endl<<"b)Aryabhatta"<<endl<<"c)Charles Babbage"<<endl<<"d)none";
                 cout<<endl<<"enter answer :";
                 cin>>ch;
                 if(ch=='c')
                   {
                       cout<<endl<<ch <<" is correct ans";
                       count++;
                   }
                 else
                   {
                       cout<<endl<<ch <<" is wrong ans here c is right ans";
                       wrong++;
                   }
                   p++;
             }

             else if(p==1)
             {
                 cout<<endl<<"The concept of exam was invented by:"<<endl;
                 cout<<"a)Narendra Modi"<<endl<<"b)Henry Fischel"<<endl<<"c)Mahatma Gandhi"<<endl<<"d)none";
                 cout<<endl<<"enter answer :";
                 cin>>ch;
                 if(ch=='b')
                   {
                       cout<<endl<<ch <<" is correct ans";
                       count++;
                   }
                 else
                   {
                       cout<<endl<<ch <<" is wrong ans here b is right ans";
                       wrong++;
                   }
                   p++;
             }

             else if(p==2)
             {
                 cout<<endl<<"Capital of china is::"<<endl;
                 cout<<"a)Delhi"<<endl<<"b)Beijing"<<endl<<"c)Lahore"<<endl<<"d)Hyderabad";
                 cout<<endl<<"enter answer :";
                 cin>>ch;
                 if(ch=='b')
                   {
                       cout<<endl<<ch <<" is correct ans";
                       count++;
                   }
                 else
                   {
                       cout<<endl<<ch <<" is wrong ans here b is right ans";
                       wrong++;
                   }
                   p++;
             }




           break;





           
           
        
          default:
          cout<<endl<<"invalid input ";
       }
        cout<<endl<<"your wrong answer :"<<wrong;
        cout<<endl<<"your correct answers :"<<count<<endl;
    

}


void dice(int g)
{
    switch(g)
    {
        case 1:
        cout<<endl<<"*";
        break;

        case 2:
        cout<<endl<<"* *";
        break;

        case 3:
        for(int i=0;i<3;i++)
        {
             for(int j=0;j<3;j++)
            {
                if(j==i)
                cout<<"*";
                else
                cout<<" ";
            }
            cout<<endl;
        }
        break;

        case 4:
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        break;


        case 5:
        for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i%2==1)
            {
                if(j%2==1)
                {
                    cout<<"*";
                }
                else
                cout<<" ";

            }
            else if(i%2==0)
            {
                if(j%2==1)
                {
                    cout<<" ";
                }
                else
                cout<<"*";


            }
           
            
        }
         cout<<endl;
         
    }
    break;

    case 6:
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    break;
       


    }
}




int main()
{
     int y;
    for(int x=0;x<25;x++)
    {
        char che[5];
        cout<<endl;
        cout<<"enter ''roll'' to roll the dice or enter ''exit'' to quit RQG :";
        cin>>che;
        if(strcmp(che, "exit")==0)
        {
          cout<<endl<<"you quit RQG";
          break;
        }
           
           else if(strcmp(che,"roll")==0)
           {
        cout<<endl;
       dice(random());
       cout<<endl;
        cout<<endl<<"enter the lucky number to start the quizz :" ;
        cin>>y;
            quest(y);

           }
           else
           cout<<endl<<"INVALID INPUT";
        

    
    }
}