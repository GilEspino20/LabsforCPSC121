#include <iostream>
#include <string>

int main()
{
std::cout<<"Welcome to MadLips!\n";
std::cout<<"Here is the MadLip!\n";
std::cout<<"Dear <name>,\n"<<"I am <emotion> the I was not able to complete my homework on time. My pet <animal> ate my textbook, and I was only able to retrive <number> pages\n"<<"from its jaws. I hope I can get at least a <letter grade> grade because Ive done <floating point number between 0 and 100> % of the work.\n"<<"Sincerely,\n"<<"<name>"<<std::endl;
std::string name;
std::cout<<"Please choose a name."<<std::endl;
std::cin>>name;
std::string emotion;
std::cout<<"Please choose an emotion."<<std::endl;
std::cin>>emotion;
std::string animal;
std::cout<<"Please choose an animal."<<std::endl;
std::cin>>animal;
int number;
std::cout<<"Please choose a number."<<std::endl;
std::cin>>number;
char letter;
std::cout<<"Please choose a letter."<<std::endl;
std::cin>>letter;
float any_number;
std::cout<<"Please choose a number between 0 to 100."<<std::endl;
std::cin>>any_number;
std::string second_name;
std::cout<<"Please now choose another name."<<std::endl;
std::cin>>second_name;
std::cout<<"Dear "<<name<<",\n"<<"I am "<<emotion<<" the I was not able to complete my homework on time. My pet "<<animal<<" ate my textbook, and I was only able to retrive "<<number<<" pages\n"<<"from its jaws. I hope I can get at least a(n) "<<letter<<" grade because I've done "<<any_number<<" % of the work.\n"<<"Sincerely,\n"<<second_name<<std::endl;
return 0;
}
