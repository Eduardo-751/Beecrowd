/*
A video store contractor hired her services to catalog her movies. They need you to select the code and the name of the movies whose description of the genre is 'Action'.

Tabbles
https://www.beecrowd.com.br/judge/en/problems/view/2611
*/
select movies.id, movies.name
From movies
right Join genres
on movies.id_genres = genres.id
Where genres.description = 'Action'