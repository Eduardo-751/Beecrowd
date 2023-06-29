Select products.name, providers.name 
From products 
Right Join providers
ON products.id_providers = providers.id
where products.id_categories = 6;