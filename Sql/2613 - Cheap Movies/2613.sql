select movies.id, movies.name
From movies
right Join prices
on movies.id_prices = prices.id
Where prices.value < 2;