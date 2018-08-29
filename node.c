struct node
{
	char *timeStamp;
	struct data
	{
		char value[50];
		char name[10];
		int id;
		int hash;
	}
	int nodeNumber;
	char nodeId[50];
	char referenceNodeId[50];
	struct node *childReferenceNode[2];
	struct node *genesisReferenceNodeID;

	// since I do not know how to create hash value i am just using a string value to denote hashValue 
	char hashValue[50];	
	

}
