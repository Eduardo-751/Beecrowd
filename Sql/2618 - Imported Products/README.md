# 2618 - Produtos Importados

O departamento de importação da nossa empresa precisa de um relatório sobre a importação de produtos do nosso fornecedor Sansul.

Sua tarefa é exibir o nome dos produtos, o nome do fornecedor e o nome da categoria para os produtos fornecidos pelo fornecedor 'Sansul SA' e cujo nome da categoria seja 'Imported'.

[Donwload SQL](https://www.beecrowd.com.br/repository-sql/2618.sql)

### Esquema

##### products

| Coluna        | Tipo               |
| ------------- | ------------------ |
| id (PK)       | numérico           |
| name          | caractere variável |
| amount        | numérico           |
| price         | numérico           |
| id_providers  | numérico (FK)      |
| id_categories | numérico (FK)      |

##### providers

| Coluna  | Tipo               |
| ------- | ------------------ |
| id (PK) | numérico           |
| name    | caractere variável |
| street  | caractere variável |
| city    | caractere variável |
| state   | char (2)           |

##### categories

| Coluna  | Tipo               |
| ------- | ------------------ |
| id (PK) | numérico           |
| name    | caractere variável |

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
Select products.name, providers.name, categories.name
From products
Right Join providers On products.id_providers = providers.id
Right Join categories On products.id_categories = categories.id
Where providers.name = 'Sansul SA' And categories.name = 'Imported'
```

## Exemplo de Saída

| name | name      | name     |
| ---- | --------- | -------- |
| TV   | Sansul SA | Imported |
