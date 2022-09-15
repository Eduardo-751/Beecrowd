/*
The financial sector needs a report on the providers of the products we sell. The reports include all categories, 
but for some reason, providers of products whose category is the executive, are not in the report.

Your job is to return the names of the products and providers whose category ID is 6.

Tabbles
https://www.beecrowd.com.br/judge/en/problems/view/2605
*/
Select products.name, providers.name 
From products 
Right Join providers
ON products.id_providers = providers.id
where products.id_categories = 6;