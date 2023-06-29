# 2615 - Expandindo o Negocio

A locadora tem objetivos de criar várias franquias espalhadas pelo Brasil. Para isso, queremos saber em quais cidades nossos clientes moram.

Para você nos ajudar, selecione o nome de todas as cidades onde a locadora tem clientes. Mas por favor, não repita o nome da cidade.

[Donwload SQL](https://www.beecrowd.com.br/repository-sql/2615.sql)

### Esquema

##### customers

| Coluna  | Tipo    |
| ------- | ------- |
| id (PK) | numeric |
| name    | varchar |
| street  | varchar |
| city    | varchar |

### Tabelas

##### customers

| id  | name                        | street                         | city          |
| --- | --------------------------- | ------------------------------ | ------------- |
| 1   | Giovanna Goncalves Oliveira | Rua Mato Grosso                | Canoas        |
| 2   | Kauã Azevedo Ribeiro        | Travessa Ibiá                  | Uberlândia    |
| 3   | Rebeca Barbosa Santos       | Rua Observatório Meteorológico | Salvador      |
| 4   | Sarah Carvalho Correia      | Rua Antônio Carlos da Silva    | Uberlândia    |
| 5   | João Almeida Lima           | Rua Rio Taiuva                 | Ponta Grossa  |
| 6   | Diogo Melo Dias             | Rua Duzentos e Cinqüenta       | Várzea Grande |

## SQL

```sql
Select Distinct city
From customers
```

## Exemplo de Saída

| city          |
| ------------- |
| Uberlândia    |
| Canoas        |
| Ponta Grossa  |
| Várzea Grande |
| Salvador      |
