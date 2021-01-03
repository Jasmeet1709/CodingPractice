#include<bits/stdc++.h>
int main (){
	int stack[100], op, top=0;
	while(1){	
		printf("Press 1 to insert, 2 to remove, 3 to see the lenght and any other number to exit!\n");
		printf("The stack supports until 100 elements.\n");
		scanf("%d", &op);
		if(op==1) {
			if(top==99){
				printf("The stack is full!\n"); continue;
			}
			
			printf("Type an integer!\n");
			scanf("%d", &op);
			stack[top]=op;
			top++;
			continue;
		}
		else if(op==2){
			if(top==0) { printf("The stack is empty!\n"); continue;}
			printf("Removed : %d \n " , stack[--top]);	
		}
		else if (op==3) printf("%d\n", top);
		else return 0;
	}
}
