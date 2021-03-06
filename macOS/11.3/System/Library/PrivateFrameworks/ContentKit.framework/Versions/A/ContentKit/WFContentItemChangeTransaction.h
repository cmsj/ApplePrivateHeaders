/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/Versions/A/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, WFContentItem;

@interface WFContentItemChangeTransaction : NSObject {

	NSString* _mode;
	WFContentItem* _contentItem;

}

@property (nonatomic,copy) NSString * mode;                              //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) WFContentItem * contentItem;              //@synthesize contentItem=_contentItem - In the implementation block
-(void)setMode:(NSString *)arg1 ;
-(NSString *)mode;
-(id)initWithContentItem:(id)arg1 ;
-(WFContentItem *)contentItem;
-(void)saveWithCompletionHandler:(/*^block*/id)arg1 isNew:(char)arg2 ;
@end

