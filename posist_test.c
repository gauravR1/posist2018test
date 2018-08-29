#include<stdio.h>
#include "genesisNode.c"
#include "node.c"

char* T()
{ 
	time_t curtime;
	time(&curtime);
	char t[]=ctime(&curtime));
   	return (&t);  
}

void checksum(struct node *n,struct genesisNode *g)
{
	if(n.genesisReferenceNodeID == Null)
	{
		genesisNode N;
		n.genesisReferenceNodeId=&N;
		n.timeStamp=T();
	}
	else
	{	
		struct node * c=n.referenceNodeId ;
		while( c!="Null")
		{
			sum=c.data.value;
			treeSum(&c,sum);
		}
	}
}


int main()
{
	char c;

	printf("Begin creating records:\n");
	printf("Do you want to create a new record?(Y/N)");
	scanf("%c",&c);
	printf("\n");

	genesisNode g;
	g.key=1;

	for(;c=="Y" || c=="y";)
	{
		node n;
		printf("Enter the data:\n");
		printf("Enter  the value in record:");
		scanf("%s",&n.data.vLalue);
		printf("\n");
		printf("Enter the owner id:")
		scanf("%d",&n.data.id);
		printf("\n");
		printf("Owner name:");
		scanf("%s",&n.data.name);
		printf("\n");
		printf("Owner hash value:")
		scanf("%d",&n.data.hash);
		

		//checking if sum of nodes has not increased above value of parent
		checkSum(&n,&g); 
	
		printf("Do you wish to enter more records?(y/n)");
		scanf("%c",&c);
	}	
	if(c=="n" || c=="N")
		printf("Thanks for visiting the database");

	return 0;
}
