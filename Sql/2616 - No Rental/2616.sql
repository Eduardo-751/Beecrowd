Select id, name
From customers
Where id Not in (Select id_customers 
                 From locations)