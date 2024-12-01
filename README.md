# Common Core 42 - Push_swap 
push_swap is a 42 school algorithm project where we must sort a given list of random numbers with a limited set of instructions, using the lowest possible number of actions.
I've used [Turk algorithm](https://medium.com/@ayogun/push-swap-c1f5d2d41e97) which appered to be quite effective.
## Push_Swap Rules and Grading
The program is only allowed two stacks to work with, stack A and stack B. All the numbers are initially added to stack A, and B is empty.

The possible actions are:

+ pa (push A): Take the first element at the top of B and put it at the top of A. Do nothing if B is empty.
* pb (push B): Take the first element at the top of A and put it at the top of B. Do nothing if A is empty.
- sa (swap A): Swap the first 2 elements at the top of stack A. Do nothing if there is only one or no elements.
+ sb (swap B): Swap the first 2 elements at the top of stack B. Do nothing if there is only one or no elements.
* ss: sa and sb at the same time.
- ra (rotate A): Shift all elements of stack A up by 1. The first element becomes the last one.
+ rb (rotate B): Shift all elements of stack B up by 1. The first element becomes the last one.
* rr: ra and rb at the same time.
- rra (reverse rotate A): Shift all elements of stack A down by 1. The last element becomes the first one.
* rrb (reverse rotate B): Shift all elements of stack b down by 1. The last element becomes the first one.
+ rrr : rra and rrb at the same time.
- The grade depends on how efficient the program's sorting process is.

* Sorting 3 values: no more than 3 actions.
+ Sorting 5 values: no more than 12 actions.
- Sorting 100 values: rating from 1 to 5 points depending on the number of actions:
  _ 5 points for less than 700 actions
  _ 4 points for less than 900
  _ 3 points for less than 1100
  _ 2 points for less than 1300
  _ 1 point for less than 1500
* Sorting 500 values: rating from 1 to 5 points depending on the number of actions:
  _ 5 points for less than 5500 actions

  _ 4 points for less than 7000
  _ 3 points for less than 8500
  _ 2 points for less than 10000
  _ 1 point for less than 11500
Validating the project requires at least 80/100.
<img width="911" alt="Screenshot 2024-12-01 at 18 35 10" src="https://github.com/user-attachments/assets/f162d5b2-6ba8-41b2-9f68-ee6fab902f6c">
