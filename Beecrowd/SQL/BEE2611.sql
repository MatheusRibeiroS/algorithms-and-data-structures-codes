/*
  Matheus dos Santos Ribeiro Silva
  BEE 2611 - "Action Movies"
  28/08/2022
*/

SELECT m.id, m.name FROM movies m, genres g WHERE g.description = 'Action' AND m.id_genres = g.id; 