/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AFInterstitialConfiguration : NSObject <NSCopying, NSSecureCoding> {

	char _isVoiceTrigger;
	char _isDucking;
	char _isTwoShot;
	long long _style;
	NSString* _languageCode;
	long long _gender;
	NSString* _recordRoute;
	unsigned long long _speechEndHostTime;

}

@property (nonatomic,readonly) long long style;                                   //@synthesize style=_style - In the implementation block
@property (nonatomic,copy,readonly) NSString * languageCode;                      //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,readonly) long long gender;                                  //@synthesize gender=_gender - In the implementation block
@property (nonatomic,copy,readonly) NSString * recordRoute;                       //@synthesize recordRoute=_recordRoute - In the implementation block
@property (nonatomic,readonly) char isVoiceTrigger;                               //@synthesize isVoiceTrigger=_isVoiceTrigger - In the implementation block
@property (nonatomic,readonly) char isDucking;                                    //@synthesize isDucking=_isDucking - In the implementation block
@property (nonatomic,readonly) char isTwoShot;                                    //@synthesize isTwoShot=_isTwoShot - In the implementation block
@property (nonatomic,readonly) unsigned long long speechEndHostTime;              //@synthesize speechEndHostTime=_speechEndHostTime - In the implementation block
+(char)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)languageCode;
-(long long)style;
-(long long)gender;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(NSString *)recordRoute;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)initWithStyle:(long long)arg1 languageCode:(id)arg2 gender:(long long)arg3 recordRoute:(id)arg4 isVoiceTrigger:(char)arg5 isDucking:(char)arg6 isTwoShot:(char)arg7 speechEndHostTime:(unsigned long long)arg8 ;
-(char)isVoiceTrigger;
-(char)isDucking;
-(char)isTwoShot;
-(unsigned long long)speechEndHostTime;
@end
