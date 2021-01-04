/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QLineEdit *lineEdit_ID;
    QLineEdit *lineEdit_NOM;
    QLineEdit *lineEdit_PRENOM;
    QLineEdit *lineEdit_DEP;
    QLineEdit *lineEdit_SAL;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *pushButton_ajouter;
    QWidget *tab_4;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_ID_2;
    QLineEdit *lineEdit_NOM_2;
    QLineEdit *lineEdit_PRENOM_2;
    QLineEdit *lineEdit_DEP_2;
    QLineEdit *lineEdit_SAL_2;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QWidget *tab_5;
    QPushButton *pushButton_2;
    QTableView *tableView;
    QPushButton *pushButton_trier;
    QRadioButton *rb_desc_historique;
    QRadioButton *rb_asc_historique;
    QLineEdit *lineEdit_idstock;
    QPushButton *L_search;
    QRadioButton *radioButton_ID;
    QRadioButton *radioButton_salaire;
    QRadioButton *radioButton_nom;
    QWidget *tab_6;
    QLineEdit *lineEdit_12;
    QLabel *label_12;
    QPushButton *pushButton_supprimer;
    QWidget *tab_2;
    QTabWidget *tabWidget_3;
    QWidget *tab_7;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_prix_u;
    QLabel *label_4;
    QLineEdit *lineEdit_type;
    QLineEdit *lineEdit_quantite;
    QLineEdit *lineEdit_prix;
    QLineEdit *lineEdit_quantite_panne;
    QPushButton *pushButton_aj;
    QLabel *label_3;
    QLineEdit *lineEdit_fournisseur;
    QWidget *tab_8;
    QPushButton *pushButton_modiffier;
    QLabel *label_5;
    QLabel *label_17;
    QLineEdit *lineEdit_quantite_2;
    QLabel *label_18;
    QLineEdit *lineEdit_prix_2;
    QLabel *label_19;
    QLineEdit *lineEdit_quantite_panne_2;
    QLineEdit *lineEdit_type_2;
    QLineEdit *lineEdit_fournisseur_2;
    QLabel *label_20;
    QWidget *tab_9;
    QLabel *label_21;
    QLineEdit *lineEdit_mt;
    QPushButton *pushButton_supprimer_2;
    QWidget *tab_10;
    QTableView *tableView_2;
    QPushButton *pushButton_afficher;
    QPushButton *pushButton_pdf;
    QPushButton *pushButton_trie;
    QPushButton *pushButton_recherche;
    QRadioButton *rb_mat;
    QRadioButton *rb_mat_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1174, 600);
        MainWindow->setStyleSheet(QLatin1String("background-color: rgb(255, 247, 224);\n"
"background-color: rgb(208, 204, 211);\n"
"QHeaderView::section\n"
"{\n"
"    background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(227, 227, 227, 255),stop:1 rgba(187, 187, 187, 255));\n"
"	border: 1px solid #000;\n"
"    color: #000;\n"
"    text-align: left;\n"
"	padding: 4px;\n"
"	\n"
"}\n"
"\n"
"\n"
"QHeaderView::section:disabled\n"
"{\n"
"    background-color: #525251;\n"
"    color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section:checked\n"
"{\n"
"    background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(227, 227, 227, 255),stop:1 rgba(187, 187, 187, 255));\n"
"    color: #000;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::vertical::first,\n"
"QHeaderView::section::vertical::only-one\n"
"{\n"
"    border-top: 1px solid #353635;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::vertical\n"
"{\n"
"    border-top: 1px solid #353635;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::horizontal::first,\n"
""
                        "QHeaderView::section::horizontal::only-one\n"
"{\n"
"    border-left: 1px solid #353635;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::horizontal\n"
"{\n"
"    border-left: 1px solid #353635;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableCornerButton::section\n"
"{\n"
"    background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(227, 227, 227, 255),stop:1 rgba(187, 187, 187, 255));\n"
"	border: 1px solid #000;\n"
"    color: #fff;\n"
"\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(30, 20, 1061, 461));
        tabWidget->setStyleSheet(QLatin1String("QLineEdit {\n"
"	background-color:lightgrey;\n"
"	border-radius: 5px;\n"
"	border: 2px solid  rgb(194, 194, 194);\n"
"	padding-left: 10px;\n"
"}\n"
"QLineEdit:hover {\n"
"	border: 2px solid rgb(172, 172, 172);\n"
"}\n"
"QLineEdit:focus {\n"
"	border: 2px solid rgb(172, 172, 172);\n"
"}\n"
"\n"
"\n"
"QTabWidget::tab-bar {  \n"
"\n"
" }\n"
"\n"
" QTabBar::tab {\n"
"   background-color: rgb(255, 170, 255);\n"
"  color: black;\n"
"  padding: 10px;\n"
" }\n"
"\n"
" QTabBar::tab:selected {\n"
"background:rgb(255, 85, 255);\n"
" }\n"
"QTabBar::tab:hover {\n"
"background-color: rgb(255, 170, 255);\n"
"}"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(50, 0, 921, 381));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        lineEdit_ID = new QLineEdit(tab_3);
        lineEdit_ID->setObjectName(QStringLiteral("lineEdit_ID"));
        lineEdit_ID->setGeometry(QRect(110, 30, 113, 22));
        lineEdit_NOM = new QLineEdit(tab_3);
        lineEdit_NOM->setObjectName(QStringLiteral("lineEdit_NOM"));
        lineEdit_NOM->setGeometry(QRect(120, 70, 113, 22));
        lineEdit_PRENOM = new QLineEdit(tab_3);
        lineEdit_PRENOM->setObjectName(QStringLiteral("lineEdit_PRENOM"));
        lineEdit_PRENOM->setGeometry(QRect(130, 120, 113, 22));
        lineEdit_DEP = new QLineEdit(tab_3);
        lineEdit_DEP->setObjectName(QStringLiteral("lineEdit_DEP"));
        lineEdit_DEP->setGeometry(QRect(130, 170, 113, 22));
        lineEdit_SAL = new QLineEdit(tab_3);
        lineEdit_SAL->setObjectName(QStringLiteral("lineEdit_SAL"));
        lineEdit_SAL->setGeometry(QRect(130, 210, 113, 22));
        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 70, 56, 16));
        label_6->setStyleSheet(QStringLiteral("color: rgb(255, 0, 127);"));
        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 120, 56, 16));
        label_7->setStyleSheet(QStringLiteral("color: rgb(255, 0, 127);"));
        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 30, 56, 16));
        label_8->setStyleSheet(QStringLiteral("color: rgb(255, 0, 127);"));
        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 210, 56, 16));
        label_9->setStyleSheet(QStringLiteral("color: rgb(255, 0, 127);"));
        label_10 = new QLabel(tab_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 170, 101, 16));
        label_10->setStyleSheet(QStringLiteral("color: rgb(255, 0, 127);"));
        pushButton_ajouter = new QPushButton(tab_3);
        pushButton_ajouter->setObjectName(QStringLiteral("pushButton_ajouter"));
        pushButton_ajouter->setGeometry(QRect(350, 270, 93, 28));
        pushButton_ajouter->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #FFFFF;\n"
"border: 2px solid #F6CFCA;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #fff\n"
");\n"
"padding: 0.3rem 0.2rem;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
");\n"
" \n"
"    background-color:#FE7F9C	;\n"
"    border-radius: 15px;\n"
"}"));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        pushButton_3 = new QPushButton(tab_4);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(430, 300, 93, 28));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #FFFFF;\n"
"border: 2px solid #F6CFCA;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #fff\n"
");\n"
"padding: 0.3rem 0.2rem;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
");\n"
" \n"
"    background-color:#FE7F9C	;\n"
"    border-radius: 15px;\n"
"}"));
        lineEdit_ID_2 = new QLineEdit(tab_4);
        lineEdit_ID_2->setObjectName(QStringLiteral("lineEdit_ID_2"));
        lineEdit_ID_2->setGeometry(QRect(160, 40, 113, 22));
        lineEdit_NOM_2 = new QLineEdit(tab_4);
        lineEdit_NOM_2->setObjectName(QStringLiteral("lineEdit_NOM_2"));
        lineEdit_NOM_2->setGeometry(QRect(160, 90, 113, 22));
        lineEdit_PRENOM_2 = new QLineEdit(tab_4);
        lineEdit_PRENOM_2->setObjectName(QStringLiteral("lineEdit_PRENOM_2"));
        lineEdit_PRENOM_2->setGeometry(QRect(180, 150, 113, 22));
        lineEdit_DEP_2 = new QLineEdit(tab_4);
        lineEdit_DEP_2->setObjectName(QStringLiteral("lineEdit_DEP_2"));
        lineEdit_DEP_2->setGeometry(QRect(170, 210, 113, 22));
        lineEdit_SAL_2 = new QLineEdit(tab_4);
        lineEdit_SAL_2->setObjectName(QStringLiteral("lineEdit_SAL_2"));
        lineEdit_SAL_2->setGeometry(QRect(170, 250, 113, 22));
        label_11 = new QLabel(tab_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(50, 40, 56, 16));
        label_11->setStyleSheet(QStringLiteral("color: rgb(255, 0, 127);"));
        label_13 = new QLabel(tab_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(50, 100, 56, 16));
        label_13->setStyleSheet(QStringLiteral("color: rgb(255, 0, 127);"));
        label_14 = new QLabel(tab_4);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(70, 160, 56, 16));
        label_14->setStyleSheet(QStringLiteral("color: rgb(255, 0, 127);"));
        label_15 = new QLabel(tab_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(60, 220, 101, 16));
        label_15->setStyleSheet(QStringLiteral("color: rgb(255, 0, 127);"));
        label_16 = new QLabel(tab_4);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(60, 260, 56, 16));
        label_16->setStyleSheet(QStringLiteral("color: rgb(255, 0, 127);"));
        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        pushButton_2 = new QPushButton(tab_5);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(400, 240, 93, 28));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #FFFFF;\n"
"border: 2px solid #F6CFCA;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #fff\n"
");\n"
"padding: 0.3rem 0.2rem;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
");\n"
" \n"
"    background-color:#FE7F9C	;\n"
"    border-radius: 15px;\n"
"}"));
        tableView = new QTableView(tab_5);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(25, 21, 771, 221));
        tableView->setStyleSheet(QLatin1String("QHeaderView::section\n"
"{\n"
"    background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(227, 227, 227, 255),stop:1 rgba(187, 187, 187, 255));\n"
"	border: 1px solid #000;\n"
"    color: #000;\n"
"    text-align: left;\n"
"	padding: 4px;\n"
"	\n"
"}\n"
"\n"
"\n"
"QHeaderView::section:disabled\n"
"{\n"
"    background-color: #525251;\n"
"    color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section:checked\n"
"{\n"
"    background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(227, 227, 227, 255),stop:1 rgba(187, 187, 187, 255));\n"
"    color: #000;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::vertical::first,\n"
"QHeaderView::section::vertical::only-one\n"
"{\n"
"    border-top: 1px solid #353635;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::vertical\n"
"{\n"
"    border-top: 1px solid #353635;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::horizontal::first,\n"
"QHeaderView::section::horizontal::only-one\n"
"{\n"
"    border-left: 1px solid #3"
                        "53635;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::horizontal\n"
"{\n"
"    border-left: 1px solid #353635;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableCornerButton::section\n"
"{\n"
"    background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(227, 227, 227, 255),stop:1 rgba(187, 187, 187, 255));\n"
"	border: 1px solid #000;\n"
"    color: #fff;\n"
"\n"
"}"));
        pushButton_trier = new QPushButton(tab_5);
        pushButton_trier->setObjectName(QStringLiteral("pushButton_trier"));
        pushButton_trier->setGeometry(QRect(240, 280, 93, 28));
        pushButton_trier->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #FFFFF;\n"
"border: 2px solid #F6CFCA;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #fff\n"
");\n"
"padding: 0.3rem 0.2rem;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
");\n"
" \n"
"    background-color:#FE7F9C	;\n"
"    border-radius: 15px;\n"
"}"));
        rb_desc_historique = new QRadioButton(tab_5);
        rb_desc_historique->setObjectName(QStringLiteral("rb_desc_historique"));
        rb_desc_historique->setGeometry(QRect(140, 300, 97, 20));
        rb_desc_historique->setStyleSheet(QLatin1String("QRadioBotton {\n"
"\n"
"border: 2px solid #F6CFCA;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 , stop: 1 \n"
");\n"
"padding: 0.3rem 0.2rem;\n"
"}\n"
"QRadioBotton:hover {\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 , stop: 1 #bbb\n"
");\n"
" \n"
"    background-color:#98FB98	;\n"
"    border-radius: 15px;\n"
"}"));
        rb_asc_historique = new QRadioButton(tab_5);
        rb_asc_historique->setObjectName(QStringLiteral("rb_asc_historique"));
        rb_asc_historique->setGeometry(QRect(140, 270, 97, 20));
        lineEdit_idstock = new QLineEdit(tab_5);
        lineEdit_idstock->setObjectName(QStringLiteral("lineEdit_idstock"));
        lineEdit_idstock->setGeometry(QRect(670, 280, 113, 22));
        lineEdit_idstock->setStyleSheet(QLatin1String("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: white;"));
        L_search = new QPushButton(tab_5);
        L_search->setObjectName(QStringLiteral("L_search"));
        L_search->setGeometry(QRect(800, 280, 93, 28));
        L_search->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #FFFFF;\n"
"border: 2px solid #F6CFCA;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #fff\n"
");\n"
"padding: 0.3rem 0.2rem;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
");\n"
" \n"
"    background-color:#FE7F9C	;\n"
"    border-radius: 15px;\n"
"}"));
        radioButton_ID = new QRadioButton(tab_5);
        radioButton_ID->setObjectName(QStringLiteral("radioButton_ID"));
        radioButton_ID->setGeometry(QRect(800, 240, 97, 20));
        radioButton_salaire = new QRadioButton(tab_5);
        radioButton_salaire->setObjectName(QStringLiteral("radioButton_salaire"));
        radioButton_salaire->setGeometry(QRect(700, 240, 97, 20));
        radioButton_nom = new QRadioButton(tab_5);
        radioButton_nom->setObjectName(QStringLiteral("radioButton_nom"));
        radioButton_nom->setGeometry(QRect(580, 240, 97, 20));
        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        lineEdit_12 = new QLineEdit(tab_6);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(140, 60, 113, 22));
        label_12 = new QLabel(tab_6);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 60, 56, 16));
        pushButton_supprimer = new QPushButton(tab_6);
        pushButton_supprimer->setObjectName(QStringLiteral("pushButton_supprimer"));
        pushButton_supprimer->setGeometry(QRect(230, 240, 93, 28));
        pushButton_supprimer->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #FFFFF;\n"
"border: 2px solid #F6CFCA;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #fff\n"
");\n"
"padding: 0.3rem 0.2rem;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
");\n"
" \n"
"    background-color:#FE7F9C	;\n"
"    border-radius: 15px;\n"
"}"));
        tabWidget_2->addTab(tab_6, QString());
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget_3 = new QTabWidget(tab_2);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(60, 0, 811, 421));
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        label = new QLabel(tab_7);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 50, 56, 16));
        label_2 = new QLabel(tab_7);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 110, 71, 16));
        label_prix_u = new QLabel(tab_7);
        label_prix_u->setObjectName(QStringLiteral("label_prix_u"));
        label_prix_u->setGeometry(QRect(70, 150, 56, 16));
        label_4 = new QLabel(tab_7);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 190, 131, 16));
        lineEdit_type = new QLineEdit(tab_7);
        lineEdit_type->setObjectName(QStringLiteral("lineEdit_type"));
        lineEdit_type->setGeometry(QRect(220, 50, 113, 22));
        lineEdit_quantite = new QLineEdit(tab_7);
        lineEdit_quantite->setObjectName(QStringLiteral("lineEdit_quantite"));
        lineEdit_quantite->setGeometry(QRect(220, 100, 113, 22));
        lineEdit_prix = new QLineEdit(tab_7);
        lineEdit_prix->setObjectName(QStringLiteral("lineEdit_prix"));
        lineEdit_prix->setGeometry(QRect(220, 150, 113, 22));
        lineEdit_quantite_panne = new QLineEdit(tab_7);
        lineEdit_quantite_panne->setObjectName(QStringLiteral("lineEdit_quantite_panne"));
        lineEdit_quantite_panne->setGeometry(QRect(220, 190, 113, 22));
        pushButton_aj = new QPushButton(tab_7);
        pushButton_aj->setObjectName(QStringLiteral("pushButton_aj"));
        pushButton_aj->setGeometry(QRect(380, 40, 93, 28));
        pushButton_aj->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #FFFFF;\n"
"border: 2px solid #F6CFCA;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #fff\n"
");\n"
"padding: 0.3rem 0.2rem;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
");\n"
" \n"
"    background-color:#FE7F9C	;\n"
"    border-radius: 15px;\n"
"}"));
        label_3 = new QLabel(tab_7);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 220, 131, 16));
        lineEdit_fournisseur = new QLineEdit(tab_7);
        lineEdit_fournisseur->setObjectName(QStringLiteral("lineEdit_fournisseur"));
        lineEdit_fournisseur->setGeometry(QRect(220, 220, 113, 22));
        tabWidget_3->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        pushButton_modiffier = new QPushButton(tab_8);
        pushButton_modiffier->setObjectName(QStringLiteral("pushButton_modiffier"));
        pushButton_modiffier->setGeometry(QRect(360, 190, 93, 28));
        pushButton_modiffier->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #FFFFF;\n"
"border: 2px solid #F6CFCA;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #fff\n"
");\n"
"padding: 0.3rem 0.2rem;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
");\n"
" \n"
"    background-color:#FE7F9C	;\n"
"    border-radius: 15px;\n"
"}"));
        label_5 = new QLabel(tab_8);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 30, 56, 16));
        label_17 = new QLabel(tab_8);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(50, 80, 56, 16));
        lineEdit_quantite_2 = new QLineEdit(tab_8);
        lineEdit_quantite_2->setObjectName(QStringLiteral("lineEdit_quantite_2"));
        lineEdit_quantite_2->setGeometry(QRect(170, 80, 113, 22));
        label_18 = new QLabel(tab_8);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(50, 130, 56, 16));
        lineEdit_prix_2 = new QLineEdit(tab_8);
        lineEdit_prix_2->setObjectName(QStringLiteral("lineEdit_prix_2"));
        lineEdit_prix_2->setGeometry(QRect(170, 130, 113, 22));
        label_19 = new QLabel(tab_8);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(10, 180, 131, 16));
        lineEdit_quantite_panne_2 = new QLineEdit(tab_8);
        lineEdit_quantite_panne_2->setObjectName(QStringLiteral("lineEdit_quantite_panne_2"));
        lineEdit_quantite_panne_2->setGeometry(QRect(170, 180, 113, 22));
        lineEdit_type_2 = new QLineEdit(tab_8);
        lineEdit_type_2->setObjectName(QStringLiteral("lineEdit_type_2"));
        lineEdit_type_2->setGeometry(QRect(160, 30, 113, 22));
        lineEdit_type_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"	background-color:lightgrey;\n"
"	border-radius: 5px;\n"
"	border: 2px solid  rgb(194, 194, 194);\n"
"	padding-left: 10px;\n"
"}\n"
"QLineEdit:hover {\n"
"	border: 2px solid rgb(172, 172, 172);\n"
"}\n"
"QLineEdit:focus {\n"
"	border: 2px solid rgb(172, 172, 172);\n"
"}"));
        lineEdit_fournisseur_2 = new QLineEdit(tab_8);
        lineEdit_fournisseur_2->setObjectName(QStringLiteral("lineEdit_fournisseur_2"));
        lineEdit_fournisseur_2->setGeometry(QRect(170, 220, 113, 22));
        label_20 = new QLabel(tab_8);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(30, 220, 101, 16));
        tabWidget_3->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        label_21 = new QLabel(tab_9);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(80, 40, 56, 16));
        lineEdit_mt = new QLineEdit(tab_9);
        lineEdit_mt->setObjectName(QStringLiteral("lineEdit_mt"));
        lineEdit_mt->setGeometry(QRect(160, 40, 113, 22));
        pushButton_supprimer_2 = new QPushButton(tab_9);
        pushButton_supprimer_2->setObjectName(QStringLiteral("pushButton_supprimer_2"));
        pushButton_supprimer_2->setGeometry(QRect(350, 190, 93, 28));
        pushButton_supprimer_2->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #FFFFF;\n"
"border: 2px solid #F6CFCA;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #fff\n"
");\n"
"padding: 0.3rem 0.2rem;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
");\n"
" \n"
"    background-color:#FE7F9C	;\n"
"    border-radius: 15px;\n"
"}"));
        tabWidget_3->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        tableView_2 = new QTableView(tab_10);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(20, 20, 531, 271));
        tableView_2->setStyleSheet(QLatin1String("QHeaderView::section\n"
"{\n"
"    background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(227, 227, 227, 255),stop:1 rgba(187, 187, 187, 255));\n"
"	border: 1px solid #000;\n"
"    color: #000;\n"
"    text-align: left;\n"
"	padding: 4px;\n"
"	\n"
"}\n"
"\n"
"\n"
"QHeaderView::section:disabled\n"
"{\n"
"    background-color: #525251;\n"
"    color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section:checked\n"
"{\n"
"    background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(227, 227, 227, 255),stop:1 rgba(187, 187, 187, 255));\n"
"    color: #000;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::vertical::first,\n"
"QHeaderView::section::vertical::only-one\n"
"{\n"
"    border-top: 1px solid #353635;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::vertical\n"
"{\n"
"    border-top: 1px solid #353635;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::horizontal::first,\n"
"QHeaderView::section::horizontal::only-one\n"
"{\n"
"    border-left: 1px solid #3"
                        "53635;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::horizontal\n"
"{\n"
"    border-left: 1px solid #353635;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableCornerButton::section\n"
"{\n"
"    background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(227, 227, 227, 255),stop:1 rgba(187, 187, 187, 255));\n"
"	border: 1px solid #000;\n"
"    color: #fff;\n"
"\n"
"}"));
        pushButton_afficher = new QPushButton(tab_10);
        pushButton_afficher->setObjectName(QStringLiteral("pushButton_afficher"));
        pushButton_afficher->setGeometry(QRect(470, 320, 93, 28));
        pushButton_afficher->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #FFFFF;\n"
"border: 2px solid #F6CFCA;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #fff\n"
");\n"
"padding: 0.3rem 0.2rem;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
");\n"
" \n"
"    background-color:#FE7F9C	;\n"
"    border-radius: 15px;\n"
"}"));
        pushButton_pdf = new QPushButton(tab_10);
        pushButton_pdf->setObjectName(QStringLiteral("pushButton_pdf"));
        pushButton_pdf->setGeometry(QRect(280, 320, 93, 28));
        pushButton_pdf->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #FFFFF;\n"
"border: 2px solid #F6CFCA;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #fff\n"
");\n"
"padding: 0.3rem 0.2rem;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
");\n"
" \n"
"    background-color:#FE7F9C	;\n"
"    border-radius: 15px;\n"
"}"));
        pushButton_trie = new QPushButton(tab_10);
        pushButton_trie->setObjectName(QStringLiteral("pushButton_trie"));
        pushButton_trie->setGeometry(QRect(50, 320, 93, 28));
        pushButton_trie->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #FFFFF;\n"
"border: 2px solid #F6CFCA;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #fff\n"
");\n"
"padding: 0.3rem 0.2rem;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
");\n"
" \n"
"    background-color:#FE7F9C	;\n"
"    border-radius: 15px;\n"
"}"));
        pushButton_recherche = new QPushButton(tab_10);
        pushButton_recherche->setObjectName(QStringLiteral("pushButton_recherche"));
        pushButton_recherche->setGeometry(QRect(160, 340, 93, 28));
        pushButton_recherche->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #FFFFF;\n"
"border: 2px solid #F6CFCA;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #fff\n"
");\n"
"padding: 0.3rem 0.2rem;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
");\n"
" \n"
"    background-color:#FE7F9C	;\n"
"    border-radius: 15px;\n"
"}"));
        rb_mat = new QRadioButton(tab_10);
        rb_mat->setObjectName(QStringLiteral("rb_mat"));
        rb_mat->setGeometry(QRect(50, 300, 97, 20));
        rb_mat_2 = new QRadioButton(tab_10);
        rb_mat_2->setObjectName(QStringLiteral("rb_mat_2"));
        rb_mat_2->setGeometry(QRect(170, 300, 97, 20));
        tabWidget_3->addTab(tab_10, QString());
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1174, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(3);
        tabWidget_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "NOM:", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "PRENOM:", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "ID:", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "SALAIRE:", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "ADRESSE:", Q_NULLPTR));
        pushButton_ajouter->setText(QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "modiffier", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "ID:", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "NOM:", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "PRENOM:", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "DEPARTEMENT:", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "SALAIRE:", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "modiffier", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "afficher", Q_NULLPTR));
        pushButton_trier->setText(QApplication::translate("MainWindow", "trier", Q_NULLPTR));
        rb_desc_historique->setText(QApplication::translate("MainWindow", "descendant", Q_NULLPTR));
        rb_asc_historique->setText(QApplication::translate("MainWindow", "ascendant", Q_NULLPTR));
        L_search->setText(QApplication::translate("MainWindow", "recherche", Q_NULLPTR));
        radioButton_ID->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        radioButton_salaire->setText(QApplication::translate("MainWindow", "SALAIRE", Q_NULLPTR));
        radioButton_nom->setText(QApplication::translate("MainWindow", "NOM", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("MainWindow", "afficher", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "ID:", Q_NULLPTR));
        pushButton_supprimer->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "employee", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "TYPE:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "QUANTITE:", Q_NULLPTR));
        label_prix_u->setText(QApplication::translate("MainWindow", "PRIX:", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "QUANTITE_PANNE:", Q_NULLPTR));
        pushButton_aj->setText(QApplication::translate("MainWindow", "AJOUTER", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "FOURNISSEUR:", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_7), QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
        pushButton_modiffier->setText(QApplication::translate("MainWindow", "MODIFFIER", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "TYPE:", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "QUANTITE:", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "PRIX:", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "QUANTITE_PANNE:", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "FOURNISSEUR:", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_8), QApplication::translate("MainWindow", "modiffier", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "TYPE:", Q_NULLPTR));
        pushButton_supprimer_2->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_9), QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        pushButton_afficher->setText(QApplication::translate("MainWindow", "afficher", Q_NULLPTR));
        pushButton_pdf->setText(QApplication::translate("MainWindow", "PDF", Q_NULLPTR));
        pushButton_trie->setText(QApplication::translate("MainWindow", "trie", Q_NULLPTR));
        pushButton_recherche->setText(QApplication::translate("MainWindow", "recherche", Q_NULLPTR));
        rb_mat->setText(QApplication::translate("MainWindow", "assendant", Q_NULLPTR));
        rb_mat_2->setText(QApplication::translate("MainWindow", "descendant", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_10), QApplication::translate("MainWindow", "afficher", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "materiel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
