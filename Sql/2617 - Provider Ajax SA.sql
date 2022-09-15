/*
The financial sector has encountered some problems in the delivery of one of our providers, the delivery of the products does not match the invoice.

Your job is to display the name of the products and the name of the provider, for the products supplied by the provider 'Ajax SA'.

Tabbles
https://www.beecrowd.com.br/judge/en/problems/view/2617
*/
Select products.name, providers.name
From products 
Inner Join providers On products.id_providers = providers.id
Where providers.name = 'Ajax SA'