#include <QtGui>
#include <QtWebKit>

int main(int argc, char **argv) {
    QApplication app(argc, argv);
    QWebView view;
    view.load(QUrl("http://ngoprek.fajran.web.id"));
    view.show();
    return app.exec();
}
