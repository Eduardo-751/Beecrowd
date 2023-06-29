select movies.id, movies.name
From movies
right Join genres
on movies.id_genres = genres.id
Where genres.description = 'Action'