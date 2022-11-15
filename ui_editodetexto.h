/********************************************************************************
** Form generated from reading UI file 'editodetexto.ui'
**
** Created by: Qt User Interface Compiler version 5.15.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITODETEXTO_H
#define UI_EDITODETEXTO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditoDeTexto
{
public:
    QAction *actionNovo;
    QAction *actionAbrir;
    QAction *actionSalvar;
    QAction *actionSlavar_Coco;
    QAction *actionSair;
    QAction *actionCopiar;
    QAction *actionColar;
    QAction *actionRecortar;
    QAction *actionRefazer;
    QAction *actionDesfazer;
    QAction *actionCor;
    QAction *actionBackground;
    QAction *actionFonte;
    QAction *actionSobre;
    QAction *actionImprimir;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuArquivo;
    QMenu *menuEditar;
    QMenu *menuFormatar;
    QMenu *menuSobre;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *EditoDeTexto)
    {
        if (EditoDeTexto->objectName().isEmpty())
            EditoDeTexto->setObjectName(QString::fromUtf8("EditoDeTexto"));
        EditoDeTexto->resize(688, 344);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/center.png"), QSize(), QIcon::Normal, QIcon::Off);
        EditoDeTexto->setWindowIcon(icon);
        actionNovo = new QAction(EditoDeTexto);
        actionNovo->setObjectName(QString::fromUtf8("actionNovo"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNovo->setIcon(icon1);
        actionAbrir = new QAction(EditoDeTexto);
        actionAbrir->setObjectName(QString::fromUtf8("actionAbrir"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbrir->setIcon(icon2);
        actionSalvar = new QAction(EditoDeTexto);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalvar->setIcon(icon3);
        actionSlavar_Coco = new QAction(EditoDeTexto);
        actionSlavar_Coco->setObjectName(QString::fromUtf8("actionSlavar_Coco"));
        actionSair = new QAction(EditoDeTexto);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSair->setIcon(icon4);
        actionCopiar = new QAction(EditoDeTexto);
        actionCopiar->setObjectName(QString::fromUtf8("actionCopiar"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopiar->setIcon(icon5);
        actionColar = new QAction(EditoDeTexto);
        actionColar->setObjectName(QString::fromUtf8("actionColar"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionColar->setIcon(icon6);
        actionRecortar = new QAction(EditoDeTexto);
        actionRecortar->setObjectName(QString::fromUtf8("actionRecortar"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRecortar->setIcon(icon7);
        actionRefazer = new QAction(EditoDeTexto);
        actionRefazer->setObjectName(QString::fromUtf8("actionRefazer"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRefazer->setIcon(icon8);
        actionDesfazer = new QAction(EditoDeTexto);
        actionDesfazer->setObjectName(QString::fromUtf8("actionDesfazer"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDesfazer->setIcon(icon9);
        actionCor = new QAction(EditoDeTexto);
        actionCor->setObjectName(QString::fromUtf8("actionCor"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/highlight.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCor->setIcon(icon10);
        actionBackground = new QAction(EditoDeTexto);
        actionBackground->setObjectName(QString::fromUtf8("actionBackground"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/background.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBackground->setIcon(icon11);
        actionFonte = new QAction(EditoDeTexto);
        actionFonte->setObjectName(QString::fromUtf8("actionFonte"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/font.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFonte->setIcon(icon12);
        actionSobre = new QAction(EditoDeTexto);
        actionSobre->setObjectName(QString::fromUtf8("actionSobre"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSobre->setIcon(icon13);
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        actionSobre->setFont(font);
        actionImprimir = new QAction(EditoDeTexto);
        actionImprimir->setObjectName(QString::fromUtf8("actionImprimir"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionImprimir->setIcon(icon14);
        centralwidget = new QWidget(EditoDeTexto);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(40, 10, 621, 251));
        EditoDeTexto->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EditoDeTexto);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 688, 22));
        menuArquivo = new QMenu(menubar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        menuEditar = new QMenu(menubar);
        menuEditar->setObjectName(QString::fromUtf8("menuEditar"));
        menuFormatar = new QMenu(menubar);
        menuFormatar->setObjectName(QString::fromUtf8("menuFormatar"));
        menuSobre = new QMenu(menubar);
        menuSobre->setObjectName(QString::fromUtf8("menuSobre"));
        EditoDeTexto->setMenuBar(menubar);
        statusbar = new QStatusBar(EditoDeTexto);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        EditoDeTexto->setStatusBar(statusbar);
        toolBar = new QToolBar(EditoDeTexto);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setMovable(false);
        EditoDeTexto->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuArquivo->menuAction());
        menubar->addAction(menuEditar->menuAction());
        menubar->addAction(menuFormatar->menuAction());
        menubar->addAction(menuSobre->menuAction());
        menuArquivo->addAction(actionNovo);
        menuArquivo->addAction(actionAbrir);
        menuArquivo->addAction(actionSalvar);
        menuArquivo->addAction(actionSlavar_Coco);
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionImprimir);
        menuArquivo->addSeparator();
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionSair);
        menuEditar->addAction(actionCopiar);
        menuEditar->addAction(actionColar);
        menuEditar->addAction(actionRecortar);
        menuEditar->addAction(actionRefazer);
        menuEditar->addAction(actionDesfazer);
        menuFormatar->addAction(actionCor);
        menuFormatar->addAction(actionBackground);
        menuFormatar->addAction(actionFonte);
        menuSobre->addAction(actionSobre);
        toolBar->addAction(actionNovo);
        toolBar->addAction(actionAbrir);
        toolBar->addAction(actionSalvar);
        toolBar->addAction(actionCopiar);
        toolBar->addAction(actionColar);
        toolBar->addAction(actionRecortar);
        toolBar->addAction(actionDesfazer);
        toolBar->addAction(actionRefazer);
        toolBar->addAction(actionImprimir);

        retranslateUi(EditoDeTexto);

        QMetaObject::connectSlotsByName(EditoDeTexto);
    } // setupUi

    void retranslateUi(QMainWindow *EditoDeTexto)
    {
        EditoDeTexto->setWindowTitle(QCoreApplication::translate("EditoDeTexto", "EditoDeTexto", nullptr));
        actionNovo->setText(QCoreApplication::translate("EditoDeTexto", "Novo", nullptr));
#if QT_CONFIG(shortcut)
        actionNovo->setShortcut(QCoreApplication::translate("EditoDeTexto", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbrir->setText(QCoreApplication::translate("EditoDeTexto", "Abrir", nullptr));
#if QT_CONFIG(shortcut)
        actionAbrir->setShortcut(QCoreApplication::translate("EditoDeTexto", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSalvar->setText(QCoreApplication::translate("EditoDeTexto", "Salvar", nullptr));
#if QT_CONFIG(shortcut)
        actionSalvar->setShortcut(QCoreApplication::translate("EditoDeTexto", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSlavar_Coco->setText(QCoreApplication::translate("EditoDeTexto", "Salvar Como", nullptr));
        actionSair->setText(QCoreApplication::translate("EditoDeTexto", "Sair", nullptr));
        actionCopiar->setText(QCoreApplication::translate("EditoDeTexto", "Copiar", nullptr));
#if QT_CONFIG(shortcut)
        actionCopiar->setShortcut(QCoreApplication::translate("EditoDeTexto", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionColar->setText(QCoreApplication::translate("EditoDeTexto", "Colar", nullptr));
#if QT_CONFIG(shortcut)
        actionColar->setShortcut(QCoreApplication::translate("EditoDeTexto", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRecortar->setText(QCoreApplication::translate("EditoDeTexto", "Recortar", nullptr));
#if QT_CONFIG(shortcut)
        actionRecortar->setShortcut(QCoreApplication::translate("EditoDeTexto", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRefazer->setText(QCoreApplication::translate("EditoDeTexto", "Refazer", nullptr));
        actionDesfazer->setText(QCoreApplication::translate("EditoDeTexto", "Desfazer", nullptr));
        actionCor->setText(QCoreApplication::translate("EditoDeTexto", "Cor", nullptr));
        actionBackground->setText(QCoreApplication::translate("EditoDeTexto", "Background", nullptr));
        actionFonte->setText(QCoreApplication::translate("EditoDeTexto", "Fonte", nullptr));
        actionSobre->setText(QCoreApplication::translate("EditoDeTexto", "Sobre", nullptr));
        actionImprimir->setText(QCoreApplication::translate("EditoDeTexto", "Imprimir", nullptr));
        menuArquivo->setTitle(QCoreApplication::translate("EditoDeTexto", "Arquivo", nullptr));
        menuEditar->setTitle(QCoreApplication::translate("EditoDeTexto", "Editar", nullptr));
        menuFormatar->setTitle(QCoreApplication::translate("EditoDeTexto", "Formatar", nullptr));
        menuSobre->setTitle(QCoreApplication::translate("EditoDeTexto", "Sobre", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("EditoDeTexto", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditoDeTexto: public Ui_EditoDeTexto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITODETEXTO_H
