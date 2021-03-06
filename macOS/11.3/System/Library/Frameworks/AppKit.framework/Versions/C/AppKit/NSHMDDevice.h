/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSSLSHMD, NSString;

@interface NSHMDDevice : NSObject {

	NSSLSHMD* _hmd;
	opaque_pthread_mutex_t _mutex;
	unsigned _attached : 1;
	unsigned _acquired : 1;
	unsigned _awake : 1;

}

@property (getter=isAttached,readonly) char attached; 
@property (getter=isAvailable,readonly) char available; 
@property (getter=isAwake,readonly) char awake; 
@property (copy,readonly) NSString * name; 
@property (readonly) unsigned long long vendorID; 
@property (readonly) unsigned long long productID; 
@property (readonly) unsigned long long serialNumber; 
+(void)initialize;
+(id)devices;
+(id)keyPathsForValuesAffectingAttached;
-(void)dealloc;
-(NSString *)name;
-(unsigned long long)vendorID;
-(char)isAttached;
-(char)isAvailable;
-(char)isAwake;
-(unsigned long long)productID;
-(unsigned long long)serialNumber;
-(id)initWithSLSHMD:(id)arg1 ;
@end

