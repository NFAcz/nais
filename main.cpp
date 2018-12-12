#include "elasticsearchgui.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ElasticSearchGUI w;
    w.show();

    return a.exec();
}
