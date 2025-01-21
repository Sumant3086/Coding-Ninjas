//  Merge Sort
// Easy
// 40/40
// Average time to solve is 15m
// Contributed by
// 221 upvotes
// Asked in companies
// Problem statement
// Given a sequence of numbers ‘ARR’. Your task is to return a sorted sequence of ‘ARR’ in non-descending order with help of the merge sort algorithm.

// Example :

// Merge Sort Algorithm -

// Merge sort is a Divide and Conquer based Algorithm. It divides the input array into two-parts, until the size of the input array is not ‘1’. In the return part, it will merge two sorted arrays a return a whole merged sorted array.

// The above illustrates shows how merge sort works.
// Note :
// It is compulsory to use the ‘Merge Sort’ algorithm.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= T <= 50
// 1 <= N <= 10^4
// -10^9 <= arr[i] <= 10^9

// Time Limit : 1 sec
// Sample Input 1 :
// 2
// 7
// 3 4 1 6 2 5 7
// 4
// 4 3 1 2
// Sample Output 1 :
// 1 2 3 4 5 6 7
// 1 2 3 4
// Explanation For Sample Input 1:
// Test Case 1 :

// Given ‘ARR’ : { 3, 4, 1, 6, 2, 5, 7 }

// Then sorted 'ARR' in non-descending order will be : { 1, 2, 3, 4, 5, 6, 7 }. Non-descending order means every element must be greater than or equal to the previse element.

// Test Case 2 :

// Given ‘ARR’ : { 4, 3, 1, 2 }

// Then sorted 'ARR' in non-descending order will be : { 1, 2, 3, 4 }. 
// Sample Input 2 :
// 2
// 4
// 5 4 6 7
// 3
// 2 1 1
// Sample Output 2 :
// 4 5 6 7
// 1 1 2



void merge(vector<int>& arr,int left,int mid,int right){
    int n1=mid-left+1;
    int n2=right-mid;
    vector<int>firstHalf(n1);
    vector<int>secondHalf(n2);
    for(int i=0;i<n1;i++){
        firstHalf[i]=arr[left+i];
    }

    for(int j=0;j<n2;j++){
        secondHalf[j]=arr[mid+1+j];
    }

    int i=0,j=0,k=left;
    while(i<n1 && j<n2){
        if(firstHalf[i]<=secondHalf[j]){
            arr[k]=firstHalf[i];
            k++;
            i++;
        }else{
            arr[k]=secondHalf[j];
            k++;
            j++;
        }
    }
    while(i<n1){
        arr[k]=firstHalf[i];
        k++;
        i++;
    }
    while(i<n1){
        arr[k]=secondHalf[j];
        k++;
        j++;
    }
}

void mergeSortRecurssive(vector<int>& arr,int left,int right){
    if(left<right){
        int mid=(left+right)/2;
        mergeSortRecurssive(arr,left,mid);
        mergeSortRecurssive(arr,mid+1,right);

        merge(arr,left,mid,right);
    }
}
int mergeSort(vector < int > & arr, int n) {
// Write your code here.
    if(!arr.empty()){
        mergeSortRecurssive(arr,0,arr.size()-1);
    }
    return 0;
}

