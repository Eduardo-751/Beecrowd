/*
The video store is making its semi-annual report and needs your help. 
All you have to do is select the name of the clients and the date of rental, from the rentals made in September 2016.

Tabbles
https://www.beecrowd.com.br/judge/en/problems/view/2614
*/
Select customers.name "name",rentals.rentals_date "rentals_date"
From customers
Inner Join rentals On customers.id = rentals.id_customers
Where rentals.rentals_date >= '2016-09-01' 
and rentals.rentals_date <= '2016-09-30'