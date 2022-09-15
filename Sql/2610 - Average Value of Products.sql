/*
In the company that you work is being done a survey on the values of the products that are marketed.

To help the industry that is doing this survey you should calculate and display the average value of the price of the products.
OBS: Show the value with two numbers after the period.

Tabbles
https://www.beecrowd.com.br/judge/en/problems/view/2610
*/
Select cast(AVG(price) as decimal(10,2))
From products;