SELECT p.product_name,s.year,s.price 
FROM Sales as s
JOIN Product as p
where p.product_id = s.product_id;
