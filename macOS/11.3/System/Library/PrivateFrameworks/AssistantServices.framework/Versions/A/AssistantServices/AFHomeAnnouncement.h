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
#import <libobjc.A.dylib/AFDictionaryConvertible.h>

@class NSString, NSDate;

@interface AFHomeAnnouncement : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible> {

	NSString* _identifier;
	unsigned long long _startedHostTime;
	unsigned long long _finishedHostTime;
	NSDate* _startedDate;
	NSDate* _finishedDate;

}

@property (nonatomic,copy,readonly) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long startedHostTime;               //@synthesize startedHostTime=_startedHostTime - In the implementation block
@property (nonatomic,readonly) unsigned long long finishedHostTime;              //@synthesize finishedHostTime=_finishedHostTime - In the implementation block
@property (nonatomic,copy,readonly) NSDate * startedDate;                        //@synthesize startedDate=_startedDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * finishedDate;                       //@synthesize finishedDate=_finishedDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)buildDictionaryRepresentation;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(NSDate *)startedDate;
-(NSDate *)finishedDate;
-(unsigned long long)startedHostTime;
-(unsigned long long)finishedHostTime;
-(id)initWithIdentifier:(id)arg1 startedHostTime:(unsigned long long)arg2 finishedHostTime:(unsigned long long)arg3 startedDate:(id)arg4 finishedDate:(id)arg5 ;
@end

