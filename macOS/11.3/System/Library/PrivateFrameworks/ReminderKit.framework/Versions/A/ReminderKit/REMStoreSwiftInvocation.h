/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class REMFetchResultToken, NSString;

@interface REMStoreSwiftInvocation : NSObject <NSSecureCoding> {

	REMFetchResultToken* _fetchResultTokenToDiffAgainst;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) REMFetchResultToken * fetchResultTokenToDiffAgainst;              //@synthesize fetchResultTokenToDiffAgainst=_fetchResultTokenToDiffAgainst - In the implementation block
+(char)supportsSecureCoding;
-(id)init;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFetchResultTokenToDiffAgainst:(id)arg1 ;
-(REMFetchResultToken *)fetchResultTokenToDiffAgainst;
@end
