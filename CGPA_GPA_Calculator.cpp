#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
void calculate_cgpa();
void calculate_gpa();
void convertor();
int main()
{
	int choice;
	cout<<"---------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"                                 Calculator                                                              "<<endl;
	cout<<"---------------------------------------------------------------------------------------------------------"<<endl;
    cout<<" Menu:"<<endl;
	cout<<"\n     1)Calculate CGPA";
    cout<<"\n     2)Calculate GPA";
    cout<<"\n     3)Convert CGPA to PERCENTAGE(%)";
    cout<<"\n     4)EXIT";
sub:
    cout<<"\nEnter the choice:";
    cin>>choice;
    switch(choice)
    {
	
    case 1: calculate_cgpa();
            break;
 
    case 2: calculate_gpa();
            break;
            
    case 3:
	        convertor();
            break;
    case 4: 
           cout<<"Exit successfully!";
            break;

    default :
    	cout<<"Enter valid option";
         goto sub;
         break;
  }
}
void calculate_gpa()
{
	cout<<"-------------------GPA CALCULATING------------------------"<<endl;
	cout<<"Enter how many subject want to calculate:";
	int num;
	cin>>num;
	float credit[num];
	float point[num];
	for(int i=0;i<num;i++)
	{
		cout<<"Enter the obtained marks for subject "<<i+1<<":"<<endl;
		cin>>credit[i];
		cout<<"Enter the points for subject "<<i+1<<":"<<endl;
		cin>>point[i];
	}
	float sum=0;
	float total=0;
	for(int i=0;i<num;i++)
	{
	  total=credit[i]*point[i];
	  sum += total;	
	}
	
	float totcrd=0;
	 for(int k=0;k<num;k++)
	 {
	 	totcrd=totcrd+credit[k];
	 }
	 
	 cout<<"\nTotal points : "<<sum<<" . Total credits : "<<totcrd<<" . Total GPA : "<<sum/totcrd<<" . "<<endl;
	
	sub:
		int input;
		cout<<" **********************************************************************";
		cout<<"\n 1.Calculate again"<<endl;
	    cout<<"\n 2.Go back to Main Menu"<<endl;
	    cout<<"\n 3.EXIT"<<endl;
	    cout<<" **********************************************************************"<<endl;

	    cout<<"Enter your choice:";
	    cin>>input;
	    switch(input)
	    {
	    	case 1:
	    		calculate_gpa();
	    		break;
	    		
	    	case 2:
	    		main();
	    		break;
	    		
	    	case 3:
	    	   cout<<"Exit successfully!";
	    	   break;
	    	   
	    	default :
    	       cout<<"Enter valid option";
                goto sub;
                break;
	    	 
		}
	
	
}
void calculate_cgpa()
{
    cout<<"-------------------CGPA CALCULATING------------------------"<<endl;
	cout<<"Enter how many semisters want to calculate:";
	int n;
	cin>>n;	
	float sem[n];
	for(int i=0;i<n;i++)
	{
		cout<<"\n Enter the semisters "<<i+1<<" result (CGPA):";
		cin>>sem[i];
	}
	float tot=0;
	for(int j=0;j<n;j++)
	{
		tot = tot+ sem[j];
	}
	cout<<"\n your CGPA is : "<<fixed<<setprecision(2)<<tot/n<<endl;
	sub:
		int input;
		cout<<"\n **********************************************************************";

		cout<<"\n 1.Calculate again"<<endl;
		cout<<"\n 2.convert to percenatge"<<endl;
	    cout<<"\n 3.Go back to Main Menu"<<endl;
	    cout<<"\n 4.EXIT"<<endl;
	   	cout<<" **********************************************************************"<<endl;

	    cout<<"Enter your choice:";
	    cin>>input;
	    switch(input)
	    {
	    	case 1:
	    		calculate_cgpa();
	    		break;
	    		
	    	case 2:
				    convertor();
	    		     break;
	    	case 3:
	    		main();
	    		break;
	    		
	    	case 4:
	    	   cout<<"Exit successfully!";
	    	   break;
	    	   
	    	default :
    	       cout<<"Enter valid option";
                goto sub;
                break;
	    	 
		}
	
}
void convertor()
{
	cout<<"-------------------CGPA-TO-PERCENTAGE------------------------"<<endl;
	float cgpa;
	cout<<"Enter the CGPA:"<<endl;
	cin>>cgpa;
	float per=0;
	float a=9.5;
	per=a*cgpa;
	
	cout<<"\n Your percentage is:"<<fixed<<setprecision(2)<<per<<"%"<<endl;
	cout<<"\n **********************************************************************";
	cout<<"\n 1.Convert again"<<endl;
	cout<<"\n 2.Go Back To Main menu"<<endl;
	cout<<"\n 3.Exit"<<endl;
	cout<<" **********************************************************************"<<endl;
   sub:
	int input;
	cout<<"Enter your choice:";
	    cin>>input;
	    switch(input)
	    {
	    	case 1:
	    		convertor();
	    		break;
	    		
	    	case 2:
	    		main();
	    		break;
	    		
	    	case 3:
	    	   cout<<"Exit successfully!";
	    	   break;
	    	   
	    	default :
    	       cout<<"Enter valid option";
                goto sub;
                break;
	    	 
		}
	
	
	
	
	
	
	
	
		
}


























