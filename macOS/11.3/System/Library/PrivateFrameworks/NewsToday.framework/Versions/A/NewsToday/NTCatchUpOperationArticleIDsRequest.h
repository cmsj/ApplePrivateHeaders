/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/Versions/A/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopyingNSSecureCoding;
@class NSObject, NSOrderedSet, NSDictionary;

@interface NTCatchUpOperationArticleIDsRequest : NSObject <NSCopying> {

	NSObject*<NSCopying>*<NSSecureCoding> _identifier;
	NSOrderedSet* _articleIDs;
	NSDictionary* _overrideHeadlineMetadataByArticleID;

}

@property (nonatomic,copy) NSObject*<NSCopying>*<NSSecureCoding> identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSOrderedSet * articleIDs;                                       //@synthesize articleIDs=_articleIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * overrideHeadlineMetadataByArticleID;              //@synthesize overrideHeadlineMetadataByArticleID=_overrideHeadlineMetadataByArticleID - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSObject*<NSCopying>*<NSSecureCoding>)identifier;
-(void)setIdentifier:(NSObject*<NSCopying>*<NSSecureCoding>)arg1 ;
-(void)setArticleIDs:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)articleIDs;
-(id)initWithArticleIDs:(id)arg1 overrideHeadlineMetadataByArticleID:(id)arg2 ;
-(NSDictionary *)overrideHeadlineMetadataByArticleID;
-(void)setOverrideHeadlineMetadataByArticleID:(NSDictionary *)arg1 ;
@end

