/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface REMFetchResultToken : NSObject <NSSecureCoding> {

	NSDictionary* _persistentHistoryTokens;

}

@property (nonatomic,readonly) NSDictionary * persistentHistoryTokens;              //@synthesize persistentHistoryTokens=_persistentHistoryTokens - In the implementation block
+(char)supportsSecureCoding;
+(id)fetchResultTokenFromDataRepresentation:(id)arg1 error:(id*)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(id)initWithPersistentHistoryTokens:(id)arg1 ;
-(NSDictionary *)persistentHistoryTokens;
@end

