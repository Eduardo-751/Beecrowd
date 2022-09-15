/*
In the past the studio has made an event where several movies were on sale, we want to know what movies these were.

Your job to help us is to select the ID and name of movies whose price is less than 2.00.

Tabbles
https://www.beecrowd.com.br/judge/en/problems/view/2613
*/
select movies.id, movies.name
From movies
right Join prices
on movies.id_prices = prices.id
Where prices.value < 2;