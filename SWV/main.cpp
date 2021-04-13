#include "gui/include/measprotocolui.h"


MeasProtocolUI::MeasProtocolUI(QWidget *parent) : QWidget(parent)
{
    setUp();
}

void MeasProtocolUI::setMeasProtocolUI(QGridLayout *gridLayout)
{
    gridLayout->addWidget(protocolL,0,0,1,1);
    gridLayout->addWidget(protocolCB,0,1,1,1);

    gridLayout->addWidget(startFreqL,1,0,1,1);
    gridLayout->addWidget(startFreqLE,1,1,1,1);

    gridLayout->addWidget(endFreqL,2,0,1,1);
    gridLayout->addWidget(endFreqLE,2,1,1,1);

    gridLayout->addWidget(cycleL,3,0,1,1);
    gridLayout->addWidget(cycleLE,3,1,1,1);

    gridLayout->addWidget(amplitudeL,4,0,1,1);
    gridLayout->addWidget(amplitudeLE,4,1,1,1);

    gridLayout->addWidget(dcOffSetL,5,0,1,1);
    gridLayout->addWidget(dcOffSetLE,5,1,1,1);
    gridLayout->addWidget(startMeas,6,0,1,2);
}

std::map<QString, measConfigData> MeasProtocolUI::getMeasConfigDataMap()
{
    return configData;
}

void MeasProtocolUI::updateMeasConfig()
{
    EISConfigStruct eisConfig = {};
    measConfigData tmpConfigData;
    auto name = protocolCB->currentText();
    auto sf = startFreqLE->text().toFloat();
    auto ef = endFreqLE->text().toFloat();
    auto cy = cycleLE->text().toUShort();
    auto amp = amplitudeLE->text().toFloat();
    auto dc = dcOffSetLE->text().toFloat();
    eisConfig.startFreq = sf;
    eisConfig.endFreq = ef;
    eisConfig.noOfCycles = static_cast<uint8_t>(cy);
    eisConfig.amplitude = amp;
    eisConfig.dcOffset = dc;
    eisConfig.measName = name.toStdString();
    tmpConfigData.Configname = eisConfig.measName;
    tmpConfigData.configData = std::make_any<EISConfigStruct>(eisConfig);
    configData[name] = tmpConfigData;
    emit startMeasSignal();



}
/*QLineEdit* startFreqLE, *endFreqLE, *cycleLE, *amplitudeLE, *dcOffSetLE;
    QLabel * startFreqL, *endFreqL, *cycleL, *amplitudeL, *dcOffSetL, *protocolL;
    QComboBox *protocolCB;*/
void MeasProtocolUI::setUp()
{
    startFreqLE = new QLineEdit(this);
    endFreqLE =  new QLineEdit(this);
    cycleLE = new QLineEdit(this);
    amplitudeLE= new QLineEdit(this);
    dcOffSetLE = new QLineEdit(this);

    startFreqL = new QLabel(this);
    endFreqL =  new QLabel(this);
    cycleL = new QLabel(this);
    amplitudeL= new QLabel(this);
    dcOffSetL = new QLabel(this);
    protocolL = new QLabel(this);

    protocolCB = new QComboBox(this);
    startMeas = new QPushButton(this);
    fillMeUp();
    connect(startMeas, &QPushButton::released, this, &MeasProtocolUI::updateMeasConfig);
}

void MeasProtocolUI::fillMeUp()
{


    protocolCB->addItem(QStringLiteral("EIS"));
     protocolCB->addItem(QStringLiteral("SWV"));
    startFreqL->setText("Start Frequency");
    endFreqL->setText("End Frequency");
    cycleL->setText("Cycles");
    amplitudeL->setText("Amplitude");
    dcOffSetL->setText("DC offset");
    protocolL->setText("Protocol");
    startMeas->setText("Start Measurement");

    }
