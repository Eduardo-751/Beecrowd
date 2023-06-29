Select products.name, providers.name
From products 
Inner Join providers On products.id_providers = providers.id
Where providers.name = 'Ajax SA'