# posist2018test
coding round of posist

1) First make a genesis node and assign a key to it.That will be used as a parent node to all thode nodes where their sum is less than parent.

2) Incase their sum exceeds the sum of the node just below genesis Node we create a new genesis node assign it a key and make that genesis node the head of the node which cause the value to go above the sum.

3)For calculating the number of nodes in each record we can use the child reference node .
4)the above code can also  be used to find longest chain of genesis node.

5)The data can be written in a file.

6)Since we  have refrence to both parent and child node we can make a function "treeSum"
  to traverse up or down and find  all the sum of all nodees.
  
7) Before attaching a new node we have to verify that its data value does than cause the sum to exceed that of parent.
    We can pass its value and previous parent nodes value to check thsi.
    
   if it caues sum to imcrease we assign a node to it and a genesis node to it.

