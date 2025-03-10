#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    cin.ignore(); // to ignore the newline character after the integer input

    // Vector to store the lines of the HRML input
    vector<string> HRML_lines(n);
    for (int i = 0; i < n; ++i)
    {
        getline(cin, HRML_lines[i]);
    }

    // Vector to store the queries
    vector<string> queries(q);
    for (int i = 0; i < q; ++i)
    {
        getline(cin, queries[i]);
    }

    // Process HRML lines to build a tag attribute map
    map<string, map<string, string>> tag_map;
    vector<string> tag_stack;

    for (const string& line : HRML_lines)
    {
        if (line.substr(0, 2) == "</") // closing tag
        {
            tag_stack.pop_back();
        }
        else
        {
            stringstream ss(line);
            string tag, attr, value;
            char ch;
            ss >> ch >> tag;
            if (tag.back() == '>') tag.pop_back(); // remove '>' from the end of tag

            if (tag.back() == '/') tag.pop_back(); // self-closing tag, remove '/'
            tag_stack.push_back(tag);

            string tag_path = "";
            for (const string& t : tag_stack)
            {
                if (tag_path == "")
                    tag_path = t;
                else
                    tag_path += "." + t;
            }

            // Read attributes
            while (ss >> attr)
            {
                ss >> ch; // skip '='
                ss >> value;
                if (value.back() == '>') value.pop_back(); // remove '>' from the end
                if (value.back() == '"') value.pop_back(); // remove '"' from the end
                if (value.front() == '"') value.erase(0, 1); // remove '"' from the beginning

                tag_map[tag_path][attr] = value;
            }
        }
    }

    // Process queries
    for (const string& query : queries)
    {
        string tag_path = query.substr(0, query.find('~'));
        string attr_name = query.substr(query.find('~') + 1);

        if (tag_map.find(tag_path) != tag_map.end() && tag_map[tag_path].find(attr_name) != tag_map[tag_path].end())
        {
            cout << tag_map[tag_path][attr_name] << endl;
        }
        else
        {
            cout << "Not Found!" << endl;
        }
    }

    return 0;
}
