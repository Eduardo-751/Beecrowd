# 2613 - Filmes em Promoção

Antigamente a locadora fez um evento em que vários filmes estavam em promoção, queremos saber que filmes eram esses.
Seu trabalho para nós ajudar é selecionar o ID e o nome dos filmes cujo preço for menor que 2.00.

[Donwload SQL](https://www.beecrowd.com.br/repository-sql/2613.sql)

### Esquema

##### movies

| Coluna    | Tipo    |
| --------- | ------- |
| id (PK)   | numeric |
| name      | varchar |
| id_prices | numeric |

##### prices

| Coluna    | Tipo    |
| --------- | ------- |
| id (PK)   | numeric |
| categorie | varchar |
| value     | numeric |

### Tabelas

##### movies

| id  | name                         | id_prices |
| --- | ---------------------------- | --------- |
| 1   | Batman                       | 3         |
| 2   | The Battle of the Dark River | 3         |
| 3   | White Duck                   | 5         |
| 4   | Breaking Barriers            | 4         |
| 5   | The Two Hours                | 2         |

##### prices

| id  | categorie   | value |
| --- | ----------- | ----- |
| 1   | Releases    | 3.50  |
| 2   | Bronze Seal | 2.00  |
| 3   | Silver Seal | 2.50  |
| 4   | Gold Seal   | 3.00  |
| 5   | Promotion   | 1.50  |

## SQL

```sql
select movies.id, movies.name
From movies
right Join prices
on movies.id_prices = prices.id
Where prices.value < 2;
```

## Exemplo de Saída

| id  | name       |
| --- | ---------- |
| 3   | White Duck |
