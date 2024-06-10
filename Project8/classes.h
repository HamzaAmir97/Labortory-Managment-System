#include<fstream>
#include<iostream>

#include<string>
using namespace  std;

#ifndef CLASSES_H_
#define CLASSES_H_
int Pnc=0,Ppc=0,Pac=0,Pwc=0,Pdc=0,Prc=0;
int tnc=0,tnuc=0,tcc=0,trec=0;

int unc=0,upc=0;

class Patin;
class Data
{
public:
	string name[50];
	string pass[50];
	string ph_num[50];
	string Addreass[50];
	string Age[50];
	string Weidth[50];


};
//////////////////////////
////////////////////////
////////////////////////
class test {
	string  name[100];
	string  cost[100];
	string  number[100];
	string  res[100];
public:
	void setname(string a,int i){
	
     name[i]=a;
		

	}
	////////
	void setcost(string a,int i){
	
     cost[i]=a;
		

	}
	/////////////
	void setnum(string a,int i){
	
     number[i]=a;
		

	}

	void setres(string a,int i){
		
     
     res[i]=a;
		

	}
	string getname(int i){
		return name[i];

	}
	string getnum(int i){
		return number[i];

	}
	string getcost(int i){
		return cost[i];

	}
	string getres(int i){
		return res[i];

	}
friend class user;


};
////////////////////////////
class user :Data
{
public:
	void setname(string a){
    for(int i=0 ;i<100;i++){
			
			if(name[i].empty()){
				name[i]=a;
				break;
			}
	}
	}
	void setpass(string a){
     for(int i=0 ;i<100;i++){
			
			if(pass[i].empty()) {
				pass[i]=a;
				break;
			}
		
	}

	}

	bool comp_name(string a) {
		int i=0;
		for(;i<50;i++){
			if(a.empty())
		   return 0;
	    if(name[i]==a)
		   return 1;
	   
		}


	return 0;
	}
	bool comp_pass(string a) {
		int i=0;
		for(;i<50;i++){
       if(a.empty())
		   return 0;
	    if(pass[i]==a)
		   return 1;
	   
		}
	}

    int getindex_name(string a){

		int i=0;
		for(;i<50;i++){
       
	    if(name[i]==a)
			return i;
	}
	}
	 int getindex_pass(string a){

		int i=0;
		for(;i<50;i++){
       
	    if(pass[i]==a)
			return i;
	}
	}
	string getname(int i){
		return name[i];

	}
	string getpass(int i){
		return pass[i];

	}
	string gettest_name(test a,int i){
		
	return	a.getname(i);
	}
	string gettest_num(test a,int i){
		
	return	a.getnum(i);
	}
	string gettest_cost(test a,int i){
		
	return	a.getcost(i);
	}
	string gettest_res(test a,int i){
		
	return	a.getres(i);
	}

};
////////////////////////
//////////////////////////////////
//////////////////////////////////
class Patin:Data
{
	string Doctor[50];
	

public:
	
	void setname(string a,int i)
	{
		name[i]=a;
	}
	
	void setpass(string a ,int i){

     pass[i]=a;
			
	}
	//////Addreass
	void setAddreass(string a){			
	}
	/////Doctor
	void setDoctor(string a ,int i ){
     
				Doctor[i]=a;
				
		
	}
	/////Age
	void setAge(string a ,int i){
     	Age[i]=a;
		
	}
	/////weidth
	void setweidth(string a, int i){
     
		Weidth[i]=a;

	}
	bool comp_name(string a) {
		int i=0;
		for(;i<50;i++){
        if(a.empty())
		   return 0;
	    if(name[i]==a)
		   return 1;
	   
		}


	return 0;
	}
	bool comp_pass(string a) {
		int i=0;
		for(;i<50;i++){
       if(a.empty())
		   return 0;
	    if(pass[i]==a)
		   return 1;
	   
		}
	}

    int getindex_name(string a){

		int i=0;
		for(;i<50;i++){
       
	    if(name[i]==a)
			return i;
	}
	}
	 int getindex_pass(string a){

		int i=0;
		for(;i<50;i++){
       
	    if(pass[i]==a)
			return i;
	}
	}
	string getname(int i){
		return name[i];

	}
	string getpass(int i){
		return pass[i];

	}
	string getAge(int i){
		return Age[i];

	}
	string getWeight(int i){
		return Weidth[i];

	}
	string getDoctor(int i){
		return Doctor[i];

	}
	 string gettest(test a,int i){
		 return a.getname(i);
	 }
	 string getcost(test a,int i){
		 return a.getnum(i);

	 }
friend class test ;

};
////////////////////////
////////////////




///// global variblse
 user us;

 test te;
 Patin Pat;




#endif
