struct list
{
 char data;
 struct list *next;
 struct list *prev;
 
   
};
void create(struct list *header,char c);
void display(struct list *header);
void search(struct list *header,char c);

void insertEnd(struct list *header,char c);
void del(struct list *header,char c);

void pali(struct list *header,struct list *p);
void vc(struct list *header);
void swap(struct list *header,int c);
