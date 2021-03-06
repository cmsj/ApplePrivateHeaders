/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, WBSHistoryItem, WBSHistoryVisit;

@interface WBSHistoryVisitIdentifier : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _hash;
	NSString* _urlString;
	double _visitTime;
	WBSHistoryItem* _associatedHistoryItem;
	WBSHistoryVisit* _associatedHistoryVisit;

}

@property (nonatomic,copy,readonly) NSString * urlString;                           //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,readonly) double visitTime;                                    //@synthesize visitTime=_visitTime - In the implementation block
@property (nonatomic,retain) WBSHistoryItem * associatedHistoryItem;                //@synthesize associatedHistoryItem=_associatedHistoryItem - In the implementation block
@property (nonatomic,retain) WBSHistoryVisit * associatedHistoryVisit;              //@synthesize associatedHistoryVisit=_associatedHistoryVisit - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)urlString;
-(double)visitTime;
-(id)initWithURLString:(id)arg1 visitTime:(double)arg2 ;
-(WBSHistoryItem *)associatedHistoryItem;
-(void)setAssociatedHistoryVisit:(WBSHistoryVisit *)arg1 ;
-(void)setAssociatedHistoryItem:(WBSHistoryItem *)arg1 ;
-(WBSHistoryVisit *)associatedHistoryVisit;
@end

