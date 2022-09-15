/*
The financial sector of the company needs a report that shows the ID and the name of the products whose price is less than 10 or greater than 100.

Tabbles
https://www.beecrowd.com.br/judge/en/problems/view/2604
*/
Select products.id, products.name 
From products 
Where price < 10 or price > 100;