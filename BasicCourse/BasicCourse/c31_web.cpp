#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

//有这么多环境变量
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
//QUERY_STRING是get请求参数


//这玩意就是相当于在环境下运行应用程序，之后将控制台返回的结果返回给浏览器
//然后就没啥了 windows上面打包出来的是exe文件，linux上面打包出来的是cgi文件
// windows上面的话，需要在IIS上面配置一下，然后就可以通过浏览器访问了
// linux上面的话，需要在apache或者python脚本(python -m http.server --cgi 8001)执行、配置一下，然后就可以通过浏览器访问了
// 这个程序的作用就是返回环境变量
int main()
{

    cout << "Content-type:text/html\r\n\r\n";
    cout << "<html>\n";
    cout << "<head>\n";
    cout << "<title>CGI 环境变量</title>\n";
    cout << "</head>\n";
    cout << "<body>\n";
    cout << "<table border = \"0\" cellspacing = \"2\">";

    for (int i = 0; i < 24; i++)
    {
        cout << "<tr><td>" << ENV[i] << "</td><td>";
        // 尝试检索环境变量的值
        char* value = getenv(ENV[i].c_str());
        if (value != 0) {
            cout << value;
        }
        else {
            cout << "环境变量不存在。";
        }
        cout << "</td></tr>\n";
    }
    cout << "</table><\n";
    cout << "</body>\n";
    cout << "</html>\n";

    return 0;
}