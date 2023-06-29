# 2608 - Maior e Menor Preço

O setor financeiro da nossa empresa, está querendo saber os menores e maiores valores dos produtos, que vendemos.

Para isso exiba somente o maior e o menor preço da tabela produtos.

[Donwload SQL](https://www.beecrowd.com.br/repository-sql/2608.sql)

### Esquema

##### products

| Coluna  | Tipo    |
| ------- | ------- |
| id (PK) | numeric |
| name    | varchar |
| amount  | numeric |
| price   | numeric |

### Tabelas

##### products

| id  | name               | amount | price  |
| --- | ------------------ | ------ | ------ |
| 1   | Two-doors wardrobe | 100    | 800    |
| 2   | Dining table       | 1000   | 560    |
| 3   | Towel holder       | 10000  | 25.50  |
| 4   | Computer desk      | 350    | 320.50 |
| 5   | Chair              | 3000   | 210.64 |
| 6   | Single bed         | 750    | 460    |

## SQL

```sql
Select Max(price), Min(price)
From products;
```

## Exemplo de Saída

| price | price |
| ----- | ----- |
| 800   | 25.50 |
