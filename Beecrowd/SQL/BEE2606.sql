/*
  Matheus dos Santos Ribeiro Silva
  BEE 2606 - "Categories"
  13/01/2022
*/

SELECT p.id, p.name FROM products as p INNER JOIN
categories as c ON p.id_categories = c.id WHERE c.name LIKE 'super%';