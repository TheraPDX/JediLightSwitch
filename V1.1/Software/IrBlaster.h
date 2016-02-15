#ifndef IrBlaster_H
#define IrBlaster_H

///////////////////////////////////////////////////////////////////////////////////
// Base
///////////////////////////////////////////////////////////////////////////////////
// Send IR Pulses (hopefully becoming a remote control....)
class IrBlaster {
public:
    IrBlaster();
    ~IrBlaster();
    
    virtual bool init();
    
    // TODO: Figure out what to do!
    virtual void send();
};

///////////////////////////////////////////////////////////////////////////////////
// V1
///////////////////////////////////////////////////////////////////////////////////
class IrBlasterV1 : public IrBlaster {
public:
    IrBlasterV1();
};

///////////////////////////////////////////////////////////////////////////////////
// V2
///////////////////////////////////////////////////////////////////////////////////
class IrBlasterV2 : public IrBlaster {
public:
    IrBlasterV2();
    bool init() override;
    void send() override;
private:
    int _irLedPin = A0;
};

#endif