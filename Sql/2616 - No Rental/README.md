# 2616 - Nenhuma Locação

A locadora pretende fazer uma promoção para os clientes que ainda não fizeram nenhuma locação. Seu trabalho é nos entregar o ID e o nome dos clientes que não realizaram nenhuma locação. Ordene a saída por ID.

[Donwload SQL](https://www.beecrowd.com.br/repository-sql/2616.sql)

### Esquema

##### customers

| Coluna  | Tipo    |
| ------- | ------- |
| id (PK) | numeric |
| name    | varchar |
| street  | varchar |
| city    | varchar |

##### locations

| Coluna         | Tipo           |
| -------------- | -------------- |
| id (PK)        | numeric        |
| locations_date | date (ISO/YMD) |
| id_customers   | numeric        |

### Tabelas

##### customers

| id  | name                        | street                         | city          |
| --- | --------------------------- | ------------------------------ | ------------- |
| 1   | Giovanna Goncalves Oliveira | Rua Mato Grosso                | Canoas        |
| 2   | Kauã Azevedo Ribeiro        | Travessa Ibiá                  | Uberlândia    |
| 3   | Rebeca Barbosa Santos       | Rua Observatório Meteorológico | Salvador      |
| 4   | Sarah Carvalho Correia      | Rua Antônio Carlos da Silva    | Apucarana     |
| 5   | João Almeida Lima           | Rua Rio Taiuva                 | Ponta Grossa  |
| 6   | Diogo Melo Dias             | Rua Duzentos e Cinqüenta       | Várzea Grande |

##### locations

| id  | locations_date | id_customers |
| --- | -------------- | ------------ |
| 1   | 2016-10-09     | 3            |
| 2   | 2016-09-02     | 1            |
| 3   | 2016-08-02     | 4            |
| 4   | 2016-09-02     | 2            |
| 5   | 2016-03-02     | 6            |
| 6   | 2016-04-04     | 4            |

## SQL

```sql
Select id, name
From customers
Where id Not in (Select id_customers
                 From locations)
```

## Exemplo de Saída

| id  | name              |
| --- | ----------------- |
| 5   | João Almeida Lima |
