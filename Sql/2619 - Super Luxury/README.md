# 2619 - Super Luxo

A nossa empresa está querendo fazer um novo contrato para o fornecimento de novos produtos superluxuosos, e para isso precisamos de alguns dados dos nossos produtos.

Seu trabalho é exibir o nome dos produtos, nome dos fornecedores e o preço, para os produtos cujo preço seja maior que 1000 e sua categoria seja 'Super Luxury'.

[Donwload SQL](https://www.beecrowd.com.br/repository-sql/2619.sql)

### Esquema

##### products

| Coluna             | Tipo                    |
| ------------------ | ----------------------- |
| id (PK)            | numeric                 |
| name               | character varying (255) |
| amount             | numeric                 |
| price              | numeric                 |
| id_providers (FK)  | numeric                 |
| id_categories (FK) | numeric                 |

##### providers

| Coluna  | Tipo                    |
| ------- | ----------------------- |
| id (PK) | numeric                 |
| name    | character varying (255) |
| street  | character varying (255) |
| city    | character varying (255) |
| state   | char (2)                |

##### categories

| Coluna  | Tipo                    |
| ------- | ----------------------- |
| id (PK) | numeric                 |
| name    | character varying (255) |

### Tabelas

##### products

| id  | name            | amount | price   | id_providers | id_categories |
| --- | --------------- | ------ | ------- | ------------ | ------------- |
| 1   | Blue Chair      | 30     | 300.00  | 5            | 5             |
| 2   | Red Chair       | 50     | 2150.00 | 2            | 1             |
| 3   | Disney Wardrobe | 400    | 829.50  | 4            | 1             |
| 4   | Blue Toaster    | 20     | 9.90    | 3            | 1             |
| 5   | TV              | 30     | 3000.25 | 2            | 2             |

##### providers

| id  | name         | street                        | city           | state |
| --- | ------------ | ----------------------------- | -------------- | ----- |
| 1   | Ajax SA      | Rua Presidente Castelo Branco | Porto Alegre   | RS    |
| 2   | Sansul SA    | Av Brasil                     | Rio de Janeiro | RJ    |
| 3   | South Chairs | Rua do Moinho                 | Santa Maria    | RS    |
| 4   | Elon Electro | Rua Apolo                     | São Paulo      | SP    |
| 5   | Mike Electro | Rua Pedro da Cunha            | Curitiba       | PR    |

##### categories

| id  | name         |
| --- | ------------ |
| 1   | Super Luxury |
| 2   | Imported     |
| 3   | Tech         |
| 4   | Vintage      |
| 5   | Supreme      |

## SQL

```sql
SELECT products.name, p.name, products.price
FROM categories c INNER JOIN products products ON
     products.id_categories = c.id INNER JOIN providers p ON
     products.id_providers = providers.id
WHERE c.name = 'Super Luxury' AND products.price > 1000
```

## Exemplo de Saída

| name      | name      | price   |
| --------- | --------- | ------- |
| Red Chair | Sansul SA | 2150.00 |
