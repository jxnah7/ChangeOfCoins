# ChangeOfCoins

Many businesses in this area have machines that automatically return the appropriate change in coins for amounts less than $1.00. You have been hired to write a program to determine the best set of coins to be returned as change (best being the minimal number of coins). For example, if you were to give back 31 cents, then the best combination is a quarter, a nickel and a penny (as opposed to three dimes and a penny, or a quarter and 6 pennies, etc.). Assume that the only coins are quarters, dimes, nickels, and pennies.

To solve this problem your program must perform the following tasks:
Declare variables amount (amount in cents), count25 (quantity of quarters), count10 (quantity of dimes), count5 (quantity of nickels), count1 (quantity of pennies), and count (quantity of coins) to hold whole values
Prompt the user to "Enter amount in cents to be returned as change: "
Read the value from the keyboard and store it in the corresponding variable
Call coinChanger() to calculate the quantity of each type of coin and the total number of coins that are needed to provide a given change
Call function printChange() to print the amount of change, the quantity of each type of coin and the total number of coins
You need to define the following functions to implement the solution:
1) To calculate the quantity of each type of coins that are needed to get the change and the total number of coins that will be needed, you must define function coinChanger(cents, c25, c10, c05, c01, coincount). It receives the amount in cents for change and returns the quantity of quarters, the quantity of dimes, the quantity of nickels, the quantity of pennies, and the number of coins needed for the change. All the values are whole numbers.
This function must calculate the quantity of each type of coins that are needed to get the change and the total number of coins that will be needed and return them to the caller.
2) To print the output you must define function printChange(cents, c25, c10, c05, c01, coincount). It receives the amount in cents for change, the quantity of quarters, the quantity of dimes, the quantity of nickels, the quantity of pennies, and the number of coins needed for the change. All the values are whole numbers.
This function must print the message to the screen (formatted as shown in my examples): "You need to use " , coincount, " coins for a change of ", cents, " cents:"
c25, "Quarters"
c10, "Dimes"
c05, "Nickels" c01, "Pennies"
