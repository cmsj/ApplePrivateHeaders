/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCRunLoopPatch.h>

@class QCStructurePort, NSString, QCStructure;

@interface QCBonjourServices : QCRunLoopPatch {

	QCStructurePort* outputServices;
	NSString* _serviceType;
	char _keylessStructures;
	CFNetServiceBrowserRef _browser;
	CFDictionaryRef _serviceList;
	opaque_pthread_mutex_t _serviceMutex;
	QCStructure* _serviceStructure;

}
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(id)stateKeysWithIdentifier:(id)arg1 ;
+(Class)inspectorClassWithIdentifier:(id)arg1 ;
+(int)executionModeWithIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)state;
-(id)initWithIdentifier:(id)arg1 ;
-(char)setState:(id)arg1 ;
-(id)serviceType;
-(void)setServiceType:(id)arg1 ;
-(char)setup:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(void)cleanup:(id)arg1 ;
-(char)keylessStructures;
-(CFDictionaryRef)_serviceList;
-(void)_setStructure:(id)arg1 ;
@end
