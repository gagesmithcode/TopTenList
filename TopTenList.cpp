//Manages a list of top ten hyperlinks
#include <string>
#include <iostream>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;

TopTenList::TopTenList()
{
    //Set the size of the list
    _list.resize(11);
}

void TopTenList::set_at(int index, Hyperlink link)
{
    //Place the link at the specific index in the list
    _list[index] = link;
}

Hyperlink TopTenList::get(int index)
{
    if (index >= 0 && index < _list.size())
    {
        return _list[index];
    }
    else
    {
        return Hyperlink();
    }
}

void TopTenList::display_forward()
{
    for(int i = 1; i < _list.size(); i++)
    {
        std::cout << i << ". " << "<" << _list[i].text << "> " << _list[i].url << std::endl;
    }
}

// void TopTenList::display_backward()
// {

// }