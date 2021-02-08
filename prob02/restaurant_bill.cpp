#include <iostream>
#include <iomanip>

int main()
{
  double meal_cost,tip_percentage,subtotal,taxes,tip,total;
  const double tax_amount=0.075;
  std::cout<<"Please input meal cost:";
  std::cin>>meal_cost;
  std::cout<<"Please input tip percentage:";
  std::cin>>tip_percentage;
  subtotal=meal_cost;
  tip=subtotal*(tip_percentage/100);
  taxes=tax_amount*subtotal;
  total=subtotal+taxes+tip;
  std::cout<<"\n Restaurant Bill \n";
  std::cout<<"\n==================== \n";
  std::cout<<"Subtotal:$";
  std::cout<<subtotal<<std::endl;
  std::cout<<"Taxes:$";
  std::cout<<std::fixed<<std::setprecision(2)<<taxes<<std::endl;
  std::cout<<"Tips:$";
  std::cout<<tip<<std::endl;
  std::cout<<"\n====================\n";
  std::cout<<std::endl<<"Total:$";
  std::cout<<total<<std::endl;
  return 0;
}
