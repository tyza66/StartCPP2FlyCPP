#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

//����ô�໷������
const string ENV[24] = {
        "COMSPEC", "DOCUMENT_ROOT", "GATEWAY_INTERFACE",
        "HTTP_ACCEPT", "HTTP_ACCEPT_ENCODING",
        "HTTP_ACCEPT_LANGUAGE", "HTTP_CONNECTION",
        "HTTP_HOST", "HTTP_USER_AGENT", "PATH",
        "QUERY_STRING", "REMOTE_ADDR", "REMOTE_PORT",
        "REQUEST_METHOD", "REQUEST_URI", "SCRIPT_FILENAME",
        "SCRIPT_NAME", "SERVER_ADDR", "SERVER_ADMIN",
        "SERVER_NAME","SERVER_PORT","SERVER_PROTOCOL",
        "SERVER_SIGNATURE","SERVER_SOFTWARE" };
//QUERY_STRING��get�������


//����������൱���ڻ���������Ӧ�ó���֮�󽫿���̨���صĽ�����ظ������
//Ȼ���ûɶ�� windows��������������exe�ļ���linux��������������cgi�ļ�
// windows����Ļ�����Ҫ��IIS��������һ�£�Ȼ��Ϳ���ͨ�������������
// linux����Ļ�����Ҫ��apache����python�ű�(python -m http.server --cgi 8001)ִ�С�����һ�£�Ȼ��Ϳ���ͨ�������������
// �����������þ��Ƿ��ػ�������
int main()
{

    cout << "Content-type:text/html\r\n\r\n";
    cout << "<html>\n";
    cout << "<head>\n";
    cout << "<title>CGI ��������</title>\n";
    cout << "</head>\n";
    cout << "<body>\n";
    cout << "<table border = \"0\" cellspacing = \"2\">";

    for (int i = 0; i < 24; i++)
    {
        cout << "<tr><td>" << ENV[i] << "</td><td>";
        // ���Լ�������������ֵ
        char* value = getenv(ENV[i].c_str());
        if (value != 0) {
            cout << value;
        }
        else {
            cout << "�������������ڡ�";
        }
        cout << "</td></tr>\n";
    }
    cout << "</table><\n";
    cout << "</body>\n";
    cout << "</html>\n";

    return 0;
}