// Round Robin
// Easy
// 0/40
// Average time to solve is 20m
// Contributed by
// Asked in company
// Problem statement
// Round Robin is a CPU Scheduling algorithm where each process is assigned a fixed time slice / quantum in a cyclic manner.

// You should be aware of the following terms before proceeding:

// Arrival time: Time at which the process arrives.

// Burst time: The time the process takes for its execution. 

// Completion time: Time at which the process completes its execution.

// Turn Around time: Time difference between the Completion time and the Arrival time.

// Waiting time: Time difference between the Turn Around time and the Burst time.
// You are given time slice / quantum and a list of processes where 'PROCESS[ i ]' denotes the Burst time of the process 'i'. Your task is to perform Round Robin scheduling and print a list of Waiting time where (i)th index of your list denotes the waiting time for 'PROCESS[ i ]'.

// Note:

// You can consider Arrival time for every process to be 0. 
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 10
// 1 <= N <= 10^2
// 1 <= Time slice <= 10^2
// 1 <= Burst time <= 10^3

// Time Limit: 1 sec
// Sample Input 1:
// 1
// 4 2
// 5 3 4 2
// Sample output 1:
// 9 8 9 6
// Explanation of Sample output 1:
// The pictorial representation for the scheduling will be as follows:

// Waiting time for P1: 14 - 5 i.e. 9.
// Waiting time for P2: 11 - 3 i.e. 8.
// Waiting time for P3: 13 - 4 i.e. 9.
// Waiting time for P4: 8 - 2 i.e. 6.

// Thus, the output will be [ 9, 8, 9, 6 ].
// Sample Input2:
// 1 
// 3 2
// 5 4 3 
// Sample Output2:
// 7 6 8


#include <bits/stdc++.h> 
vector<int> roundRobin(vector<int> &process, int n, int quantum)
{
	// Write your code here.
	vector<int>rem(n);
	for(int i=0;i<n;i++){
		rem[i]=process[i];
	}
	vector<int>waiting(n,0);
	int t=0;
	while(1){
		bool done=true;
		for(int i=0;i<n;i++){
			if(rem[i]>0){
				done=false;
				if(rem[i]>quantum){
					t+=quantum;
					rem[i]-=quantum;
				}else{
					t+=rem[i];
					waiting[i]=t-process[i];
					rem[i]=0;
				}
			}
		}
		if(done==true){
			break;
		}
	}
	return waiting;
}
