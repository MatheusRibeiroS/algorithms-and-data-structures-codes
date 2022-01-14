/*
  Matheus dos Santos Ribeiro Silva
  URI 2609 - "Products by Categories"
  13/01/2022
*/

SELECT p.name, p.id_categories FROM products as p INNER JOIN
categories as c ON COUNT()