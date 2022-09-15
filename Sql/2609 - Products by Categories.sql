/*
As usual the sales industry is doing an analysis of how many products we have in stock, and you can help them.

Then your job will display the name and amount of products of each category.

Tabbles
https://www.beecrowd.com.br/judge/en/problems/view/2609
*/
select categories.name, Sum(products.amount)
From categories
Right Join products
On categories.id = products.id_categories
Group by categories.name;