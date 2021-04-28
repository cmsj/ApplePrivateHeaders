/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SocialAppsCore.framework/Versions/A/SocialAppsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SocialAppsCore/SocialAppsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, SOAccountAliasController;

@interface SOAccountAlias : NSObject <NSCopying> {

	char _active;
	char _initialized;
	int _verificationState;
	NSString* _name;
	long long _type;
	NSDictionary* _failureInfo;
	SOAccountAliasController* _controller;

}

@property (assign,nonatomic) char initialized;                                          //@synthesize initialized=_initialized - In the implementation block
@property (assign,nonatomic,__weak) SOAccountAliasController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,readonly) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long type;                                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int verificationState;                                     //@synthesize verificationState=_verificationState - In the implementation block
@property (assign,nonatomic) char active;                                               //@synthesize active=_active - In the implementation block
@property (nonatomic,copy) NSDictionary * failureInfo;                                  //@synthesize failureInfo=_failureInfo - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(long long)type;
-(char)initialized;
-(char)active;
-(void)activate;
-(void)setActive:(char)arg1 ;
-(SOAccountAliasController *)controller;
-(void)deactivate;
-(void)setController:(SOAccountAliasController *)arg1 ;
-(int)verificationState;
-(id)initWithName:(id)arg1 type:(long long)arg2 ;
-(void)setInitialized:(char)arg1 ;
-(void)setVerificationState:(int)arg1 ;
-(id)initWithName:(id)arg1 type:(long long)arg2 controller:(id)arg3 ;
-(id)localizedValidationFalure;
-(long long)validationErrorReason;
-(NSDictionary *)failureInfo;
-(void)setFailureInfo:(NSDictionary *)arg1 ;
@end
