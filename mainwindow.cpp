#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "connection.h"
#include"materiel.h"
#include"QMessageBox"
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include<QTextDocument>
#include <QDialog>
#include<QFileInfo>
#include<QFileDialog>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    employee Etmp;
    materiel m;

    ui->setupUi(this);
    ui->tableView->setModel(Etmp.afficher());

       ui->tableView->setModel(m.afficher());
        QValidator *validator_String=new QRegExpValidator(QRegExp("[A-Za-z ' ']+"),this);
        ui->lineEdit_NOM->setValidator(validator_String);
        ui->lineEdit_PRENOM->setValidator(validator_String);
        ui->lineEdit_DEP->setValidator(validator_String);
        ui->lineEdit_DEP_2->setValidator(validator_String);
        ui->lineEdit_NOM_2->setValidator(validator_String);
        ui->lineEdit_PRENOM_2->setValidator(validator_String);
        ui->lineEdit_fournisseur->setValidator(validator_String);
        ui->lineEdit_fournisseur_2->setValidator(validator_String);
        ui->lineEdit_ID->setValidator(new QIntValidator(10000000, 99999999, this));
        ui->lineEdit_12->setValidator(new QIntValidator(10000000, 99999999, this));
        ui->lineEdit_SAL->setValidator(new QIntValidator(10000000, 99999999, this));
        ui->lineEdit_SAL_2->setValidator(new QIntValidator(10000000, 99999999, this));
        ui->lineEdit_prix->setValidator(new QIntValidator(10000000, 99999999, this));
        ui->lineEdit_prix_2->setValidator(new QIntValidator(10000000, 99999999, this));









}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_ajouter_clicked()
{
    musicClick();
    employee h;
    int id=ui->lineEdit_ID->text().toInt();
    int salaire=ui->lineEdit_SAL->text().toInt();
    QString nom=ui->lineEdit_NOM->text();
    QString prenom=ui->lineEdit_PRENOM->text();
    QString adresse=ui->lineEdit_DEP->text();

employee E(nom,prenom,adresse,id,salaire);
bool test=E.ajouter();
if(test)
{
    ui->tableView->setModel(Etmp.afficher());
    QMessageBox::information(nullptr,QObject::tr("OK"),QObject::tr("ajout effectue \n click cancel to exit."), QMessageBox::Cancel);
}

}

void MainWindow::on_pushButton_supprimer_clicked()
{
    musicClick();

    employee Etmp;
    Etmp.setId(ui->lineEdit_12->text().toInt());
    QMessageBox msgbox;
        msgbox.setWindowTitle("supprimer");
        msgbox.setText("voulez_vous supprimer cette réclamation?");
        msgbox.setStandardButtons(QMessageBox ::Yes);
        msgbox.addButton(QMessageBox::No);
        if(msgbox.exec()==QMessageBox::Yes)
        {
  bool test=Etmp.supprimer(Etmp.getID());
  QMessageBox msgBox;

  if(test)
  {
      QMessageBox::information(nullptr,QObject::tr("OK"),QObject::tr("suppression effectuée \n click cancel to exit."), QMessageBox::Cancel);
      {ui->tableView->setModel(Etmp.afficher());}

  }
  else
      QMessageBox::critical(nullptr,QObject::tr("NOT OK"),QObject::tr("suppression non effectuer.\n click cancel to exis."), QMessageBox::Cancel);
  msgBox.exec();

}
}


void MainWindow::on_pushButton_2_clicked() /*boutton afficher*/
{
    musicClick();

    employee Etmp;

    {ui->tableView->setModel(Etmp.afficher());}

}

void MainWindow::on_pushButton_3_clicked() /*boutton moddifier*/
{
    musicClick();

    employee p;
        int id = ui->lineEdit_ID_2->text().toInt();
        int salaire= ui->lineEdit_SAL_2->text().toInt();
        QString nom = ui->lineEdit_NOM_2->text();
        QString prenom = ui->lineEdit_PRENOM_2->text();
        QString adresse= ui->lineEdit_DEP_2->text();


        employee  (nom,prenom,adresse,id,salaire) ;
        bool test =p.modifier(id,salaire,nom,prenom,adresse);
        if(test)
        {ui->tableView->setModel(p.afficher());
            QMessageBox::information(nullptr, QObject::tr("modifier un employe"),
                                     QObject::tr("employe  modifié.\n"
                                                 "Click Cancel to exit."), QMessageBox::Cancel);}
        else
            QMessageBox::critical(nullptr, QObject::tr("Modifier un employe"),
                                  QObject::tr("Erreur !.\n"
                                              "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_pushButton_aj_clicked()
{
    musicClick();

    QString type=ui->lineEdit_type->text();
    int quantite_t=ui->lineEdit_quantite->text().toInt();

    int prix_u=ui->lineEdit_prix->text().toInt();
    int quantite_p=ui->lineEdit_quantite_panne->text().toInt();
    QString fournisseur=ui->lineEdit_fournisseur->text();


materiel E(type,quantite_t , prix_u,quantite_p,fournisseur);
bool test=E.ajouter();
if(test)
{
    QMessageBox::information(nullptr,QObject::tr("OK"),QObject::tr("ajout effectue \n click cancel to exit."), QMessageBox::Cancel);
}



}

void MainWindow::on_pushButton_modiffier_clicked()
{
    musicClick();

    musicClick();
    materiel m;



    QString type = ui->lineEdit_type_2->text();
    int quantite_t= ui->lineEdit_quantite_2->text().toInt();
    int prix_u = ui->lineEdit_prix_2->text().toInt();
    int quantite_p= ui->lineEdit_quantite_panne_2->text().toInt();



    QString fournisseur = ui->lineEdit_fournisseur_2->text();



        materiel (type, prix_u,quantite_t,quantite_p,fournisseur) ;
        bool test =m.modifier(type ,quantite_t ,prix_u,quantite_p,fournisseur);
        if(test)
        {ui->tableView->setModel(m.afficher());
            QMessageBox::information(nullptr, QObject::tr("modifier un employe"),
                                     QObject::tr("employe  modifié.\n"
                                                 "Click Cancel to exit."), QMessageBox::Cancel);}
        else
            QMessageBox::critical(nullptr, QObject::tr("Modifier un employe"),
                                  QObject::tr("Erreur !.\n"
                                              "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_pushButton_supprimer_2_clicked()
{
    musicClick();


    materiel m;
    m.setType(ui->lineEdit_mt->text());
  bool test=m.supprimer(m.getTYPE());
  QMessageBox msgBox;

  if(test)
  {
      QMessageBox::information(nullptr,QObject::tr("OK"),QObject::tr("suppression effectuée \n click cancel to exit."), QMessageBox::Cancel);
      {ui->tableView->setModel(Etmp.afficher());}

  }
  else
      QMessageBox::critical(nullptr,QObject::tr("NOT OK"),QObject::tr("suppression non effectuer.\n click cancel to exis."), QMessageBox::Cancel);
  msgBox.exec();

}

void MainWindow::on_pushButton_afficher_clicked()
{
    musicClick();

    materiel m;

    {ui->tableView_2->setModel(m.afficher());}
}



void MainWindow::on_pushButton_trier_clicked()
{
    musicClick();

    employee e;
    /*QString critere=ui->cb_historique->currentText();*/
        QString mode;
         if (ui->rb_asc_historique->isChecked()==true)
    {
             ui->tableView->setModel(e.trie());


    }
         else if(ui->rb_desc_historique->isChecked()==true)

             ui->tableView->setModel(e.trie2());






}

void MainWindow::on_L_search_clicked()
{
    musicClick();

    employee e;
    QString text;
    if (ui->radioButton_ID->isChecked()==true)
{
text=ui->lineEdit_idstock->text();
     if(text == "")

     {

         ui->tableView->setModel(e.afficher());

     }

     else

     {



         ui->tableView->setModel(e.chercher_emp(text));

     }
    }
     if(ui->radioButton_salaire->isChecked()==true)
    {
        text=ui->lineEdit_idstock->text();
             if(text == "")

             {

                 ui->tableView->setModel(e.afficher());

             }

             else

             {



                 ui->tableView->setModel(e.chercher_emp1(text));

             }

    }
     else if     (ui->radioButton_nom->isChecked()==true)
     {

         text=ui->lineEdit_idstock->text();
              if(text == "")

              {

                  ui->tableView->setModel(e.afficher());

              }

              else

              {



                  ui->tableView->setModel(e.chercher_emp2(text));

              }
     }
     }



/*void MainWindow::on_pushButton_pdf_clicked()
{
    QPrinter printer;
    printer.setPrinterName ("le nom de l'imprimante");
    QPrintDialog dialog(&printer,this);
    if (dialog.exec()== QDialog::Rejected)
        return;
    ui->tableView_2->render(&printer);
}*/
void MainWindow::on_pushButton_pdf_clicked()
{
    musicClick();

   QDialog QFileDialog;
    QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Export PDF", QString(), "*.pdf");
            if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append("reclamation.pdf"); }

            QPrinter printer(QPrinter::PrinterResolution);
            printer.setOutputFormat(QPrinter::PdfFormat);
            printer.setPaperSize(QPrinter::A4);
            printer.setOutputFileName(fileName);

            /*QPrinter printer;*/
            ui->tableView_2->render(&printer);




            QTextDocument doc;
            QSqlQuery q;
            q.prepare("SELECT * FROM reclamation ");
            q.exec();
            QString pdf="<br> <img src='D:/Esprit/2A2/projet c++/logo/debug2.png' height='42' width='144'/> <h1  style='color:red'>LISTE DES RECLAMATION  <br></h1>\n <br> <table>  <tr>  <th> CODE </th> <th> SUJET </th> <th> COMMENTAIRE </th> <th> DATE AJOUT </th>  </tr>" ;


            while ( q.next()) {

                pdf= pdf+ " <br> <tr> <td>"+ q.value(0).toString()+"    </td>   <td>   " + q.value(1).toString() +"</td>   <td>" +q.value(2).toString() +"  "" " "</td>   <td>"+q.value(3).toString()+"</td>    <td>"+q.value(4).toString()+" </td>" ;

            }
            doc.setHtml(pdf);
            doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
         /*   doc.print(&printer);*/
            ui->tableView_2->render(&printer);


}

void MainWindow::on_pushButton_trie_clicked()
{
    musicClick();

    materiel e;
    /*QString critere=ui->cb_historique->currentText();*/
        QString mode;
         if (ui->rb_mat->isChecked()==true)
   {
             ui->tableView_2->setModel(e.trie());


    }
         else if(ui->rb_mat_2->isChecked()==true)

             ui->tableView_2->setModel(e.trie2());

}


void MainWindow::musicClick()
{
    musicC=new QMediaPlayer();
    musicC->setMedia(QUrl("C:/Users/MSi/Desktop/souissi/10706.mp3"));
    musicC->setVolume(200);
    musicC->play();
}












