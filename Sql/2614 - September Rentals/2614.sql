Select customers.name "name",rentals.rentals_date "rentals_date"
From customers
Inner Join rentals On customers.id = rentals.id_customers
Where rentals.rentals_date >= '2016-09-01' 
and rentals.rentals_date <= '2016-09-30'