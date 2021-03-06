/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/GFPort.h>

@class QCProxyPort, NSString;

@interface QCPort : GFPort {

	Class _baseClass;
	QCPort* _connectedPort;
	QCProxyPort* _proxyPort;
	unsigned long long _timestamp;
	unsigned long long _previousTimestamp;
	unsigned long long _iteration;
	unsigned long long _previousIteration;
	char _updated;
	NSString* _keyCache;
	int _direction;
	unsigned long long _connectedPortTimestamp;
	unsigned long long _kindAndUnits;
	void* _observationInfo;
	id _proExtension;
	unsigned long long _observerCount;
	void** _unused2[1];

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(char)accessInstanceVariablesDirectly;
+(Class)baseClass;
+(id)findOriginalPort:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setObservationInfo:(void*)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)state;
-(id)valueForKey:(id)arg1 ;
-(id)value;
-(char)setState:(id)arg1 ;
-(unsigned long long)_timestamp;
-(int)kind;
-(id)key;
-(char)setValue:(id)arg1 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void*)observationInfo;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(int)direction;
-(Class)valueClass;
-(int)units;
-(char)setStateValue:(id)arg1 ;
-(id)stateValue;
-(void)_setDirection:(int)arg1 ;
-(Class)baseClass;
-(id)initWithNode:(id)arg1 arguments:(id)arg2 ;
-(void)portWillDeleteFromNode;
-(id)setupTooltipView;
-(void)resetTooltipView;
-(id)tooltipString;
-(id)proxyPort;
-(void)willChangeValue;
-(void)didChangeValue;
-(char)canConnectToPort:(id)arg1 ;
-(char)takeValue:(id)arg1 fromPort:(id)arg2 ;
-(char)acceptValuesOfClass:(Class)arg1 ;
-(id)setupParameterView;
-(void)resetParameterView:(id)arg1 ;
-(void)editValueWithEvent:(id)arg1 inView:(id)arg2 atPoint:(CGPoint)arg3 ;
-(id)tooltipExtensionView;
-(CGSize)tooltipExtensionViewSize:(id)arg1 ;
-(id)_argumentsFromAttributesKey:(id)arg1 originalArguments:(id)arg2 ;
-(void)drawPortView:(id)arg1 ;
-(id)connectedPort;
-(id)parentPatch;
-(void)_clearCachedKey;
-(void)_setBaseClass:(Class)arg1 ;
-(char)_execute:(double)arg1 arguments:(id)arg2 ;
-(char)wasUpdated;
-(void)_resetUpdate;
-(void)_setProxyPort:(id)arg1 ;
-(void)_setConnectedPort:(id)arg1 ;
-(SCD_Struct_QC4)md5WithTime:(double)arg1 arguments:(id)arg2 ;
-(id)getConnectedOriginalPort;
@end

