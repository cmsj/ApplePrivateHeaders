/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Versions/A/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <IMSharedUtilities/IMItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <IMSharedUtilities/IMRemoteObjectCoding.h>

@class NSString;

@interface IMLocationShareStatusChangeItem : IMItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding> {

	char _actionable;
	char _expired;
	long long _status;
	NSString* _otherCountryCode;
	NSString* _otherHandle;
	NSString* _otherUnformattedID;
	long long _direction;

}

@property (assign,nonatomic) long long status;                           //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) long long direction;                        //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) char actionable;                            //@synthesize actionable=_actionable - In the implementation block
@property (assign,nonatomic) char expired;                               //@synthesize expired=_expired - In the implementation block
@property (nonatomic,retain) NSString * otherHandle;                     //@synthesize otherHandle=_otherHandle - In the implementation block
@property (nonatomic,retain) NSString * otherUnformattedID;              //@synthesize otherUnformattedID=_otherUnformattedID - In the implementation block
@property (nonatomic,retain) NSString * otherCountryCode;                //@synthesize otherCountryCode=_otherCountryCode - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(long long)status;
-(long long)direction;
-(void)setDirection:(long long)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(char)expired;
-(char)actionable;
-(void)setExpired:(char)arg1 ;
-(id)copyDictionaryRepresentation;
-(char)isLastMessageCandidate;
-(NSString *)otherUnformattedID;
-(void)setOtherUnformattedID:(NSString *)arg1 ;
-(NSString *)otherHandle;
-(void)setOtherHandle:(NSString *)arg1 ;
-(NSString *)otherCountryCode;
-(void)setOtherCountryCode:(NSString *)arg1 ;
-(void)setActionable:(char)arg1 ;
@end
