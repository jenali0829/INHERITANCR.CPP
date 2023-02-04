#include<iostream>
using namespace std;

class x{

    public:
		int a;
		int b;
		int c;
	    int v,j,k,s;


};

class y : public x{

	public:
	void setData();
	void getData();
};

void y::setData(){

	cout<<"Enter A:";
	cin>>a;

	v=a*a*a;
	cout<<v<<endl;

	cout<<"Enter B:";
	cin>>b;
	j=b*b*b;
	cout<<j<<endl;

	cout<<"Enter C:";
	cin>>c;
	k=c*c*c;
	cout<<k<<endl;

	s=v+j+k;


}

void y::getData(){

	cout<<"Sum Of All Cube: "<<s;


}

main(){


	y obj;

	obj.setData();
	obj.getData();



}
