#include <bits/stdc++.h>

using namespace std;

struct node
{
    int counter;
    node *zero;
    node *one ;

    node()
    {
        counter = 0 ;
        zero = NULL;
        one = NULL;
    }
};

void Clear(node *root)
{
    if(root -> zero != NULL)
    {
        Clear(root->zero);
    }
    if(root -> one != NULL)
    {
        Clear(root->one);
    }
    delete root;
}

void insert_value(node *root , int value )
{
    node *currentNode = root;
    int currentBit;
    for(int i = 31 ; i >= 0 ; i-- )
    {
        currentBit = 1&(value>>i);

        if(currentBit == 1)
        {
            if(currentNode->one != NULL)
            {
                currentNode = currentNode->one;
                currentNode->counter++;
            }
            else
            {
                node *newNode = new node;

                currentNode->one = newNode;
                currentNode = currentNode->one;
                currentNode->counter++;
            }
        }
        else if(currentBit == 0)
        {
            if(currentNode->zero != NULL)
            {
                currentNode = currentNode->zero;
                currentNode->counter++;
            }
            else
            {
                node *newNode = new node;

                currentNode->zero = newNode;
                currentNode = currentNode->zero;
                currentNode->counter++;
            }
        }
    }
}

void delete_value(node *root , int value )
{
    node *currentNode = root;
    int currentBit;
    for(int i = 31 ; i >= 0 ; i-- )
    {
        currentBit = (1&(value>>i));

        if(currentBit == 1)
        {

            currentNode = currentNode->one;
            currentNode->counter--;

        }
        else if(currentBit == 0)
        {
            currentNode = currentNode->zero;
            currentNode->counter--;
        }
    }
}

int findValue(node *root , int value)
{
    node *currentNode = root;
    int ans =  0 ;
    int neededBit;
    for(int i = 31 ; i>= 0 ; i--)
    {
        neededBit = (1 & (value >> i))^1;
        ans = ans << 1;
        if(neededBit == 1)
        {
            //cout << "i = " <<i<< endl;
            if(currentNode->one != NULL && currentNode->one->counter > 0)
            {
               // cout << 1 ;
                currentNode = currentNode->one;
                ans += 1;
            }
            else
            {
                //cout << 0;
                currentNode = currentNode->zero;
            }
        }
        else if(neededBit == 0)
        {
            //cout << "i = " <<i<< endl;
            if(currentNode->zero != NULL && currentNode->zero->counter > 0)
            {
                //cout << 0;
                currentNode = currentNode->zero;
            }
            else
            {
                //cout << 1;
                currentNode = currentNode->one;
                ans+=1;
            }
        }
    }
    return ans ;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int marker = 1 << 31;

    node *root = new node;

    int n ;
    char command ;
    int value ;

    cin >> n ;
    insert_value(root , 0);
    for(int i = 0 ; i < n ; i++)
    {
        //cout << i << endl ;
        cin >> command >> value;
        //cout << command << " " << value << endl;
        if(command == '+')
        {
            insert_value(root , value);
        }
        else if(command == '-')
        {
            delete_value(root , value);
        }
        else if(command == '?')
        {
            printf("%d\n",findValue(root , value) ^ value);
        }
    }
    Clear(root);

    return 0;
}
