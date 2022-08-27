/*
  Matheus dos Santos Ribeiro Silva
  BEE 2609 - "Products by Categories"
  14/01/2022
*/

SELECT c.name, SUM(p.amount) FROM categories as c INNER JOIN
products as p ON c.id = p.id_categories GROUP BY c.name;