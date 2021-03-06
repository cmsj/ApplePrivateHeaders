/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSDictionary, NSString;

@interface AMSEngagementAppResponseModel : NSObject {

	NSDate* _created;
	NSDictionary* _definition;

}

@property (readonly) NSDictionary * definition;                //@synthesize definition=_definition - In the implementation block
@property (readonly) NSString * cacheKey; 
@property (readonly) NSDate * created;                         //@synthesize created=_created - In the implementation block
@property (readonly) NSDictionary * responseData; 
+(char)_shouldEvictDefinition:(id)arg1 created:(id)arg2 ;
-(NSDictionary *)definition;
-(NSString *)cacheKey;
-(NSDate *)created;
-(NSDictionary *)responseData;
-(id)initWithCacheObject:(id)arg1 ;
-(id)exportObject;
-(id)initWithData:(id)arg1 cacheInfo:(id)arg2 ;
-(char)matchesEvent:(id)arg1 ;
@end

