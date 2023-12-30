/*
Given an array of integers. Check if the array is palindrome or not.
*/
#include<stdio.h>
#include<stdbool.h>

bool isPalindrome(int[], int, int);

void main() {
    int arr[] = {12, 31, 20, 23, 20, 31, 12};
    
	int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of given array.
    
	if (isPalindrome(arr, size, 0)) { printf("Palindrome\n"); }
    else { printf("Not palindrome\n"); }
}

bool isPalindrome(int arr[], int size, int first) { // The index "first" will be initialized to 0
    int last = size-1-first; // Calculate the index "last"
    
	if (arr[first] != arr[last]) return false; // If the value at index "first" and "last" are not equal, the array is not palindrome.
    
	if (first >= last) return true; // If index "first" can reach the value that is larger than or equal to "last", that means the array is palindrome.
    
	return isPalindrome(arr, size, first+1); // Increase the index "first" by 1 => the index "last" will be decreased by 1, accordingly.
}
