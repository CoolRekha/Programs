# Isertion Sort
## **Sorting Algorithm**

**Insertion Sort** Insertion sort is a sorting algorithm in which the elements are transferred one at a time to the right position.

In other words, an insertion sort helps in building the final sorted list, one item at a time, with the movement of higher-ranked elements. It has the benefits of simplicity and low overhead.

The array is searched sequentially and unsorted items are moved and inserted into the sorted sub-list (in the same array). This algorithm is not suitable for large data sets as its average and worst-case complexity are of Ο(n 2 ), where n is the number of items.

## **Example**

Insertion Sort works similar to how we sort a hand of playing cards.

Imagine that you are playing a card game. You're holding the cards in your hand, and these
cards are sorted. 

The dealer hands you exactly one new card. You have to put it into the
correct place so that the cards you're holding are still sorted.

 In selection sort, each
element that you add to the sorted subarray is no smaller than the elements already in the
sorted subarray. 

But in our card example, the new card could be smaller than some of the
cards you're already holding, and so you go down the line, comparing the new card against
each card in your hand, until you find the place to put it. You insert the new card in the
right place, and once again, your hand holds fully sorted cards.

 Then the dealer gives you
another card, and you repeat the same procedure. Then another card, and another card,
and so on, until the dealer stops giving you cards. This is the idea behind **insertion sort**.

Loop over positions in the array, starting with index 1. Each new position is like the new
card handed to you by the dealer, and you need to insert it into the correct place in the
sorted subarray to the left of that position.

<br>
<hr>

## **Algorithm**

**Insertion Sort Algorithm**: The basic steps to perform Insertion Sort are:

To sort an array of size N in ascending order: 

* Iterate from arr[1] to arr[N] over the array. 
* Compare the current element (key) to its predecessor. 
* If the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped element.

<hr>

![Insertion-Sort-algorithm](https://www.codingninjas.com/blog/wp-content/uploads/2020/07/E-2.png)



A program that demonstrates Insertion Sort in C++ is given below.

## **Code Implementation**
```cpp 
#include <iostream>
using namespace std;
void insertionSort(int *arr, int n)
{
    for(int i=1;i<n;i++){
        int current=arr[i];
        int j;
        for( j = i-1; j >= 0;j--){
            if(current < arr[j]){
                arr[j+1]=arr[j];    // shifting by 1 position
            }
            else{
                break;
            }
        }
        arr[j+1]=current;
    }
}
int main()
{
	int t;
    cout<<"Enter no. of test cases you want to run";
	cin >> t;
	
	while (t--){
		int size;
        cout<<"Enter Size of array";
		cin >> size;
		int *input = new int[size];
        cout<<"Enter elements of array";
		for (int i = 0; i < size; i++){
			cin >> input[i];
		}
		insertionSort(input, size);
        cout<<"Your Sorted array is";
		for (int i = 0; i < size; i++){
			cout << input[i] << " ";
		}
		delete[] input;
		cout << endl;
	}
	return 0;
}
```
**Output**
```
Enter no. of test cases you want to run
1
Enter Size of array
7
Enter elements of array
2 13 4 1 3 6 28
Your Sorted array is
1 2 3 4 6 13 28
```

<br>

## **Resources:**
<br>

* [**CODING NINJAS**](https://www.codingninjas.com/blog/2020/07/23/insertion-sort-in-programming-languages/)
* [**GFG**](https://www.geeksforgeeks.org/insertion-sort/)
