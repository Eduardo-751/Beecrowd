SELECT products.name, p.name, products.price
FROM categories c INNER JOIN products products ON
     products.id_categories = c.id INNER JOIN providers p ON
     products.id_providers = providers.id
WHERE c.name = 'Super Luxury' AND products.price > 1000