/*
When the data were migrated to the database, there was a small misunderstanding on the DBA.

Your boss needs you to select the ID and the name of the products, whose categorie name start with 'super'.

Tabbles
https://www.beecrowd.com.br/judge/en/problems/view/2606
*/
Select products.id, products.name 
From products 
Right Join categories
ON products.id_categories = categories.id
where categories.name like 'super%'