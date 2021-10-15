/*
  Matheus dos Santos Ribeiro Silva
  URI 2605 - "Executive Representatives"
  15/10/2021
*/

SELECT p.name, pv.name FROM products as p INNER JOIN 
providers as pv ON  p.id_providers = pv.id WHERE p.id_categories = 6;

