#include "startwindow.h"
#include "ui_startwindow.h"
#include "playwindow.h"
#include <QDebug>
#include <stdio.h>
#include <QTextStream>
#include <QFileDialog>
#include <QDir>
#include <QTimer>
Startwindow::Startwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Startwindow)
{
    ui->setupUi(this);
    this->setFixedSize(this->size());
    this->setWindowTitle("MEMORY");
    this->setStyleSheet("background-image: url(:/MemoSingleObjects/backgroundWidget3.png)");
    this->ui->lbl_title->setStyleSheet("QLabel {background: rgba(255,255,255,0); color: rgb(213, 216, 220);}");
    this->ui->btn_startgame->setStyleSheet("background: rgba(255,255,255,70); color: rgb(213, 216, 220);");
    this->ui->btn_exit->setStyleSheet("background: rgba(255,255,255,70); color: rgb(213, 216, 220);");
    this->ui->lbl_bestPlayers->setStyleSheet("background: rgba(255,255,255,0); color: rgb(213, 216, 220);");

    //File get data
    QString path("C:\\export\\Benny.M\\Qt\\Merksten\\");
    QDir dir; //->if path is relative. By default the program's working directorey "." is used.
    if(!dir.exists(path))//->Of no directory
    {
        dir.mkpath(path); //Creates the directory path. truf if successfule and path already exists/otherwise false
    }

    QFile fileScoreData(path + "score");
    if (!fileScoreData.open(QFile::ReadOnly | QFile::Text))
    {
        qDebug() << "Error open file";
    }
    QTextStream in(&fileScoreData);
    QString scoreData = in.readAll();

    //Split string and save separated
    QRegExp separator("[(' '|\n]");
    QStringList list1 = scoreData.split(separator);

    QString string1 = list1[0];
    QString string2 = list1[1];
    QString score1 = list1[2];
    QString string4 = list1[3];
    QString string5 = list1[4];
    QString score2 = list1[5];
    QString string7 = list1[6];
    QString string8 = list1[7];
    QString score3 = list1[8];


    int scoreInt1 = score1.toInt();
    int scoreInt2 = score2.toInt();
    int scoreInt3 = score3.toInt();
    setScore1(scoreInt1);
    setScore2(scoreInt2);
    setScore3(scoreInt3);

    this->ui->lbl_bestPlayers->setText(
                string1 + " " + string2 + " " + score1 + "\n" +
                string4 + " " + string5 + " " + score2 + "\n" +
                string7 + " " + string8 + " " + score3);
    fileScoreData.close();

}

Startwindow::~Startwindow()
{
    delete ui;
}

void Startwindow::on_btn_startgame_released()
{
    //Open new play-window
    playwindow* Playwindow = new playwindow();
    Playwindow->show();
    Playwindow->setWindowTitle("MEMORY");
    if(Playwindow->exec() == QDialog::Accepted)
    {
        //Order score and save in member
        int tmpScore = Playwindow->getCounterTires();
        if (tmpScore < getScore3())
        {
            if (tmpScore < getScore2())
            {
                if (tmpScore < getScore1())
                {
                    setScore3(getScore2());
                    setScore2(getScore1());
                    setScore1(tmpScore);
                }
                else
                {
                    setScore3(getScore2());
                    setScore2(tmpScore);
                }
            }
            else
            {
                setScore3(tmpScore);
            }
        }

        //Put score into strings
        QString score1 = QString::number(getScore1());
        QString score2 = QString::number(getScore2());
        QString score3 = QString::number(getScore3());
        //Set score in right order in label
        this->ui->lbl_bestPlayers->setText("1st Place: " + score1 +"\n2nd Place: " + score2 + "\n3rd Place: " + score3);

        QString path("C:\\export\\Benny.M\\Qt\\Merksten\\");
        QDir dir; //->if path is relative. By default the program's working directorey "." is used.
        if(!dir.exists(path))//->Of no directory
        {
            dir.mkpath(path); //Creates the directory path. truf if successfule and path already exists/otherwise false
        }
        QFile fileScoreData(path + "score");
        if (!fileScoreData.open(QFile::ReadOnly | QFile::Text))
        {
            qDebug() << "Error open file";
        }
        QTextStream out(&fileScoreData);
        QString textData = this->ui->lbl_bestPlayers->text();
        out << textData;
        fileScoreData.close();

        Playwindow->~playwindow();
    }
}


void Startwindow::on_btn_exit_released()
{
    this->~Startwindow();

    close();
}
