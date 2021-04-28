/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/Versions/A/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFLoggable.h>

@class NSUUID, NSString;

@interface EFDevice : NSObject <EFLoggable> {

	char _isInternal;
	NSUUID* _identifier;

}

@property (nonatomic,retain) NSUUID * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (assign) char isInternal;                                 //@synthesize isInternal=_isInternal - In the implementation block
@property (readonly) NSString * platformName; 
@property (readonly) char isRunningNative; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setCurrentDevice:(id)arg1 ;
+(id)log;
+(id)currentDevice;
+(id)testingDeviceWithInternal:(char)arg1 ;
+(void)executeWithDeviceIsInternal:(/*^block*/id)arg1 ;
+(void)executeWithDeviceIsExternal:(/*^block*/id)arg1 ;
-(id)_init;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(char)isInternal;
-(void)setIsInternal:(char)arg1 ;
-(NSString *)platformName;
-(char)isPlatform:(long long)arg1 ;
-(char)isAppleSilicon;
-(char)isRunningNative;
@end
