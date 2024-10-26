# Problem Statement

#### Write a program that manages details of items in a store, including their original price and discount percentage. Each item has an item number, name, and price. The program should calculate the discounted price for each item and display all the details.

Additionally, it should calculate and display the total price of all items and the total discount applied across all items. Implement this using multiple inheritance where DiscountedItem inherits from ItemDetails and DiscountDetails.

### Input format :

The input consists of the number of items, N.

##### For each item, input:

- item_name (a string of up to 50 characters)
- item_no (an integer)
- item_price (a double value representing the price of the item)
- discount_percent (an integer representing the discount percentage)

##### Output format :

For each item, display the details in the following order:

- Item Name (string)
- Item No. (integer)
- Item Price (as a double value rounded to one decimal place)
- Discount Percent (integer)
- Discounted Price (as a double value rounded to one decimal place)

Finally:

##### Display the total price of all items before the discount, as a double value rounded to one decimal place.

##### Display the total discount applied to all items as a double value rounded to one decimal place.

Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ N ≤ 10

##### Sample test cases :

#### Input 1 :

2
Pen
012
120.0
2
Book
023
560.0
5

#### Output 1 :

Details of item 1 :

1. Item Name: Pen
2. Item No.: 12
3. Item Price: 120.0
4. Discount Percent: 2
5. Discounted Price: 117.6

Details of item 2 :

1. Item Name: Book
2. Item No.: 23
3. Item Price: 560.0
4. Discount Percent: 5
5. Discounted Price: 532.0

Total Price: 680.0
Total Discount: 30.4

#### Input 2 :

3
NoteBook
012
60.0
2
Eraser
101
12.7
0
Box
034
360.0
2

#### Output 2 :

Details of item 1 :

1. Item Name: NoteBook
2. Item No.: 12
3. Item Price: 60.0
4. Discount Percent: 2
5. Discounted Price: 58.8

Details of item 2 :

1. Item Name: Eraser
2. Item No.: 101
3. Item Price: 12.7
4. Discount Percent: 0
5. Discounted Price: 12.7

Details of item 3 :

1. Item Name: Box
2. Item No.: 34
3. Item Price: 360.0
4. Discount Percent: 2
5. Discounted Price: 352.8

Total Price: 432.7
Total Discount: 8.4
