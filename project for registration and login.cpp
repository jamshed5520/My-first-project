#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class UserRegisteration{
	public:
		void RegisterUser()
		{ 
		string username, password;
		cout<<"Enter the User Name:"<<endl;
		cin>>username;
		cout<<"Enter the Password:"<<endl;
		cin>>password;
	
	          ofstream file("users.txt",ios::app);
		if(file.is_open())
		{
			file<<username<<"      "<<password<<"    "<<endl;
		file.close();
		cout<<" Registeration successfull"<<endl;
		}
		else{
			cout<<"erorr in opening file "<<endl;
		}
	}	
};
class UserLogin{
	public:
		bool loginuser(){
			string username,password,user,pass;
			cout<<"     Enter the User Name:"<<endl;
		cin>>username;
		cout<<"       Enter the Password:"<<endl;
		cin>>password;	
		
		ifstream file("users.txt");
		if(file.is_open())
		{
			while(file>>user>>pass)
			if(user==username && pass==password)
			{ 
			cout<<" login successfull!  welcome:"<<username<<endl;
			file.close();
			return true;
			} file.close();
			
	}
			
				cout<<"invalid user name or password"<<endl;
				return false;
		}
		
};

int main(){

		UserRegisteration reg;
    	UserLogin log;

	int choice;
	
	
	while(true){
		cout<<" *******WEL COME TO THE MAIN PAGE*******"<<endl;
		cout<<"      1. REGISTERARION "<<endl;
		cout<<"      2. LOGIN"<<endl;
		cout<<"      3. EXIT "<<endl;
		cout<<"       ENTER YOUR CHOICE  ";
		cin>>choice;
		switch(choice){
			{
			case 1:
				reg.RegisterUser();
				break;}
				{
				
				case 2:
					log.loginuser();
					break;}
				{
					case 3:
						cout<<"exit the program"<<endl;
						break;
						default:
							cout<<"invalid choice"  ;
						}
	}
}
}

	
	


	 
	 

















