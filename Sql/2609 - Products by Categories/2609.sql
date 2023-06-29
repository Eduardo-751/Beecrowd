select categories.name, Sum(products.amount)
From categories
Right Join products
On categories.id = products.id_categories
Group by categories.name;