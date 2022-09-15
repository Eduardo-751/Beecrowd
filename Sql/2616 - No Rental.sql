/*
The video store company intends to do a promotion for customers who have not yet done any rental.

Your job is to deliver us the ID and the name of the customers who have not done any rental. Sort the output by ID.

Tabbles
https://www.beecrowd.com.br/judge/en/problems/view/2616
*/
Select id, name
From customers
Where id Not in (Select id_customers 
                 From locations)