#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "employee.h"
#include <QMainWindow>
#include <QMediaPlayer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
        void musicClick();

private slots:

    void on_pushButton_ajouter_clicked();

    void on_pushButton_supprimer_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_aj_clicked();

    void on_pushButton_modiffier_clicked();

    void on_pushButton_supprimer_2_clicked();

    void on_pushButton_afficher_clicked();

    void on_pushButton_trier_clicked();

    void on_L_search_clicked();

    void on_pushButton_pdf_clicked();

    void on_pushButton_trie_clicked();

private:
    Ui::MainWindow *ui;
    employee Etmp;
        QMediaPlayer *musicC= new QMediaPlayer();
};
#endif // MAINWINDOW_H
