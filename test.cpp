#include<iostream>
const int maxtimes=180;
const int mintimes=10;
const int intval=10;
const float dosage[]={0.8,2.0,3.0,4.0,5.0};
const std::string combine[]={"0.8/1ml","2/3ml","3/3ml","4/5ml","5/5ml"};
int main()
{
	for(int i=0;i<sizeof(dosage)/sizeof(float);i++){
		for(int j=mintimes;j<=maxtimes;j+=intval){
			std::cout<<"选择组合："<<combine[i]<<std::endl;
			std::cout<<"注射次数为："<<j<<std::endl;
			std::cout<<"单次注射剂量为："<<dosage[i]<<"/"<<j<<"="<<dosage[i]/j<<"ml\n"<<std::endl;
		}
	}
	return 0;
}
