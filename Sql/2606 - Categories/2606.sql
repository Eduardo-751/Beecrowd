Select products.id, products.name 
From products 
Right Join categories
ON products.id_categories = categories.id
where categories.name like 'super%'