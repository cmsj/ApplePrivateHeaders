/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/Versions/A/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSString, NSDate, NSSet;

@interface NetworkAnalyticsStateRelay : NSObject {

	NSMutableSet* _defaultGateways;
	char _active;
	char _primary;
	char _knownGood;
	char _rxSignalThresholded;
	char _rxSignalFullBars;
	char _txThresholded;
	char _arpOut;
	char _dnsOut;
	char _internetDnsOut;
	char _stuckDefRoute;
	char _tcpExtraStatsPositive;
	char _apsdFailure;
	unsigned char _powerCostDL;
	unsigned char _powerCostUL;
	unsigned char _signalBars;
	unsigned char _radioTechnology;
	char _lqmAsystole;
	char _supportsIPv4;
	char _supportsIPv6;
	unsigned _rxSignalExemptions;
	unsigned _tcpProgressHintsScore;
	int _linkQuality;
	int _advisory;
	int _lastReportedRxSignalStrength;
	NSString* _interfaceName;
	unsigned long long _interfaceIndex;
	long long _interface;
	unsigned long long _lastReportedL2TxFrames;
	unsigned long long _lastReportedL2TxRetry;
	unsigned long long _lastReportedL2TxFail;
	NSDate* _madePrimaryDate;
	unsigned long long _l2MetricsCount;

}

@property (retain) NSString * interfaceName;                               //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign) unsigned long long interfaceIndex;                      //@synthesize interfaceIndex=_interfaceIndex - In the implementation block
@property (assign) char active;                                            //@synthesize active=_active - In the implementation block
@property (assign) char primary;                                           //@synthesize primary=_primary - In the implementation block
@property (assign) char knownGood;                                         //@synthesize knownGood=_knownGood - In the implementation block
@property (assign) char rxSignalThresholded;                               //@synthesize rxSignalThresholded=_rxSignalThresholded - In the implementation block
@property (assign) char rxSignalFullBars;                                  //@synthesize rxSignalFullBars=_rxSignalFullBars - In the implementation block
@property (assign) char txThresholded;                                     //@synthesize txThresholded=_txThresholded - In the implementation block
@property (assign) char arpOut;                                            //@synthesize arpOut=_arpOut - In the implementation block
@property (assign) char dnsOut;                                            //@synthesize dnsOut=_dnsOut - In the implementation block
@property (assign) char internetDnsOut;                                    //@synthesize internetDnsOut=_internetDnsOut - In the implementation block
@property (assign) char stuckDefRoute;                                     //@synthesize stuckDefRoute=_stuckDefRoute - In the implementation block
@property (assign,nonatomic) unsigned rxSignalExemptions;                  //@synthesize rxSignalExemptions=_rxSignalExemptions - In the implementation block
@property (assign) int linkQuality;                                        //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign) int advisory;                                           //@synthesize advisory=_advisory - In the implementation block
@property (assign) unsigned char powerCostDL;                              //@synthesize powerCostDL=_powerCostDL - In the implementation block
@property (assign) unsigned char powerCostUL;                              //@synthesize powerCostUL=_powerCostUL - In the implementation block
@property (assign) unsigned char signalBars;                               //@synthesize signalBars=_signalBars - In the implementation block
@property (assign) unsigned char radioTechnology;                          //@synthesize radioTechnology=_radioTechnology - In the implementation block
@property (assign) char lqmAsystole;                                       //@synthesize lqmAsystole=_lqmAsystole - In the implementation block
@property (assign) char supportsIPv4;                                      //@synthesize supportsIPv4=_supportsIPv4 - In the implementation block
@property (assign) char supportsIPv6;                                      //@synthesize supportsIPv6=_supportsIPv6 - In the implementation block
@property (assign) int lastReportedRxSignalStrength;                       //@synthesize lastReportedRxSignalStrength=_lastReportedRxSignalStrength - In the implementation block
@property (assign) unsigned long long lastReportedL2TxFrames;              //@synthesize lastReportedL2TxFrames=_lastReportedL2TxFrames - In the implementation block
@property (assign) unsigned long long lastReportedL2TxRetry;               //@synthesize lastReportedL2TxRetry=_lastReportedL2TxRetry - In the implementation block
@property (assign) unsigned long long lastReportedL2TxFail;                //@synthesize lastReportedL2TxFail=_lastReportedL2TxFail - In the implementation block
@property (assign) unsigned long long l2MetricsCount;                      //@synthesize l2MetricsCount=_l2MetricsCount - In the implementation block
@property (retain) NSDate * madePrimaryDate;                               //@synthesize madePrimaryDate=_madePrimaryDate - In the implementation block
@property (readonly) long long interface;                                  //@synthesize interface=_interface - In the implementation block
@property (assign) char tcpExtraStatsPositive;                             //@synthesize tcpExtraStatsPositive=_tcpExtraStatsPositive - In the implementation block
@property (assign) char apsdFailure;                                       //@synthesize apsdFailure=_apsdFailure - In the implementation block
@property (assign) unsigned tcpProgressHintsScore;                         //@synthesize tcpProgressHintsScore=_tcpProgressHintsScore - In the implementation block
@property (readonly) NSSet * defaultGateways; 
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)description;
-(char)active;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)setActive:(char)arg1 ;
-(long long)interface;
-(int)advisory;
-(unsigned long long)interfaceIndex;
-(NSString *)interfaceName;
-(void)setInterfaceIndex:(unsigned long long)arg1 ;
-(void)setInterfaceName:(NSString *)arg1 ;
-(int)linkQuality;
-(unsigned char)radioTechnology;
-(void)setRadioTechnology:(unsigned char)arg1 ;
-(void)setLinkQuality:(int)arg1 ;
-(char)primary;
-(void)setPrimary:(char)arg1 ;
-(unsigned char)powerCostDL;
-(unsigned char)powerCostUL;
-(void)setPowerCostDL:(unsigned char)arg1 ;
-(void)setPowerCostUL:(unsigned char)arg1 ;
-(NSDate *)madePrimaryDate;
-(void)setRxSignalThresholded:(char)arg1 ;
-(void)setSupportsIPv4:(char)arg1 ;
-(void)setSupportsIPv6:(char)arg1 ;
-(void)setLastReportedL2TxFrames:(unsigned long long)arg1 ;
-(void)setLastReportedL2TxFail:(unsigned long long)arg1 ;
-(char)rxSignalThresholded;
-(char)supportsIPv4;
-(char)supportsIPv6;
-(unsigned long long)lastReportedL2TxFrames;
-(unsigned long long)lastReportedL2TxFail;
-(void)setSignalBars:(unsigned char)arg1 ;
-(unsigned char)signalBars;
-(char)rxSignalFullBars;
-(char)txThresholded;
-(char)arpOut;
-(char)dnsOut;
-(char)internetDnsOut;
-(char)stuckDefRoute;
-(unsigned)rxSignalExemptions;
-(char)tcpExtraStatsPositive;
-(char)apsdFailure;
-(unsigned)tcpProgressHintsScore;
-(char)knownGood;
-(void)setKnownGood:(char)arg1 ;
-(void)setRxSignalFullBars:(char)arg1 ;
-(void)setTxThresholded:(char)arg1 ;
-(void)setArpOut:(char)arg1 ;
-(void)setDnsOut:(char)arg1 ;
-(void)setInternetDnsOut:(char)arg1 ;
-(void)setStuckDefRoute:(char)arg1 ;
-(void)setRxSignalExemptions:(unsigned)arg1 ;
-(void)setTcpExtraStatsPositive:(char)arg1 ;
-(void)setApsdFailure:(char)arg1 ;
-(void)setTcpProgressHintsScore:(unsigned)arg1 ;
-(void)setAdvisory:(int)arg1 ;
-(char)lqmAsystole;
-(void)setLqmAsystole:(char)arg1 ;
-(void)addDefaultGateway:(id)arg1 ;
-(void)removeAllDefaultGateways;
-(NSSet *)defaultGateways;
-(void)populatePropertiesOnAWDMetric:(id)arg1 ingress:(char)arg2 ;
-(void)updateSignalStrength:(id)arg1 ;
-(id)initForInternalType:(long long)arg1 ;
-(int)lastReportedRxSignalStrength;
-(void)setLastReportedRxSignalStrength:(int)arg1 ;
-(unsigned long long)lastReportedL2TxRetry;
-(void)setLastReportedL2TxRetry:(unsigned long long)arg1 ;
-(void)setMadePrimaryDate:(NSDate *)arg1 ;
-(unsigned long long)l2MetricsCount;
-(void)setL2MetricsCount:(unsigned long long)arg1 ;
@end
