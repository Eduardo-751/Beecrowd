# 2606 - Categorias

Quando os dados foram migrados de Banco de Dados, houve um pequeno mal-entendido por parte do antigo DBA. Seu chefe precisa que você exiba o código e o nome dos produtos, cuja categoria inicie com 'super'.

[Donwload SQL](https://www.beecrowd.com.br/repository-sql/2606.sql)

### Esquema

##### products

| Coluna             | Tipo    |
| ------------------ | ------- |
| id (PK)            | numeric |
| name               | varchar |
| amount             | numeric |
| price              | numeric |
| id_categories (FK) | numeric |

##### categories

| Coluna  | Tipo    |
| ------- | ------- |
| id (PK) | numeric |
| name    | varchar |

### Tabelas

##### products

| id  | name               | amount | price  | id_categories |
| --- | ------------------ | ------ | ------ | ------------- |
| 1   | Lampshade          | 100    | 800    | 4             |
| 2   | Table for painting | 1000   | 560    | 9             |
| 3   | Notebook desk      | 10000  | 25.50  | 9             |
| 4   | Computer desk      | 350    | 320.50 | 6             |
| 5   | Chair              | 3000   | 210.64 | 9             |
| 6   | Home alarm         | 750    | 460    | 4             |

##### categories

| id  | name         |
| --- | ------------ |
| 1   | old stock    |
| 2   | new stock    |
| 3   | modern       |
| 4   | commercial   |
| 5   | recyclable   |
| 6   | executive    |
| 7   | superior     |
| 8   | wood         |
| 9   | super luxury |
| 10  | vintage      |

## SQL

```sql
Select products.id, products.name
From products
Right Join categories
ON products.id_categories = categories.id
where categories.name like 'super%'
```

## Exemplo de Saída

| id  | name               |
| --- | ------------------ |
| 2   | Table for painting |
| 3   | Notebook desk      |
| 5   | Chair              |
