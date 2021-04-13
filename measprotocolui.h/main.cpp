#ifndef MEASPROTOCOLUI_H
#define MEASPROTOCOLUI_H

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QComboBox>
#include <QLabel>
#include <QGridLayout>
#include "lib/include/measConfigData.h"
#include <map>
#include <QString>

class MeasProtocolUI : public QWidget
{
    Q_OBJECT
public:
    explicit MeasProtocolUI(QWidget *parent = nullptr);
    void setMeasProtocolUI(QGridLayout* gridLayout);
    std::map<QString, measConfigData> getMeasConfigDataMap();
     QPushButton* startMeas;

signals:
    void startMeasSignal();

private slots:
    void updateMeasConfig();
private:
    QLineEdit* startFreqLE, *endFreqLE, *cycleLE, *amplitudeLE, *dcOffSetLE;
    QLabel * startFreqL, *endFreqL, *cycleL, *amplitudeL, *dcOffSetL, *protocolL;
    QComboBox *protocolCB;
    std::map<QString, measConfigData> configData;
    void setUp();
    void fillMeUp();

};

#endif // MEASPROTOCOLUI_H
