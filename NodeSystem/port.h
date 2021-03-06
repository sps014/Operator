#ifndef PORT_H
#define PORT_H

#include<QQuickItem>
#include<QList>
#include"numberboxcore.h"
#include"textboxcore.h"
#include"checkboxcore.h"
#include"comboboxcore.h"

enum PortType
{
    Input,
    OutPut
};


class Port
{
public:
    Port();
    QQuickItem *Parent;
    float Radius=10;
    QColor PortColor=QColor(Qt::green);
    PortType Type=PortType::Input;
    QPoint Position;
    Port* Target=nullptr;
    Port* InputPort=nullptr;
	QPoint GetWorldPosition();

    QList<NumberBox> NumberBoxList;
    QList<TextBox> TextBoxList;
    QList<CheckBox> CheckBoxList;
	QList<ComboBox> ComboBoxList;

    Port* GetPortNearestAtPosition(QPoint,QObject*,QQuickItem*);
};

#endif // PORT_H
