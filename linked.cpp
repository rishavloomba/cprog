#include<iostream>
#include<math.h>
using namespace std;
struct node
{
  int data;
  node *next;

};
  void add_data(node **h,int a)
    {
     node *temp=new node;
     temp->data=a;
    temp->next=NULL;

    if(*h==NULL)
    {
        *h=temp;
        tail=temp;
    }
    else
    {

     node *tem=new node;
tem=*h;
while(tem!=NULL)
{
    tem=tem->next;
}
tem=temp;

    }
    }
void display(node *h)
{
node *temp=new node;
temp=h;
if(temp!=NULL)
{
    cout<<temp->data<<"->";
    temp=temp->next;


}

}
};

int main()
{
int a;

linked_list li;
node *headd=new node;
headd=NULL;
char ch='z';
while(ch=='z')
{
cin>>a;


li.add_data(&headd,a);
cin>>ch;
}


li.display(headd);
return 0;
}


