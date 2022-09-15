/*
Every month the company asks for a report from the cities that providers are registered. So, do a query that returns all the cities of the providers, 
but in alphabetical order.
OBS: You must not show repeated cities.

Tabbles
https://www.beecrowd.com.br/judge/en/problems/view/2607
*/
Select city 
From providers
Order by city Asc;