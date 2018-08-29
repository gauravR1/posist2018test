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
	char hashValue[50];	
	

}
