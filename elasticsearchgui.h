#ifndef ELASTICSEARCHGUI_H
#define ELASTICSEARCHGUI_H

#include <QMainWindow>

namespace Ui {
class ElasticSearchGUI;
}

class ElasticSearchGUI : public QMainWindow
{
    Q_OBJECT

public:
    explicit ElasticSearchGUI(QWidget *parent = 0);
    ~ElasticSearchGUI();

private slots:
    void on_categorySel_currentIndexChanged(int index);
    void on_pushButton_released();

    void on_lineEdit_returnPressed();

private:
    Ui::ElasticSearchGUI *ui;
    void ask(QString&);

};

#endif // ELASTICSEARCHGUI_H
