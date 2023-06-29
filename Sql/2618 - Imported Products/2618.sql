Select products.name, providers.name, categories.name
From products
Right Join providers On products.id_providers = providers.id
Right Join categories On products.id_categories = categories.id
Where providers.name = 'Sansul SA' And categories.name = 'Imported'