/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/Versions/A/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FPItem, NSString, CSSearchableItem;

@interface CSFPItem : NSObject {

	FPItem* _internal;

}

@property (nonatomic,readonly) NSString * providerIdentifier; 
@property (nonatomic,readonly) NSString * itemIdentifier; 
@property (nonatomic,readonly) CSSearchableItem * searchableItem; 
+(void)initialize;
+(id)itemWithFileURL:(id)arg1 ;
+(id)itemWithFileURL:(id)arg1 forEUID:(unsigned)arg2 ;
-(NSString *)itemIdentifier;
-(NSString *)providerIdentifier;
-(CSSearchableItem *)searchableItem;
-(id)initWithFPItem:(id)arg1 ;
@end

