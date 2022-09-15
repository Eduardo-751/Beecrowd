/*
Our company's import sector needs a report on the import of products from our Sansul providers.

Your task is to display the name of the products, the name of the supplier and the name of the category, 
for the products supplied by the supplier 'Sansul SA' and whose category name is 'Imported'.

Tabbles
https://www.beecrowd.com.br/judge/en/problems/view/2618
*/
Select products.name, providers.name, categories.name
From products
Right Join providers On products.id_providers = providers.id
Right Join categories On products.id_categories = categories.id
Where providers.name = 'Sansul SA' And categories.name = 'Imported'