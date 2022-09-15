/*
The company will make an event celebrating the 20th anniversary of the market, and for that we 
will make a great celebration in the city of Porto Alegre. We also invite all our customers who are enrolled in this city.

Your job is in having the names and addresses of customers who live in 'Porto Alegre', to deliver the invitations personally.

Tabbles
https://www.beecrowd.com.br/judge/en/problems/view/2603
*/
Select customers.name, customers.street 
From customers 
where city = 'Porto Alegre';