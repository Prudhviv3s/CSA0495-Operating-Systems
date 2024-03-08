#include <stdio.h>
#include <stdlib.h>
#define MAX_PROCESSES 10
struct Process {
	int id;
	int priority;
};
//function to select the process with the highest priority
struct Process selectHighestPriority(struct Process processes[], int n){
	struct Process highestPriorityProcess = processes[0];
	for(int i=1;i<n;i++){
		if(processes[i].priority>highestPriorityProcess.priority){
			highestPriorityProcess = processes[i];
		}
	}
	return highestPriorityProcess;
}
int main (){
	struct Process Processes[MAX_PROCESSES];
	int n;
	//input the number of processes
	printf("Enter the number of processes:");
	scanf("%d", &n);
	//input details of each process
	printf("Enter details of each process:\n");
	for(int i=0;i<n;i++){
		printf("Process %d:\n", i+1);
		Processes[i].id = i+1;
		printf("Priority: ");
		scanf("%d", &Processes[i].priority);
	}
	//select the process with the highest priority
	struct Process nextProcess = selectHighestPriority(Processes,n);
	//display the selected process
	printf("Process with the highest priority:\n");
	printf("ID:%d\n", nextProcess.id);
	printf("Priority:%d\n", nextProcess.priority);
	return 0;
}