//Leonardo Garcia
//Header File for Lab 7
//November 12 2018

#include <algorithm>
#include <iostream>
#include <iterator>

//bubble sort
template <typename RandomAccessIterator>
void bubble_sort(RandomAccessIterator begin, RandomAccessIterator end);
	

//insertion sort
template <typename RandomAccessIterator, typename Predicate>
void insertion_sort(RandomAccessIterator begin, RandomAccessIterator end,
	Predicate p);
	
template <typename RandomAccessIterator>
void insertion_sort(RandomAccessIterator begin, RandomAccessIterator end);


//selection sort
template<typename ForwardIterator> void selection_sort(ForwardIterator begin,
	ForwardIterator end);


//merge sort
template<typename RandomAccessIterator, typename Order>
void mergesort(RandomAccessIterator first, RandomAccessIterator last, Order order);

template<typename RandomAccessIterator>
void mergesort(RandomAccessIterator first, RandomAccessIterator last);


//quick sort
template<typename RandomAccessIterator,
	typename Order>
	void quicksort(RandomAccessIterator first, RandomAccessIterator last, Order order);

template<typename RandomAccessIterator>
void quicksort(RandomAccessIterator first, RandomAccessIterator last);