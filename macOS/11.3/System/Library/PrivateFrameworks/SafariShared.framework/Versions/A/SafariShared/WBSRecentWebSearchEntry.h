/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface WBSRecentWebSearchEntry : NSObject {

	NSString* _searchString;
	NSDate* _date;

}

@property (readonly) NSString * searchString;              //@synthesize searchString=_searchString - In the implementation block
@property (readonly) NSDate * date;                        //@synthesize date=_date - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(NSDate *)date;
-(id)dictionaryRepresentation;
-(NSString *)searchString;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithSearchString:(id)arg1 ;
-(id)initWithSearchString:(id)arg1 date:(id)arg2 ;
@end

