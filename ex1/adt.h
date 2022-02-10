struct student
{
   int regno;
   char name[10];
   char res;
   int m1,m2,m3,total;
 
};
struct arr
{   
   struct student a[100];
   int n;
   

};

void init(struct arr *ptr,int no );
void c(struct student *a);
void display(struct arr *ptr);
void insertFront(struct arr *ptr,struct student s);
void insertEnd(struct arr *ptr, struct student s);
void insertRegNo(struct arr *ptr, struct student s, int r);
struct arr searchName(struct arr *ptr, char name[10]);
void delet(struct arr *ptr, int r);
void computeResult(struct arr *ptr);
struct arr listResult(struct arr*ptr);
 
int listClass(struct arr *ptr);
