 #include<iostream>
 #include<string>
 using namespace std;
 
 int main()
 {
 	int i,j,nr,nc,q,k,x,y;
 	cin>>nr>>q;
 	
 	int **p=new int*[nr];
	//cin>>nc;
	
	for(i=0;i<nr;i++)
	{
		cin>>nc;
		p[i]=new int[nc];
		for(j=0;j<nc;j++)
		{
			cin>>p[i][j];
		}
	}
	
	for(i=0;i<q;i++)
	{
		cin>>x>>y;
		cout<<p[x][y]<<endl;
	}
 	
 	
 	
 }
