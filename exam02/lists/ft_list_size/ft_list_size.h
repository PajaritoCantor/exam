#ifndef LIST_H
# define LIST_H

typedef struct    s_list
{
    struct s_list *next;  // puntero al siguiente nodo
    void          *data;  // contenido del nodo
}                 t_list;

#endif