/*
  Matheus dos Santos Ribeiro Silva
  BEE 2613 - "Cheap Movies"
  28/08/2022
*/

SELECT m.id, m.name FROM movies m, prices p WHERE m.id_prices = p.id AND p.value < 2.00;
